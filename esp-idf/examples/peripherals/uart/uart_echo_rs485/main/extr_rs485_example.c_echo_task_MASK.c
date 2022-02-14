
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int rx_flow_ctrl_thresh; int flow_ctrl; int stop_bits; int parity; int data_bits; int baud_rate; } ;
typedef TYPE_1__ uart_config_t ;
typedef int prefix ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int const,int,int ,int ,int *,int ) ;
 int FUNC_5 (int const,TYPE_1__*) ;
 int FUNC_6 (int const,int*,int,int ) ;
 int FUNC_7 (int const,int ) ;
 int FUNC_8 (int const,int ,int ,int ,int ) ;
 int FUNC_9 (int const,char const*,int) ;

__attribute__((used)) static void FUNC_10(void *VAR_15)
{
    const int VAR_16 = VAR_6;
    uart_config_t VAR_17 = {
        .baud_rate = VAR_0,
        .data_bits = VAR_10,
        .parity = VAR_13,
        .stop_bits = VAR_14,
        .flow_ctrl = VAR_11,
        .rx_flow_ctrl_thresh = 122,
    };


    FUNC_1(VAR_9, VAR_7);

    FUNC_0(VAR_9, "Start RS485 application test and configure UART.");


    FUNC_5(VAR_16, &VAR_17);

    FUNC_0(VAR_9, "UART set pins, mode and install driver.");

    FUNC_8(VAR_16, VAR_5, VAR_4, VAR_3, VAR_2);



    FUNC_4(VAR_16, VAR_1 * 2, 0, 0, ((void*)0), 0);


    FUNC_7(VAR_16, VAR_12);


    uint8_t* VAR_18 = (uint8_t*) FUNC_2(VAR_1);

    FUNC_0(VAR_9, "UART start recieve loop.\r\n");
    FUNC_9(VAR_16, "Start RS485 UART test.\r\n", 24);

    while(1) {

        int VAR_19 = FUNC_6(VAR_16, VAR_18, VAR_1, VAR_8);


        if (VAR_19 > 0) {
            FUNC_9(VAR_16, "\r\n", 2);
            char VAR_20[] = "RS485 Received: [";
            FUNC_9(VAR_16, VAR_20, (sizeof(VAR_20) - 1));

            FUNC_0(VAR_9, "Received %u bytes:", VAR_19);
            FUNC_3("[ ");
            for (int VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
                FUNC_3("0x%.2X ", (uint8_t)VAR_18[VAR_21]);
                FUNC_9(VAR_16, (const char*)&VAR_18[VAR_21], 1);

                if (VAR_18[VAR_21] == '\r') {
                    FUNC_9(VAR_16, "\n", 1);
                }
            }
            FUNC_3("] \n");
            FUNC_9(VAR_16, "]\r\n", 3);
        } else {

            FUNC_9(VAR_16, ".", 1);
        }
    }
}
