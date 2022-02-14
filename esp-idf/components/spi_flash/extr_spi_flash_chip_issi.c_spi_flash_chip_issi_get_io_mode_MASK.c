
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int const uint32_t ;
typedef int esp_flash_t ;
typedef int esp_flash_io_mode_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int const*) ;

esp_err_t FUNC_1(esp_flash_t *VAR_2, esp_flash_io_mode_t* VAR_3)
{

    const uint8_t VAR_4 = 1 << 6;
    uint32_t VAR_5;
    esp_err_t VAR_6 = FUNC_0(VAR_2, &VAR_5);
    if (VAR_6 == VAR_0) {
        *VAR_3 = ((VAR_5 & VAR_4)? VAR_1: 0);
    }
    return VAR_6;
}
