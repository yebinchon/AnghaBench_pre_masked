
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int arg; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
typedef int sdmmc_card_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*) ;

esp_err_t FUNC_1(sdmmc_card_t* VAR_5, int VAR_6)
{
    sdmmc_command_t VAR_7 = {
            .opcode = VAR_2,
            .flags = VAR_1 | VAR_0,
            .arg = (VAR_6 == 4) ? VAR_4 : VAR_3,
    };

    return FUNC_0(VAR_5, &VAR_7);
}
