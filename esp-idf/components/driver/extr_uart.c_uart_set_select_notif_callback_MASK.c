
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uart_select_notif_callback_t ;
typedef size_t uart_port_t ;
struct TYPE_2__ {scalar_t__ uart_select_notif_callback; } ;


 size_t VAR_0 ;
 TYPE_1__** VAR_1 ;

void FUNC_0(uart_port_t VAR_2, uart_select_notif_callback_t VAR_3)
{
    if (VAR_2 < VAR_0 && VAR_1[VAR_2]) {
        VAR_1[VAR_2]->uart_select_notif_callback = (uart_select_notif_callback_t) VAR_3;
    }
}
