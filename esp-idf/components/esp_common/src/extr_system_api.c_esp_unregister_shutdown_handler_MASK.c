
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * shutdown_handler_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;

esp_err_t FUNC_0(shutdown_handler_t VAR_4)
{
    for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
        if (VAR_3[VAR_5] == VAR_4) {
            VAR_3[VAR_5] = ((void*)0);
            return VAR_1;
        }
    }
    return VAR_0;
}
