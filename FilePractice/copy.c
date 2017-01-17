#include <fcntl.h>
#include <stdio.h>

int
main() {
    int fd = open("/Users/zhangguijiang/tmpDoc/test", O_RDONLY);
    printf("文件号：%d\n", fd);
    char buf[10];
    int ssize = read(fd, buf, 5);
    printf("读取的size：%d\n", ssize);
    printf("读取的内容：%s\n", buf);
    ssize = read(fd, buf, 50);
    printf("读取的size：%d\n", ssize);
    printf("读取的内容：%s\n", buf);
    close(fd);
}