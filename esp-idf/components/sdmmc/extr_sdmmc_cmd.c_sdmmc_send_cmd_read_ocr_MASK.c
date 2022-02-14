
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int flags; int response; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
typedef int sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*) ;

esp_err_t FUNC_3(sdmmc_card_t *VAR_4, uint32_t *VAR_5)
{
    FUNC_1(VAR_5);
    sdmmc_command_t VAR_6 = {
        .opcode = VAR_3,
        .flags = VAR_1 | VAR_2
    };
    esp_err_t VAR_7 = FUNC_2(VAR_4, &VAR_6);
    if (VAR_7 != VAR_0) {
        return VAR_7;
    }
    *VAR_5 = FUNC_0(VAR_6.response);
    return VAR_0;
}
