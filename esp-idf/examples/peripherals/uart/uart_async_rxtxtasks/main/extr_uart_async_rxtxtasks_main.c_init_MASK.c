
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
 int FUNC_0 (int ,int,int ,int ,int *,int ) ;
 int FUNC_1 (int ,TYPE_1__ const*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

void FUNC_3(void) {
    const uart_config_t VAR_9 = {
        .baud_rate = 115200,
        .data_bits = VAR_3,
        .parity = VAR_6,
        .stop_bits = VAR_8,
        .flow_ctrl = VAR_4
    };
    FUNC_1(VAR_5, &VAR_9);
    FUNC_2(VAR_5, VAR_2, VAR_0, VAR_7, VAR_7);

    FUNC_0(VAR_5, VAR_1 * 2, 0, 0, ((void*)0), 0);
}
