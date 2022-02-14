
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int ddr; } ;
struct TYPE_4__ {int emmc_ddr_reg; TYPE_1__ uhs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;

esp_err_t FUNC_3(int VAR_6, bool VAR_7)
{
    if (!(VAR_6 == 0 || VAR_6 == 1)) {
        return VAR_0;
    }
    if (VAR_5[VAR_6] == 8 && VAR_7) {
        FUNC_2(VAR_4, "DDR mode with 8-bit bus width is not supported yet");

        return VAR_1;
    }
    uint32_t VAR_8 = FUNC_0(VAR_6);
    if (VAR_7) {
        VAR_3.uhs.ddr |= VAR_8;
        VAR_3.emmc_ddr_reg |= VAR_8;
    } else {
        VAR_3.uhs.ddr &= ~VAR_8;
        VAR_3.emmc_ddr_reg &= ~VAR_8;
    }
    FUNC_1(VAR_4, "slot=%d ddr=%d", VAR_6, VAR_7 ? 1 : 0);
    return VAR_2;
}
