
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sdmmc_response_t ;
struct TYPE_3__ {int csd_ver; int capacity; int read_block_len; int sector_size; int tr_speed; int card_command_class; } ;
typedef TYPE_1__ sdmmc_csd_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;


 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ) ;
 int VAR_4 ;

esp_err_t FUNC_8(sdmmc_response_t VAR_5, sdmmc_csd_t* VAR_6)
{
    VAR_6->csd_ver = FUNC_4(VAR_5);
    switch (VAR_6->csd_ver) {
    case 128:
        VAR_6->capacity = FUNC_7(VAR_5);
        VAR_6->read_block_len = VAR_3;
        break;
    case 129:
        VAR_6->capacity = FUNC_2(VAR_5);
        VAR_6->read_block_len = FUNC_5(VAR_5);
        break;
    default:
        FUNC_0(VAR_4, "unknown SD CSD structure version 0x%x", VAR_6->csd_ver);
        return VAR_0;
    }
    VAR_6->card_command_class = FUNC_3(VAR_5);
    int VAR_7 = 1 << VAR_6->read_block_len;
    VAR_6->sector_size = FUNC_1(VAR_7, 512);
    if (VAR_6->sector_size < VAR_7) {
        VAR_6->capacity *= VAR_7 / VAR_6->sector_size;
    }
    int VAR_8 = FUNC_6(VAR_5);
    if (VAR_8 == VAR_2) {
        VAR_6->tr_speed = 50000000;
    } else {
        VAR_6->tr_speed = 25000000;
    }
    return VAR_1;
}
