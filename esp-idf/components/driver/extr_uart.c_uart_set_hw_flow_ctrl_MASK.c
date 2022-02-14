
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uart_port_t ;
typedef int uart_hw_flowcontrol_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int tx_flow_en; } ;
struct TYPE_6__ {int rx_flow_en; scalar_t__ rx_flow_thrhd; } ;
struct TYPE_5__ {scalar_t__ rx_flow_thrhd; } ;
struct TYPE_8__ {TYPE_3__ conf0; TYPE_2__ conf1; TYPE_1__ mem_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int * VAR_8 ;

esp_err_t FUNC_3(uart_port_t VAR_9, uart_hw_flowcontrol_t VAR_10, uint8_t VAR_11)
{
    FUNC_0((VAR_9 < VAR_7), "uart_num error", VAR_0);
    FUNC_0((VAR_11 < VAR_3), "rx flow thresh error", VAR_0);
    FUNC_0((VAR_10 < VAR_5), "hw_flowctrl mode error", VAR_0);
    FUNC_1(&VAR_8[VAR_9]);
    if (VAR_10 & VAR_6) {





        VAR_2[VAR_9]->conf1.rx_flow_en = 1;
    } else {
        VAR_2[VAR_9]->conf1.rx_flow_en = 0;
    }
    if (VAR_10 & VAR_4) {
        VAR_2[VAR_9]->conf0.tx_flow_en = 1;
    } else {
        VAR_2[VAR_9]->conf0.tx_flow_en = 0;
    }
    FUNC_2(&VAR_8[VAR_9]);
    return VAR_1;
}
