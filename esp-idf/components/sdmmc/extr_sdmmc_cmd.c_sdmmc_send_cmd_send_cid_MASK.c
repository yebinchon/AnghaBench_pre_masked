
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * sdmmc_response_t ;
struct TYPE_7__ {int flags; int datalen; int * data; int arg; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
typedef int sdmmc_cid_t ;
struct TYPE_8__ {int is_mmc; } ;
typedef TYPE_2__ sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*) ;

esp_err_t FUNC_5(sdmmc_card_t *VAR_4, sdmmc_cid_t *VAR_5)
{
    FUNC_0(*VAR_5);
    FUNC_0(FUNC_1(VAR_4) && "SEND_CID should only be used in SPI mode");
    FUNC_0(!VAR_4->is_mmc && "MMC cards are not supported in SPI mode");
    sdmmc_response_t VAR_6;
    sdmmc_command_t VAR_7 = {
        .opcode = VAR_1,
        .flags = VAR_3 | VAR_2,
        .arg = 0,
        .data = &VAR_6[0],
        .datalen = sizeof(VAR_6)
    };
    esp_err_t VAR_8 = FUNC_4(VAR_4, &VAR_7);
    if (VAR_8 != VAR_0) {
        return VAR_8;
    }
    FUNC_3(VAR_6, sizeof(VAR_6));
    return FUNC_2(VAR_6, VAR_5);
}
