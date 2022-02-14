
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int baud_rate; int rx_flow_ctrl_thresh; int flow_ctrl; int stop_bits; int parity; int data_bits; } ;
typedef TYPE_1__ uart_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__,int,int,int,int *,int ) ;
 int FUNC_1 (scalar_t__,TYPE_1__*) ;
 int FUNC_2 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,char*,int,void*,int,int *) ;

__attribute__((used)) static void FUNC_4(void)
{
    uart_config_t VAR_8 = {
        .baud_rate = 115200,
        .data_bits = VAR_0,
        .parity = VAR_3,
        .stop_bits = VAR_5,
        .flow_ctrl = VAR_1,
        .rx_flow_ctrl_thresh = 122,
    };


    FUNC_1(VAR_2, &VAR_8);

    FUNC_2(VAR_2, VAR_4, VAR_4, VAR_4, VAR_4);

    FUNC_0(VAR_2, 4096, 8192, 10, &VAR_6, 0);
    FUNC_3(VAR_7, "uTask", 2048, (void*)VAR_2, 8, ((void*)0));
}
