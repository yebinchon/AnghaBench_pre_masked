
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_6__ {int flags; int response; int arg; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
struct TYPE_7__ {scalar_t__ is_mmc; } ;
typedef TYPE_2__ sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*) ;

esp_err_t FUNC_4(sdmmc_card_t* VAR_4, uint16_t* VAR_5)
{
    FUNC_2(VAR_5);
    sdmmc_command_t VAR_6 = {
            .opcode = VAR_3,
            .flags = VAR_1 | VAR_2
    };




    uint16_t VAR_7 = 1;
    if (VAR_4->is_mmc) {
        VAR_6.arg = FUNC_0(VAR_7);
    }

    esp_err_t VAR_8 = FUNC_3(VAR_4, &VAR_6);
    if (VAR_8 != VAR_0) {
        return VAR_8;
    }
    *VAR_5 = (VAR_4->is_mmc) ? VAR_7 : FUNC_1(VAR_6.response);
    return VAR_0;
}
