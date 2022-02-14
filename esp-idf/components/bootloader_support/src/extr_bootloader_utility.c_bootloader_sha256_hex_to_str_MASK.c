
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;

esp_err_t FUNC_0(char *VAR_2, const uint8_t *VAR_3, size_t VAR_4)
{
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == 0) {
        return VAR_0;
    }
    for (int VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        for (int VAR_6 = 0; VAR_6 < 2; VAR_6++) {
            uint8_t VAR_7 = (VAR_3[VAR_5] >> (VAR_6 ? 0 : 4)) & 0x0F;
            if (VAR_7 < 10) {
                VAR_2[VAR_5 * 2 + VAR_6] = '0' + VAR_7;
            } else {
                VAR_2[VAR_5 * 2 + VAR_6] = 'a' + VAR_7 - 10;
            }
        }
    }
    return VAR_1;
}
