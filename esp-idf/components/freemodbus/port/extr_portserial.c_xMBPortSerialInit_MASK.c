
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int data_bits; int parity; int rx_flow_ctrl_thresh; int flow_ctrl; int stop_bits; int baud_rate; } ;
typedef TYPE_1__ uart_config_t ;
typedef scalar_t__ esp_err_t ;
typedef int eMBParity ;
typedef int ULONG ;
typedef int UCHAR ;
typedef scalar_t__ BaseType_t ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int,int,char*,...) ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_1 (int,int ,int ,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_6 (int ,char*,int ,int *,int ,int *) ;

BOOL FUNC_7(UCHAR VAR_24, ULONG VAR_25,
                        UCHAR VAR_26, eMBParity VAR_27)
{
    esp_err_t VAR_28 = VAR_0;
    FUNC_0((VAR_27 <= 130), VAR_1, "mb serial set parity failure.");

    VAR_19 = VAR_24;

    UCHAR VAR_29 = VAR_14;
    UCHAR VAR_30 = VAR_12;
    switch(VAR_27){
        case 129:
            VAR_29 = VAR_14;
            break;
        case 128:
            VAR_29 = VAR_16;
            break;
        case 130:
            VAR_29 = VAR_15;
            break;
    }
    switch(VAR_26){
        case 5:
            VAR_30 = VAR_9;
            break;
        case 6:
            VAR_30 = VAR_10;
            break;
        case 7:
            VAR_30 = VAR_11;
            break;
        case 8:
            VAR_30 = VAR_12;
            break;
        default:
            VAR_30 = VAR_12;
            break;
    }
    uart_config_t VAR_31 = {
        .baud_rate = VAR_25,
        .data_bits = VAR_30,
        .parity = VAR_29,
        .stop_bits = VAR_17,
        .flow_ctrl = VAR_13,
        .rx_flow_ctrl_thresh = 2,
    };

    VAR_28 = FUNC_2(VAR_19, &VAR_31);
    FUNC_0((VAR_28 == VAR_0),
            VAR_1, "mb config failure, uart_param_config() returned (0x%x).", (uint32_t)VAR_28);

    VAR_28 = FUNC_1(VAR_19, VAR_4, VAR_4,
                                    VAR_3, &VAR_23, VAR_2);
    FUNC_0((VAR_28 == VAR_0), VAR_1,
            "mb serial driver failure, uart_driver_install() returned (0x%x).", (uint32_t)VAR_28);


    VAR_28 = FUNC_3(VAR_19, VAR_7);
    FUNC_0((VAR_28 == VAR_0), VAR_1,
            "mb serial set rx timeout failure, uart_set_rx_timeout() returned (0x%x).", (uint32_t)VAR_28);


    BaseType_t VAR_32 = FUNC_6(VAR_21, "uart_queue_task", VAR_6,
                                        ((void*)0), VAR_5, &VAR_22);
    if (VAR_32 != VAR_18) {
        FUNC_4(VAR_22);

        FUNC_0(VAR_1, VAR_1,
                "mb stack serial task creation error. xTaskCreate() returned (0x%x).",
                (uint32_t)VAR_32);
    } else {
        FUNC_5(VAR_22);
    }
    VAR_20 = 0;
    return VAR_8;
}
