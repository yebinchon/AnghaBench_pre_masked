
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * os_func_data; int * os_func; } ;
typedef TYPE_1__ esp_flash_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

esp_err_t FUNC_0(esp_flash_t *VAR_7, int VAR_8)
{
    if (VAR_8 == 0) {

        VAR_7->os_func = &VAR_2;
        VAR_7->os_func_data = &VAR_4;
    } else if (VAR_8 == 1 || VAR_8 == 2) {

        VAR_7->os_func = &VAR_3;
        VAR_7->os_func_data = (VAR_8 == 1) ? &VAR_5 : &VAR_6;
    } else {
        return VAR_0;
    }
    return VAR_1;
}
