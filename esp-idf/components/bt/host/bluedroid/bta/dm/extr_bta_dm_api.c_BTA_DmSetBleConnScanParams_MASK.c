
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int event; } ;
struct TYPE_6__ {void* scan_window; void* scan_int; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_SCAN_PARAMS ;
typedef void* UINT32 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(UINT32 VAR_1, UINT32 VAR_2)
{
    tBTA_DM_API_BLE_SCAN_PARAMS *VAR_3;
    if ((VAR_3 = (tBTA_DM_API_BLE_SCAN_PARAMS *)FUNC_2(sizeof(tBTA_DM_API_BLE_SCAN_PARAMS))) != ((void*)0)) {
        FUNC_1(VAR_3, 0, sizeof(tBTA_DM_API_BLE_SCAN_PARAMS));
        VAR_3->hdr.event = VAR_0;
        VAR_3->scan_int = VAR_1;
        VAR_3->scan_window = VAR_2;
        FUNC_0(VAR_3);
    }
}
