
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_11__ {scalar_t__ tot_scan_results_strg; } ;
typedef TYPE_2__ tBTM_BLE_VSC_CB ;
typedef int tBTM_BLE_TRACK_ADV_CBACK ;
struct TYPE_10__ {int (* p_track_adv_cback ) (TYPE_4__*) ;scalar_t__ ref_value; } ;
struct TYPE_12__ {TYPE_1__ ble_track_advert; } ;
typedef TYPE_3__ tBTA_DM_MSG ;
struct TYPE_13__ {scalar_t__ client_if; int advertiser_info_present; } ;
typedef TYPE_4__ tBTA_DM_BLE_TRACK_ADV_DATA ;
typedef scalar_t__ UINT8 ;
typedef TYPE_4__ BD_ADDR ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (TYPE_4__*) ;

void FUNC_4(tBTA_DM_MSG *VAR_2)
{
    tBTM_STATUS VAR_3 = 0;
    BD_ADDR VAR_4;
    FUNC_2(&VAR_4, 0 , sizeof(BD_ADDR));
    tBTM_BLE_VSC_CB VAR_5;
    tBTA_DM_BLE_TRACK_ADV_DATA VAR_6;

    FUNC_0(&VAR_5);

    if (0 != VAR_5.tot_scan_results_strg) {
        VAR_3 = FUNC_1((tBTM_BLE_TRACK_ADV_CBACK *)
                                            VAR_2->ble_track_advert.p_track_adv_cback,
                                            VAR_2->ble_track_advert.ref_value);
    }

    if (VAR_0 != VAR_3) {
        FUNC_2(&VAR_6, 0, sizeof(tBTA_DM_BLE_TRACK_ADV_DATA));
        VAR_6.advertiser_info_present = VAR_1;
        VAR_6.client_if = (UINT8)VAR_2->ble_track_advert.ref_value;
        VAR_2->ble_track_advert.p_track_adv_cback(&VAR_6);
    }
}
