
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int flags; scalar_t__ arg; int response; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
typedef int sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int) ;

esp_err_t FUNC_3(sdmmc_card_t* VAR_8, uint32_t VAR_9, uint32_t *VAR_10)
{
    esp_err_t VAR_11 = VAR_1;
    sdmmc_command_t VAR_12 = {
        .flags = VAR_2 | VAR_3,
        .arg = VAR_9,
        .opcode = VAR_6
    };
    for (size_t VAR_13 = 0; VAR_13 < 100; VAR_13++) {
        VAR_11 = FUNC_1(VAR_8, &VAR_12);
        if (VAR_11 != VAR_1) {
            break;
        }
        if ((FUNC_0(VAR_12.response) & VAR_5) ||
            VAR_9 == 0) {
            break;
        }
        VAR_11 = VAR_0;
        FUNC_2(VAR_4 / VAR_7);
    }
    if (VAR_11 == VAR_1 && VAR_10 != ((void*)0))
        *VAR_10 = FUNC_0(VAR_12.response);

    return VAR_11;
}
