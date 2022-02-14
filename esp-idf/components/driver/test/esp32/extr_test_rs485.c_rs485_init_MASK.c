
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_flow_ctrl_thresh; int flow_ctrl; int stop_bits; int parity; int data_bits; int baud_rate; } ;
typedef TYPE_1__ uart_config_t ;


 int VAR_0 ;
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
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int,int ,int ,int *,int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(void)
{
    uart_config_t VAR_12 = {
        .baud_rate = VAR_4,
        .data_bits = VAR_5,
        .parity = VAR_9,
        .stop_bits = VAR_11,
        .flow_ctrl = VAR_6,
        .rx_flow_ctrl_thresh = 122,
    };
    FUNC_0("RS485 port initialization...\r\n");

    FUNC_2(VAR_8, &VAR_12);

    FUNC_4(VAR_8, VAR_3, VAR_2, VAR_1, VAR_10);

    FUNC_1(VAR_8, VAR_0 * 2, 0, 0, ((void*)0), 0);


    FUNC_3(VAR_8, VAR_7);
}
