
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t esp_type_leak_t ;
typedef int esp_err_t ;
typedef size_t esp_comp_leak_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t** VAR_4 ;

esp_err_t FUNC_0(size_t VAR_5, esp_type_leak_t VAR_6, esp_comp_leak_t VAR_7)
{
    if (VAR_6 >= VAR_3 || VAR_7 >= VAR_0) {
        return VAR_1;
    }
    VAR_4[VAR_6][VAR_7] = VAR_5;
    return VAR_2;
}
