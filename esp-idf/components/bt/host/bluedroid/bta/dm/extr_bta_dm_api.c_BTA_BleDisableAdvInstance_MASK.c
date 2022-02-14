
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int inst_id; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_MULTI_ADV_DISABLE ;
typedef int UINT8 ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4 (UINT8 VAR_1)
{
    tBTA_DM_API_BLE_MULTI_ADV_DISABLE *VAR_2;

    FUNC_0 ("BTA_BleDisableAdvInstance: %d", VAR_1);
    if ((VAR_2 = (tBTA_DM_API_BLE_MULTI_ADV_DISABLE *)
                 FUNC_3(sizeof(tBTA_DM_API_BLE_MULTI_ADV_DISABLE))) != ((void*)0)) {
        FUNC_2(VAR_2, 0, sizeof(tBTA_DM_API_BLE_MULTI_ADV_DISABLE));
        VAR_2->hdr.event = VAR_0;
        VAR_2->inst_id = VAR_1;
        FUNC_1(VAR_2);
    }
}
