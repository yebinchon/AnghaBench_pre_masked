
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int baud_rate; int flow_ctrl; int stop_bits; int parity; int data_bits; } ;
typedef TYPE_1__ uart_config_t ;
struct timeval {int tv_sec; int tv_usec; } ;
typedef int fd_set ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int,char*,int) ;
 int FUNC_9 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_10 (int ,int,int ,int ,int *,int ) ;
 int FUNC_11 (int ,TYPE_1__*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(void *VAR_9)
{
    uart_config_t VAR_10 = {
        .baud_rate = 115200,
        .data_bits = VAR_2,
        .parity = VAR_5,
        .stop_bits = VAR_6,
        .flow_ctrl = VAR_3
    };
    FUNC_11(VAR_4, &VAR_10);
    FUNC_10(VAR_4, 2*1024, 0, 0, ((void*)0), 0);

    while (1) {
        int VAR_11;

        if ((VAR_11 = FUNC_7("/dev/uart/0", VAR_0)) == -1) {
            FUNC_0(VAR_1, "Cannot open UART");
            FUNC_12(5000 / VAR_8);
            continue;
        }


        FUNC_6(0);

        while (1) {
            int VAR_12;
            fd_set VAR_13;
            struct timeval VAR_14 = {
                .tv_sec = 5,
                .tv_usec = 0,
            };

            FUNC_4(&VAR_13);
            FUNC_3(VAR_11, &VAR_13);

            VAR_12 = FUNC_9(VAR_11 + 1, &VAR_13, ((void*)0), ((void*)0), &VAR_14);

            if (VAR_12 < 0) {
                FUNC_0(VAR_1, "Select failed: errno %d", VAR_7);
                break;
            } else if (VAR_12 == 0) {
                FUNC_1(VAR_1, "Timeout has been reached and nothing has been received");
            } else {
                if (FUNC_2(VAR_11, &VAR_13)) {
                    char VAR_15;
                    if (FUNC_8(VAR_11, &VAR_15, 1) > 0) {
                        FUNC_1(VAR_1, "Received: %c", VAR_15);



                    } else {
                        FUNC_0(VAR_1, "UART read error");
                        break;
                    }
                } else {
                    FUNC_0(VAR_1, "No FD has been set in select()");
                    break;
                }
            }
        }

        FUNC_5(VAR_11);
    }

    FUNC_13(((void*)0));
}
