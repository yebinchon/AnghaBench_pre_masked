
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int spi_buf ;
typedef int * sdmmc_response_t ;
typedef int sdmmc_csd_t ;
struct TYPE_7__ {int flags; int datalen; int * response; int * data; int arg; int opcode; } ;
typedef TYPE_1__ sdmmc_command_t ;
struct TYPE_8__ {scalar_t__ is_mmc; int rca; } ;
typedef TYPE_2__ sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__*) ;

esp_err_t FUNC_6(sdmmc_card_t* VAR_7, sdmmc_csd_t* VAR_8)
{



    sdmmc_response_t VAR_9;
    const bool VAR_10 = FUNC_1(VAR_7);
    sdmmc_command_t VAR_11 = {
            .opcode = VAR_1,
            .arg = VAR_10 ? 0 : FUNC_0(VAR_7->rca),
            .flags = VAR_10 ? (VAR_4 | VAR_3 | VAR_5) :
                    (VAR_2 | VAR_6),
            .data = VAR_10 ? &VAR_9[0] : 0,
            .datalen = VAR_10 ? sizeof(VAR_9) : 0,
    };
    esp_err_t VAR_12 = FUNC_5(VAR_7, &VAR_11);
    if (VAR_12 != VAR_0) {
        return VAR_12;
    }
    uint32_t* VAR_13 = VAR_11.response;
    if (VAR_10) {
        FUNC_3(VAR_9, sizeof(VAR_9));
        VAR_13 = VAR_9;
    }
    if (VAR_7->is_mmc) {
        VAR_12 = FUNC_4(VAR_11.response, VAR_8);
    } else {
        VAR_12 = FUNC_2(VAR_13, VAR_8);
    }
    return VAR_12;
}
