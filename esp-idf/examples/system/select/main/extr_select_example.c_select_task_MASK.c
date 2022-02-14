
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_sec; int tv_usec; } ;
typedef int fd_set ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int *,char*) ;
 int VAR_1 ;
 int FUNC_6 (scalar_t__,int *,int *,int *,struct timeval*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_4)
{
    while (1) {
        int VAR_5;
        fd_set VAR_6;
        struct timeval VAR_7 = {
            .tv_sec = 1,
            .tv_usec = 0,
        };

        FUNC_3(&VAR_6);
        FUNC_2(VAR_3, &VAR_6);
        FUNC_2(VAR_2, &VAR_6);

        VAR_5 = FUNC_6(FUNC_4(VAR_3, VAR_2) + 1, &VAR_6, ((void*)0), ((void*)0), &VAR_7);

        if (VAR_5 < 0) {
            FUNC_0(VAR_0, "Select failed: errno %d", VAR_1);
        } else if (VAR_5 == 0) {
            FUNC_1(VAR_0, "Timeout has been reached and nothing has been received");
        } else {
            FUNC_5(VAR_2, &VAR_6, "socket");
            FUNC_5(VAR_3, &VAR_6, "UART1");
        }
    }

    FUNC_7(((void*)0));
}
