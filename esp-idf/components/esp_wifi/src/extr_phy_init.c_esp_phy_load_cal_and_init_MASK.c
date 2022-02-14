
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {struct TYPE_15__* mac; } ;
typedef TYPE_1__ const uint8_t ;
typedef int phy_rf_module_t ;
typedef TYPE_1__ esp_phy_init_data_t ;
typedef scalar_t__ esp_phy_calibration_mode_t ;
typedef TYPE_1__ const esp_phy_calibration_data_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_5 () ;
 scalar_t__ FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const*,scalar_t__,TYPE_1__ const*,int ) ;
 scalar_t__ FUNC_10 (TYPE_1__ const*) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (TYPE_1__ const*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (TYPE_1__*,TYPE_1__ const*,int) ;
 scalar_t__ FUNC_15 (int ) ;

void FUNC_16(phy_rf_module_t VAR_7)
{
    esp_phy_calibration_data_t* VAR_8 =
            (esp_phy_calibration_data_t*) FUNC_3(sizeof(esp_phy_calibration_data_t), 1);
    if (VAR_8 == ((void*)0)) {
        FUNC_0(VAR_6, "failed to allocate memory for RF calibration data");
        FUNC_2();
    }
    const esp_phy_init_data_t* VAR_9 = FUNC_5();
    if (VAR_9 == ((void*)0)) {
        FUNC_0(VAR_6, "failed to obtain PHY init data");
        FUNC_2();
    }
    FUNC_9(VAR_9, VAR_3, VAR_8, VAR_7);






    FUNC_8(VAR_9);


    FUNC_12(VAR_8);
}
