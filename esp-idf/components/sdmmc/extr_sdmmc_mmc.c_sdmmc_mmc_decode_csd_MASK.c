
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sdmmc_response_t ;
struct TYPE_3__ {scalar_t__ csd_ver; int capacity; int read_block_len; int sector_size; scalar_t__ tr_speed; int mmc_ver; } ;
typedef TYPE_1__ sdmmc_csd_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;

esp_err_t FUNC_6(sdmmc_response_t VAR_5, sdmmc_csd_t* VAR_6)
{
    VAR_6->csd_ver = FUNC_3(VAR_5);
    if (VAR_6->csd_ver == VAR_1 ||
            VAR_6->csd_ver == VAR_2 ||
            VAR_6->csd_ver == VAR_3) {
        VAR_6->mmc_ver = FUNC_4(VAR_5);
        VAR_6->capacity = FUNC_2(VAR_5);
        VAR_6->read_block_len = FUNC_5(VAR_5);
    } else {
        FUNC_0(VAR_4, "unknown MMC CSD structure version 0x%x\n", VAR_6->csd_ver);
        return 1;
    }
    int VAR_7 = 1 << VAR_6->read_block_len;
    VAR_6->sector_size = FUNC_1(VAR_7, 512);
    if (VAR_6->sector_size < VAR_7) {
        VAR_6->capacity *= VAR_7 / VAR_6->sector_size;
    }

    VAR_6->tr_speed = 0;
    return VAR_0;
}
