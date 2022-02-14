
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * shutdown_handler_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int ** VAR_4 ;

esp_err_t FUNC_0(shutdown_handler_t VAR_5)
{
    for (int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        if (VAR_4[VAR_6] == VAR_5) {
            return VAR_0;
        } else if (VAR_4[VAR_6] == ((void*)0)) {
            VAR_4[VAR_6] = VAR_5;
            return VAR_2;
        }
    }
    return VAR_1;
}
