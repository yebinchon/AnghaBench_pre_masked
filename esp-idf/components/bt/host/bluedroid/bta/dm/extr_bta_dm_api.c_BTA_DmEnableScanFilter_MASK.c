
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * tBTA_DM_BLE_REF_VALUE ;
typedef int tBTA_DM_BLE_PF_STATUS_CBACK ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int * p_filt_status_cback; int * ref_value; int * action; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_ENABLE_SCAN_FILTER ;
typedef int tBLE_BD_ADDR ;
typedef int * UINT8 ;
typedef int UINT16 ;


 int FUNC_0 (char*,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

void FUNC_5(UINT8 VAR_1, tBTA_DM_BLE_PF_STATUS_CBACK *VAR_2,
                            tBTA_DM_BLE_REF_VALUE VAR_3)
{

    tBTA_DM_API_ENABLE_SCAN_FILTER *VAR_4;
    FUNC_0 ("BTA_DmEnableScanFilter: %d\n", VAR_1);

    UINT16 VAR_5 = sizeof(tBTA_DM_API_ENABLE_SCAN_FILTER) + sizeof(tBLE_BD_ADDR);

    if ((VAR_4 = (tBTA_DM_API_ENABLE_SCAN_FILTER *) FUNC_4(VAR_5)) != ((void*)0)) {
        FUNC_3 (VAR_4, 0, VAR_5);

        VAR_4->hdr.event = VAR_0;
        VAR_4->action = VAR_1;
        VAR_4->ref_value = VAR_3;
        VAR_4->p_filt_status_cback = VAR_2;

        FUNC_2(VAR_4);
    }





}
