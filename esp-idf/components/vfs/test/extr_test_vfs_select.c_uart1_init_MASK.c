
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
 int FUNC_0 (int ,int,int,int ,int *,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(void)
{
    uart_config_t VAR_5 = {
        .baud_rate = 115200,
        .data_bits = VAR_0,
        .parity = VAR_3,
        .stop_bits = VAR_4,
        .flow_ctrl = VAR_1
    };
    FUNC_1(VAR_2, &VAR_5);
    FUNC_0(VAR_2, 256, 256, 0, ((void*)0), 0);
}
