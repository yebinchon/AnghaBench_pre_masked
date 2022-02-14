
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
 int FUNC_0 (int,char*,int ) ;
 int VAR_3 ;
 size_t VAR_4 ;

esp_err_t FUNC_1(uart_port_t VAR_5, int *VAR_6)
{
    FUNC_0((VAR_5 < VAR_4), "uart_num error", VAR_0);
    FUNC_0((VAR_6 != ((void*)0)), "argument is NULL", VAR_0);

    *VAR_6 = VAR_2[VAR_5]->sleep_conf.active_threshold + VAR_3;
    return VAR_1;
}
