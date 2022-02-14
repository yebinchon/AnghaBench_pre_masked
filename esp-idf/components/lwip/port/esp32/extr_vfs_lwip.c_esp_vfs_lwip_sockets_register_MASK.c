
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * stop_socket_select_isr; int * stop_socket_select; int * get_socket_select_semaphore; int * socket_select; int * ioctl; int * fcntl; int * read; int * close; int * fstat; int * open; int * write; int flags; } ;
typedef TYPE_1__ esp_vfs_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_2(void)
{
    esp_vfs_t VAR_12 = {
        .flags = VAR_0,
        .write = &VAR_11,
        .open = ((void*)0),
        .fstat = ((void*)0),
        .close = &VAR_3,
        .read = &VAR_7,
        .fcntl = &VAR_4,
        .ioctl = &VAR_6,
        .socket_select = &VAR_8,
        .get_socket_select_semaphore = &VAR_5,
        .stop_socket_select = &VAR_9,
        .stop_socket_select_isr = &VAR_10,
    };





    FUNC_0(FUNC_1(&VAR_12, ((void*)0), VAR_1, VAR_2));
}
