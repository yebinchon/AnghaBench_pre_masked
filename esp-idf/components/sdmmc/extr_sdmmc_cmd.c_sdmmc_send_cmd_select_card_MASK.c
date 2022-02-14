
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ flags; int arg; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
typedef int sdmmc_card_t ;
typedef int esp_err_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*) ;

esp_err_t FUNC_2(sdmmc_card_t* VAR_3, uint32_t VAR_4)
{

    uint32_t VAR_5 = (VAR_4 == 0) ? 0 : VAR_2;
    sdmmc_command_t VAR_6 = {
            .opcode = VAR_0,
            .arg = FUNC_0(VAR_4),
            .flags = VAR_1 | VAR_5
    };
    return FUNC_1(VAR_3, &VAR_6);
}
