
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ File ;


 int FUNC_0 (int ,void*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int,char*,...) ;

__attribute__((used)) static int
FUNC_3(File *VAR_0, void *VAR_1, int VAR_2, int *VAR_3, char *VAR_4)
{
    int VAR_5;

    VAR_5 = FUNC_0(VAR_0->fd, VAR_1, VAR_2);
    if (VAR_5 == -1) {
        FUNC_1("read");
        FUNC_2(VAR_0, 0, "error reading %s", VAR_4);
        *VAR_3 = 1;
        return 0;
    }
    if (VAR_5 != VAR_2) {
        FUNC_2(VAR_0, -VAR_5, "unexpected EOF reading %d bytes (got %d): %s", VAR_2, VAR_5, VAR_4);
        *VAR_3 = 1;
        return 0;
    }
    return VAR_5;
}
