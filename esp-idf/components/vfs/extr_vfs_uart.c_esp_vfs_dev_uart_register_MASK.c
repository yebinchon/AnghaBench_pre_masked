
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * tcflush; int * tcdrain; int * tcgetattr; int * tcsetattr; int * end_select; int * start_select; int * access; int * fsync; int * fcntl; int * read; int * close; int * fstat; int * open; int * write; int flags; } ;
typedef TYPE_1__ esp_vfs_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_1__*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_2(void)
{
    esp_vfs_t VAR_15 = {
        .flags = VAR_0,
        .write = &VAR_14,
        .open = &VAR_7,
        .fstat = &VAR_5,
        .close = &VAR_2,
        .read = &VAR_8,
        .fcntl = &VAR_4,
        .fsync = &VAR_6,
        .access = &VAR_1,
        .start_select = &VAR_9,
        .end_select = &VAR_3,






    };
    FUNC_0(FUNC_1("/dev/uart", &VAR_15, ((void*)0)));
}
