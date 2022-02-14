
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uart_port_t ;
typedef int uart_hw_flowcontrol_t ;
typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__ tx_flow_en; } ;
struct TYPE_4__ {scalar_t__ rx_flow_en; } ;
struct TYPE_6__ {TYPE_2__ conf0; TYPE_1__ conf1; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;

esp_err_t FUNC_1(uart_port_t VAR_7, uart_hw_flowcontrol_t *VAR_8)
{
    FUNC_0((VAR_7 < VAR_6), "uart_num error", VAR_0);
    uart_hw_flowcontrol_t VAR_9 = VAR_4;
    if (VAR_2[VAR_7]->conf1.rx_flow_en) {
        VAR_9 |= VAR_5;
    }
    if (VAR_2[VAR_7]->conf0.tx_flow_en) {
        VAR_9 |= VAR_3;
    }
    (*VAR_8) = VAR_9;
    return VAR_1;
}
