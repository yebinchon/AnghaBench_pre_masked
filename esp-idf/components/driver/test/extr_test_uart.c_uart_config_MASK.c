
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int use_ref_tick; int flow_ctrl; int stop_bits; int parity; int data_bits; int baud_rate; } ;
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
 int FUNC_0 (int ,int,int,int,int *,int ) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(uint32_t VAR_9, bool VAR_10)
{
    uart_config_t VAR_11 = {
        .baud_rate = VAR_9,
        .data_bits = VAR_3,
        .parity = VAR_6,
        .stop_bits = VAR_8,
        .flow_ctrl = VAR_4,
        .use_ref_tick = VAR_10,
    };
    FUNC_1(VAR_5, &VAR_11);
    FUNC_2(VAR_5, VAR_2, VAR_1, VAR_7, VAR_7);
    FUNC_0(VAR_5, VAR_0 * 2, VAR_0 * 2, 20, ((void*)0), 0);
}
