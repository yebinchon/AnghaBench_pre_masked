
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int baud_rate; int flow_ctrl; int stop_bits; int parity; int data_bits; } ;
typedef TYPE_2__ uart_config_t ;
struct TYPE_5__ {int loopback; } ;
struct TYPE_7__ {TYPE_1__ conf0; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int,int ,int ,int *,int ) ;
 int VAR_9 ;
 int FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(void)
{
    uart_config_t VAR_10 = {
        .baud_rate = 115200,
        .data_bits = VAR_4,
        .parity = VAR_7,
        .stop_bits = VAR_8,
        .flow_ctrl = VAR_5
    };
    FUNC_5(VAR_6, &VAR_10);
    FUNC_4(VAR_6, 256, 0, 0, ((void*)0), 0);
    VAR_3 = 1;

    if ((VAR_9 = FUNC_2("/dev/uart/1", VAR_1 | VAR_0)) == -1) {
        FUNC_0(VAR_2, "Cannot open UART1");
        FUNC_3();
    }

    FUNC_1(1);
}
