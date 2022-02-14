
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {void* p_ref; void* p_params; void* p_cback; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_MULTI_ADV_ENB ;
typedef int tBTA_BLE_MULTI_ADV_CBACK ;
typedef int tBTA_BLE_ADV_PARAMS ;
typedef int UINT16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*,int *,int) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5 (tBTA_BLE_ADV_PARAMS *VAR_1,
                               tBTA_BLE_MULTI_ADV_CBACK *VAR_2,
                               void *VAR_3)
{

    tBTA_DM_API_BLE_MULTI_ADV_ENB *VAR_4;
    UINT16 VAR_5 = sizeof(tBTA_BLE_ADV_PARAMS) + sizeof(tBTA_DM_API_BLE_MULTI_ADV_ENB);

    FUNC_0 ("BTA_BleEnableAdvInstance");

    if ((VAR_4 = (tBTA_DM_API_BLE_MULTI_ADV_ENB *) FUNC_4(VAR_5)) != ((void*)0)) {
        FUNC_3(VAR_4, 0, sizeof(tBTA_DM_API_BLE_MULTI_ADV_ENB));

        VAR_4->hdr.event = VAR_0;
        VAR_4->p_cback = (void *)VAR_2;
        if (VAR_1 != ((void*)0)) {
            VAR_4->p_params = (void *)(VAR_4 + 1);
            FUNC_2(VAR_4->p_params, VAR_1, sizeof(tBTA_BLE_ADV_PARAMS));
        }
        VAR_4->p_ref = VAR_3;

        FUNC_1(VAR_4);
    }
}
