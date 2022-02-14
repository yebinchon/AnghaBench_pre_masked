
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arg; int flags; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
typedef int sdmmc_card_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_1__*) ;

esp_err_t FUNC_3(sdmmc_card_t* VAR_3, bool VAR_4)
{
    FUNC_0(FUNC_1(VAR_3) && "CRC_ON_OFF can only be used in SPI mode");
    sdmmc_command_t VAR_5 = {
            .opcode = VAR_2,
            .arg = VAR_4 ? 1 : 0,
            .flags = VAR_0 | VAR_1
    };
    return FUNC_2(VAR_3, &VAR_5);
}
