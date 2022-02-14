
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;
typedef size_t BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;

esp_err_t FUNC_0(BYTE* VAR_4)
{
    BYTE VAR_5;
    for(VAR_5=0; VAR_5<VAR_2; VAR_5++) {
        if (!VAR_3[VAR_5]) {
            *VAR_4 = VAR_5;
            return VAR_1;
        }
    }
    return VAR_0;
}
