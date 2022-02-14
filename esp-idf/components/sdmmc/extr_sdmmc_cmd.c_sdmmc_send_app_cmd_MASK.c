
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int response; int arg; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
struct TYPE_9__ {int rca; } ;
typedef TYPE_2__ sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,TYPE_1__*) ;

esp_err_t FUNC_5(sdmmc_card_t* VAR_7, sdmmc_command_t* VAR_8)
{
    sdmmc_command_t VAR_9 = {
        .opcode = VAR_2,
        .flags = VAR_4 | VAR_5,
        .arg = FUNC_1(VAR_7->rca),
    };
    esp_err_t VAR_10 = FUNC_4(VAR_7, &VAR_9);
    if (VAR_10 != VAR_1) {
        return VAR_10;
    }

    if (!FUNC_3(VAR_7) && !(FUNC_2(VAR_9.response) & VAR_3)) {
        FUNC_0(VAR_6, "card doesn't support APP_CMD");
        return VAR_0;
    }
    return FUNC_4(VAR_7, VAR_8);
}
