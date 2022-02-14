
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int sdmmc_scr_t ;
struct TYPE_3__ {size_t datalen; size_t blklen; int flags; int opcode; int * data; } ;
typedef TYPE_1__ sdmmc_command_t ;
typedef int sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_1__*) ;

esp_err_t FUNC_4(sdmmc_card_t* VAR_7, sdmmc_scr_t *VAR_8)
{
    size_t VAR_9 = 8;
    uint32_t* VAR_10 = (uint32_t*) FUNC_1(VAR_9, VAR_2);
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }
    sdmmc_command_t VAR_11 = {
            .data = VAR_10,
            .datalen = VAR_9,
            .blklen = VAR_9,
            .flags = VAR_3 | VAR_4 | VAR_5,
            .opcode = VAR_6
    };
    esp_err_t VAR_12 = FUNC_3(VAR_7, &VAR_11);
    if (VAR_12 == VAR_1) {
        VAR_12 = FUNC_2(VAR_10, VAR_8);
    }
    FUNC_0(VAR_10);
    return VAR_12;
}
