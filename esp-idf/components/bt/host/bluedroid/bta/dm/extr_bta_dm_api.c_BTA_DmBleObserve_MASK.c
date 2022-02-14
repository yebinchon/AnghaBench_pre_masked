
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_START_STOP_SCAN_CMPL_CBACK ;
typedef int tBTA_DM_SEARCH_CBACK ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int * p_stop_scan_cback; int * p_start_scan_cback; int * p_cback; int duration; scalar_t__ start; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_OBSERVE ;
typedef int UINT32 ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_3 (int) ;

extern void FUNC_4(BOOLEAN VAR_1, UINT32 VAR_2,
                             tBTA_DM_SEARCH_CBACK *VAR_3,
                             tBTA_START_STOP_SCAN_CMPL_CBACK *VAR_4)
{
    tBTA_DM_API_BLE_OBSERVE *VAR_5;

    FUNC_0("BTA_DmBleObserve:start = %d ", VAR_1);

    if ((VAR_5 = (tBTA_DM_API_BLE_OBSERVE *) FUNC_3(sizeof(tBTA_DM_API_BLE_OBSERVE))) != ((void*)0)) {
        FUNC_2(VAR_5, 0, sizeof(tBTA_DM_API_BLE_OBSERVE));

        VAR_5->hdr.event = VAR_0;
        VAR_5->start = VAR_1;
        VAR_5->duration = VAR_2;
        VAR_5->p_cback = VAR_3;
        if (VAR_1){
            VAR_5->p_start_scan_cback = VAR_4;
        }
        else {
            VAR_5->p_stop_scan_cback = VAR_4;
        }

        FUNC_1(VAR_5);
    }
}
