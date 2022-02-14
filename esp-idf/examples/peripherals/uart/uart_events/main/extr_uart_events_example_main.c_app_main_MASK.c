
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int baud_rate; int flow_ctrl; int stop_bits; int parity; int data_bits; } ;
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
 int FUNC_0 (int ,int ) ;
 int VAR_10 ;
 int FUNC_1 (int ,int,int,int,int *,int ) ;
 int FUNC_2 (int ,char,int ,int,int ,int ) ;
 int VAR_11 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,char*,int,int *,int,int *) ;

void FUNC_7(void)
{
    FUNC_0(VAR_4, VAR_1);



    uart_config_t VAR_12 = {
        .baud_rate = 115200,
        .data_bits = VAR_5,
        .parity = VAR_7,
        .stop_bits = VAR_9,
        .flow_ctrl = VAR_6
    };
    FUNC_3(VAR_2, &VAR_12);


    FUNC_0(VAR_4, VAR_1);

    FUNC_5(VAR_2, VAR_8, VAR_8, VAR_8, VAR_8);

    FUNC_1(VAR_2, VAR_0 * 2, VAR_0 * 2, 20, &VAR_10, 0);


    FUNC_2(VAR_2, '+', VAR_3, 9, 0, 0);

    FUNC_4(VAR_2, 20);


    FUNC_6(VAR_11, "uart_event_task", 2048, ((void*)0), 12, ((void*)0));
}
