
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {void* p_params; int inst_id; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_MULTI_ADV_PARAM ;
typedef int tBTA_BLE_ADV_PARAMS ;
typedef int UINT8 ;
typedef int UINT16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*,int *,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5 (UINT8 VAR_1, tBTA_BLE_ADV_PARAMS *VAR_2)
{

    tBTA_DM_API_BLE_MULTI_ADV_PARAM *VAR_3;
    UINT16 VAR_4 = sizeof(tBTA_BLE_ADV_PARAMS) + sizeof(tBTA_DM_API_BLE_MULTI_ADV_PARAM);

    FUNC_0 ("BTA_BleUpdateAdvInstParam");
    if ((VAR_3 = (tBTA_DM_API_BLE_MULTI_ADV_PARAM *) FUNC_4(VAR_4)) != ((void*)0)) {
        FUNC_3(VAR_3, 0, sizeof(tBTA_DM_API_BLE_MULTI_ADV_PARAM));
        VAR_3->hdr.event = VAR_0;
        VAR_3->inst_id = VAR_1;
        VAR_3->p_params = (void *)(VAR_3 + 1);
        FUNC_2(VAR_3->p_params, VAR_2, sizeof(tBTA_BLE_ADV_PARAMS));

        FUNC_1(VAR_3);
    }
}
