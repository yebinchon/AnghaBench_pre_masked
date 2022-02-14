
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uart_port_t ;
typedef int esp_err_t ;
struct TYPE_2__ {int * intr_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 size_t VAR_2 ;
 int FUNC_3 (int *) ;
 TYPE_1__** VAR_3 ;
 int * VAR_4 ;

esp_err_t FUNC_4(uart_port_t VAR_5)
{
    esp_err_t VAR_6;
    FUNC_0((VAR_5 < VAR_2), "uart_num error", VAR_1);
    if (VAR_3[VAR_5]->intr_handle == ((void*)0)) {
        return VAR_0;
    }
    FUNC_1(&VAR_4[VAR_5]);
    VAR_6 = FUNC_3(VAR_3[VAR_5]->intr_handle);
    VAR_3[VAR_5]->intr_handle = ((void*)0);
    FUNC_2(&VAR_4[VAR_5]);
    return VAR_6;
}
