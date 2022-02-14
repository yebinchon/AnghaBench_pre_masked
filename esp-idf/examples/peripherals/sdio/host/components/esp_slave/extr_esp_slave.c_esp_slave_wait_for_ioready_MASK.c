
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int sdmmc_card_t ;
struct TYPE_3__ {int * card; } ;
typedef TYPE_1__ esp_slave_context_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int*) ;

esp_err_t FUNC_3(esp_slave_context_t *VAR_4)
{
    FUNC_1(VAR_3, "wait_for_ioready");
    esp_err_t VAR_5;
    sdmmc_card_t *VAR_6 = VAR_4->card;

    uint8_t VAR_7 = 0;
    while ((VAR_7 & VAR_1) == 0) {
        VAR_5 = FUNC_2(VAR_6, 0, VAR_2, &VAR_7);
        if (VAR_5 != VAR_0) return VAR_5;
        FUNC_0(VAR_3, "IOR: 0x%02x", VAR_7);
    }
    return VAR_0;
}
