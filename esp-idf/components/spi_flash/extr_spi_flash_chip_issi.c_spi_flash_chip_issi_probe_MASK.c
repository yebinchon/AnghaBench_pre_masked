
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int esp_flash_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;

esp_err_t FUNC_0(esp_flash_t *VAR_2, uint32_t VAR_3)
{

    const uint8_t VAR_4 = 0x9D;
    if (VAR_3 >> 16 != VAR_4) {
        return VAR_0;
    }

    const uint16_t VAR_5 = 0xCF00;
    const uint16_t VAR_6 = 0x4000;
    if ((VAR_3 & VAR_5) != VAR_6) {
        return VAR_0;
    }

    return VAR_1;
}
