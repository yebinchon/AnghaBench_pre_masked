
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int sw_dtr; } ;
struct TYPE_4__ {TYPE_1__ conf0; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__** VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_3 ;
 int * VAR_4 ;

esp_err_t FUNC_3(uart_port_t VAR_5, int VAR_6)
{
    FUNC_0((VAR_5 < VAR_3), "uart_num error", VAR_0);
    FUNC_1(&VAR_4[VAR_5]);
    VAR_2[VAR_5]->conf0.sw_dtr = VAR_6 & 0x1;
    FUNC_2(&VAR_4[VAR_5]);
    return VAR_1;
}
