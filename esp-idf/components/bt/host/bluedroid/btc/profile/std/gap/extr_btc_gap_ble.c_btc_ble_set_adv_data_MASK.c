
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_SET_ADV_DATA_CMPL_CBACK ;
typedef int tBTA_BLE_AD_MASK ;
struct TYPE_4__ {int set_scan_rsp; } ;
typedef TYPE_1__ esp_ble_adv_data_t ;


 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(esp_ble_adv_data_t *VAR_2,
                                 tBTA_SET_ADV_DATA_CMPL_CBACK VAR_3)
{
    tBTA_BLE_AD_MASK VAR_4 = 0;

    if (!VAR_2->set_scan_rsp) {
     FUNC_2(VAR_2, &VAR_0, &VAR_4);
        FUNC_0(VAR_4, &VAR_0, VAR_3);
    } else {
     FUNC_2(VAR_2, &VAR_1, &VAR_4);
        FUNC_1(VAR_4, &VAR_1, VAR_3);
    }
}
