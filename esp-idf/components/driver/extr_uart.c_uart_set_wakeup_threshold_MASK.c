
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int active_threshold; } ;
struct TYPE_4__ {TYPE_1__ sleep_conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_4 ;
 size_t VAR_5 ;

esp_err_t FUNC_1(uart_port_t VAR_6, int VAR_7)
{
    FUNC_0((VAR_6 < VAR_5), "uart_num error", VAR_0);
    FUNC_0((VAR_7 <= VAR_3 &&
                VAR_7 > VAR_4),
               "wakeup_threshold out of bounds", VAR_0);

    VAR_2[VAR_6]->sleep_conf.active_threshold = VAR_7 - VAR_4;
    return VAR_1;
}
