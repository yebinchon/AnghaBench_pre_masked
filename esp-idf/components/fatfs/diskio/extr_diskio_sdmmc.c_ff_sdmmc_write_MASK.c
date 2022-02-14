
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;
typedef int UINT ;
typedef int DWORD ;
typedef int DRESULT ;
typedef size_t BYTE ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int ** VAR_4 ;
 scalar_t__ FUNC_2 (int *,size_t const*,int ,int ) ;

DRESULT FUNC_3 (BYTE VAR_5, const BYTE* VAR_6, DWORD VAR_7, UINT VAR_8)
{
    sdmmc_card_t* VAR_9 = VAR_4[VAR_5];
    FUNC_1(VAR_9);
    esp_err_t VAR_10 = FUNC_2(VAR_9, VAR_6, VAR_7, VAR_8);
    if (VAR_10 != VAR_0) {
        FUNC_0(VAR_3, "sdmmc_write_blocks failed (%d)", VAR_10);
        return VAR_1;
    }
    return VAR_2;
}
