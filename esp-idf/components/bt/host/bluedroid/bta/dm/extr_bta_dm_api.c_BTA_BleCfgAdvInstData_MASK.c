
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int * p_data; int data_mask; int is_scan_rsp; int inst_id; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_MULTI_ADV_DATA ;
typedef int tBTA_BLE_AD_MASK ;
typedef int tBTA_BLE_ADV_DATA ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

void FUNC_4 (UINT8 VAR_1, BOOLEAN VAR_2,
                            tBTA_BLE_AD_MASK VAR_3,
                            tBTA_BLE_ADV_DATA *VAR_4)
{

    tBTA_DM_API_BLE_MULTI_ADV_DATA *VAR_5;
    UINT16 VAR_6 = sizeof(tBTA_DM_API_BLE_MULTI_ADV_DATA) ;

    FUNC_0 ("BTA_BleCfgAdvInstData");

    if ((VAR_5 = (tBTA_DM_API_BLE_MULTI_ADV_DATA *) FUNC_3(VAR_6)) != ((void*)0)) {
        FUNC_2(VAR_5, 0, VAR_6);
        VAR_5->hdr.event = VAR_0;
        VAR_5->inst_id = VAR_1;
        VAR_5->is_scan_rsp = VAR_2;
        VAR_5->data_mask = VAR_3;
        VAR_5->p_data = VAR_4;

        FUNC_1(VAR_5);
    }
}
