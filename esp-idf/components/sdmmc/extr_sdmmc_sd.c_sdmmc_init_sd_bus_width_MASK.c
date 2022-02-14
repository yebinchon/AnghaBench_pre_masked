
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int log_bus_width; } ;
typedef TYPE_1__ sdmmc_card_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;

esp_err_t FUNC_2(sdmmc_card_t* VAR_2)
{
    int VAR_3 = 1;
    if (VAR_2->log_bus_width == 2) {
        VAR_3 = 4;
    } else if (VAR_2->log_bus_width == 3) {
        VAR_3 = 8;
    }
    esp_err_t VAR_4 = FUNC_1(VAR_2, VAR_3);
    if (VAR_4 != VAR_0) {
        FUNC_0(VAR_1, "set_bus_width failed (0x%x)", VAR_4);
        return VAR_4;
    }
    return VAR_0;
}
