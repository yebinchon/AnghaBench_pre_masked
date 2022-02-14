
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
typedef int sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int) ;

esp_err_t FUNC_3(sdmmc_card_t* VAR_7)
{
    sdmmc_command_t VAR_8 = {
        .opcode = VAR_1,
        .flags = VAR_2 | VAR_3,
    };
    esp_err_t VAR_9 = FUNC_1(VAR_7, &VAR_8);
    if (FUNC_0(VAR_7)) {






        (void) VAR_9;
        FUNC_2(VAR_5 / VAR_6);

        VAR_8.flags |= VAR_4;
        VAR_9 = FUNC_1(VAR_7, &VAR_8);
    }
    if (VAR_9 == VAR_0) {
        FUNC_2(VAR_5 / VAR_6);
    }
    return VAR_9;
}
