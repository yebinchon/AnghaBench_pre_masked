
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ sock; } ;
typedef TYPE_1__ transport_tcp_t ;
struct timeval {int dummy; } ;
typedef int sock_errno ;
typedef int fd_set ;
typedef int esp_transport_handle_t ;


 int FUNC_0 (int ,char*,int,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int,struct timeval*) ;
 int FUNC_6 (scalar_t__,int ,int ,int*,int*) ;
 int FUNC_7 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(esp_transport_handle_t VAR_3, int VAR_4)
{
    transport_tcp_t *VAR_5 = FUNC_4(VAR_3);
    int VAR_6 = -1;
    fd_set VAR_7;
    fd_set VAR_8;
    FUNC_3(&VAR_7);
    FUNC_3(&VAR_8);
    FUNC_2(VAR_5->sock, &VAR_7);
    FUNC_2(VAR_5->sock, &VAR_8);
    struct timeval VAR_9;
    FUNC_5(VAR_4, &VAR_9);
    VAR_6 = FUNC_7(VAR_5->sock + 1, &VAR_7, ((void*)0), &VAR_8, &VAR_9);
    if (VAR_6 > 0 && FUNC_1(VAR_5->sock, &VAR_8)) {
        int VAR_10 = 0;
        uint32_t VAR_11 = sizeof(VAR_10);
        FUNC_6(VAR_5->sock, VAR_0, VAR_1, &VAR_10, &VAR_11);
        FUNC_0(VAR_2, "tcp_poll_read select error %d, errno = %s, fd = %d", VAR_10, FUNC_8(VAR_10), VAR_5->sock);
        VAR_6 = -1;
    }
    return VAR_6;
}
