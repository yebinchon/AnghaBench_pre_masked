
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int*) ;

esp_err_t FUNC_3(sdmmc_card_t* VAR_3)
{

    uint32_t VAR_4 = 0;
    uint32_t VAR_5 = 0;
    while (!FUNC_1(VAR_3) && !(VAR_4 & VAR_1)) {

        esp_err_t VAR_6 = FUNC_2(VAR_3, &VAR_4);
        if (VAR_6 != VAR_0) {
            return VAR_6;
        }
        if (++VAR_5 % 16 == 0) {
            FUNC_0(VAR_2, "waiting for card to become ready (%d)", VAR_5);
        }
    }
    return VAR_0;
}
