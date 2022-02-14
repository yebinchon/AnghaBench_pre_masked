
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_3__ {scalar_t__ tx_idle_num; } ;
struct TYPE_4__ {TYPE_1__ idle_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;

esp_err_t FUNC_3(uart_port_t VAR_6, uint16_t VAR_7)
{
    FUNC_0((VAR_6 < VAR_3), "uart_num error", VAR_0);
    FUNC_0((VAR_7 <= VAR_4), "uart idle num error", VAR_0);

    FUNC_1(&VAR_5[VAR_6]);
    VAR_2[VAR_6]->idle_conf.tx_idle_num = VAR_7;
    FUNC_2(&VAR_5[VAR_6]);
    return VAR_1;
}
