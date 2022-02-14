
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * tBTA_DM_BLE_REF_VALUE ;
typedef int tBTA_DM_BLE_PF_PARAM_CBACK ;
typedef int tBTA_DM_BLE_PF_FILT_PARAMS ;
typedef int * tBTA_DM_BLE_PF_FILT_INDEX ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int * p_target; int * ref_value; int * p_filt_param_cback; int filt_params; int * filt_index; int * action; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_SCAN_FILTER_PARAM_SETUP ;
typedef int tBLE_BD_ADDR ;
typedef int * UINT8 ;
typedef int UINT16 ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(UINT8 VAR_1, tBTA_DM_BLE_PF_FILT_INDEX VAR_2,
                              tBTA_DM_BLE_PF_FILT_PARAMS *VAR_3,
                              tBLE_BD_ADDR *VAR_4,
                              tBTA_DM_BLE_PF_PARAM_CBACK *VAR_5,
                              tBTA_DM_BLE_REF_VALUE VAR_6)
{

    tBTA_DM_API_SCAN_FILTER_PARAM_SETUP *VAR_7;
    FUNC_0 ("BTA_DmBleScanFilterSetup: %d", VAR_1);

    UINT16 VAR_8 = sizeof(tBTA_DM_API_SCAN_FILTER_PARAM_SETUP) + sizeof(tBLE_BD_ADDR);

    if ((VAR_7 = (tBTA_DM_API_SCAN_FILTER_PARAM_SETUP *) FUNC_5(VAR_8)) != ((void*)0)) {
        FUNC_4 (VAR_7, 0, VAR_8);

        VAR_7->hdr.event = VAR_0;
        VAR_7->action = VAR_1;
        VAR_7->filt_index = VAR_2;
        if (VAR_3) {
            FUNC_3(&VAR_7->filt_params, VAR_3, sizeof(tBTA_DM_BLE_PF_FILT_PARAMS));
        }
        VAR_7->p_filt_param_cback = VAR_5;
        VAR_7->ref_value = VAR_6;

        if (VAR_4) {
            VAR_7->p_target = (tBLE_BD_ADDR *)(VAR_7 + 1);
            FUNC_3(VAR_7->p_target, VAR_4, sizeof(tBLE_BD_ADDR));
        }

        FUNC_2(VAR_7);
    }
}
