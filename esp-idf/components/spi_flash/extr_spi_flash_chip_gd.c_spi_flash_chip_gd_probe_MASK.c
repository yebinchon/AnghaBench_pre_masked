
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int esp_flash_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

esp_err_t FUNC_0(esp_flash_t *VAR_5, uint32_t VAR_6)
{

    const uint8_t VAR_7 = 0xC8;
    if (VAR_6 >> 16 != VAR_7) {
        return VAR_0;
    }

    uint32_t VAR_8 = VAR_6 & VAR_2;
    if (VAR_8 != VAR_4 && VAR_8 != VAR_3) {
        return VAR_0;
    }

    return VAR_1;
}
