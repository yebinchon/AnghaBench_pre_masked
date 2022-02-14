
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sector_size; } ;
typedef TYPE_1__ sdmmc_csd_t ;
struct TYPE_6__ {int flags; int arg; int opcode; } ;
typedef TYPE_2__ sdmmc_command_t ;
typedef int sdmmc_card_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_2__*) ;

esp_err_t FUNC_1(sdmmc_card_t* VAR_3, sdmmc_csd_t* VAR_4)
{
    sdmmc_command_t VAR_5 = {
            .opcode = VAR_0,
            .arg = VAR_4->sector_size,
            .flags = VAR_1 | VAR_2
    };
    return FUNC_0(VAR_3, &VAR_5);
}
