
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int arg; int flags; int response; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
typedef int sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;

esp_err_t FUNC_2(sdmmc_card_t* VAR_8, uint8_t VAR_9, uint8_t VAR_10, uint8_t VAR_11)
{
    sdmmc_command_t VAR_12 = {
            .opcode = VAR_3,
            .arg = (VAR_4 << 24) | (VAR_10 << 16) | (VAR_11 << 8) | VAR_9,
            .flags = VAR_6 | VAR_5 | VAR_7,
    };
    esp_err_t VAR_13 = FUNC_1(VAR_8, &VAR_12);
    if (VAR_13 == VAR_1) {

        if (FUNC_0(VAR_12.response) & VAR_2)
            VAR_13 = VAR_0;
    }

    return VAR_13;
}
