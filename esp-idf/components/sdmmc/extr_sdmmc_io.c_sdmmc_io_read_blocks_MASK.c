
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sdmmc_card_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int,void*,size_t) ;

esp_err_t FUNC_1(sdmmc_card_t* VAR_4, uint32_t VAR_5,
        uint32_t VAR_6, void* VAR_7, size_t VAR_8)
{
    if (VAR_8 % 4 != 0) {
        return VAR_0;
    }
    return FUNC_0(VAR_4, VAR_5, VAR_6,
            VAR_3 | VAR_2 | VAR_1,
            VAR_7, VAR_8);
}
