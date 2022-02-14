
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,size_t,size_t,int,void*,size_t) ;

esp_err_t FUNC_1(sdmmc_card_t* VAR_3, uint32_t VAR_4,
        uint32_t VAR_5, const void* VAR_6, size_t VAR_7)
{

    const uint8_t *VAR_8 = (const uint8_t*) VAR_6;

    while (VAR_7 > 0) {
        size_t VAR_9 = VAR_7 & (~3);
        size_t VAR_10 = VAR_9 > 0 ? VAR_9 : VAR_7;

        esp_err_t VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_5,
                VAR_2 | VAR_1,
                (void*) VAR_8, VAR_10);
        if (VAR_11 != VAR_0) {
            return VAR_11;
        }
        VAR_8 += VAR_10;
        VAR_7 -= VAR_10;
        VAR_5 += VAR_10;
    }
    return VAR_0;
}
