
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; size_t datalen; size_t blklen; int flags; int arg; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
typedef int sdmmc_card_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

esp_err_t FUNC_3(sdmmc_card_t* VAR_4, void *VAR_5, size_t VAR_6)
{
    FUNC_0(FUNC_1(VAR_5));
    sdmmc_command_t VAR_7 = {
        .data = VAR_5,
        .datalen = VAR_6,
        .blklen = VAR_6,
        .opcode = VAR_0,
        .arg = 0,
        .flags = VAR_1 | VAR_3 | VAR_2
    };
    return FUNC_2(VAR_4, &VAR_7);
}
