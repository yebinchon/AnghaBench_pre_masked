
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int esp_flash_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int,int*) ;

esp_err_t FUNC_1(esp_flash_t* VAR_3, uint32_t* VAR_4)
{
    uint32_t VAR_5, VAR_6;
    esp_err_t VAR_7 = FUNC_0(VAR_3, VAR_1, 8, &VAR_6);
    if (VAR_7 == VAR_2) {
        VAR_7 = FUNC_0(VAR_3, VAR_0, 8, &VAR_5);
    }
    if (VAR_7 == VAR_2) {
        *VAR_4 = (VAR_5 & 0xff) | ((VAR_6 & 0xff) << 8);
    }
    return VAR_7;
}
