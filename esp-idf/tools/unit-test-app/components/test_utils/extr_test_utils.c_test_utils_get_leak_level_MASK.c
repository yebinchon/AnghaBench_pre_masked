
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t esp_type_leak_t ;
typedef int esp_comp_leak_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t** VAR_2 ;

size_t FUNC_0(esp_type_leak_t VAR_3, esp_comp_leak_t VAR_4)
{
    size_t VAR_5 = 0;
    if (VAR_3 >= VAR_1 || VAR_4 > VAR_0) {
        VAR_5 = 0;
    } else {
        if (VAR_4 == VAR_0) {
            for (int VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
                VAR_5 += VAR_2[VAR_3][VAR_6];
            }
        } else {
            VAR_5 = VAR_2[VAR_3][VAR_4];
        }
    }
    return VAR_5;
}
