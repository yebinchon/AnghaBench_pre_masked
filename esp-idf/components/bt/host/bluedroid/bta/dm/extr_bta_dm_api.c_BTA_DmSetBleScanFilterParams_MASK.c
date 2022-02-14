
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tGATT_IF ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {int scan_param_setup_cback; void* scan_filter_policy; void* scan_duplicate_filter; void* addr_type_own; int scan_mode; void* scan_window; void* scan_int; int client_if; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_BLE_SCAN_FILTER_PARAMS ;
typedef int tBLE_SCAN_PARAM_SETUP_CBACK ;
typedef int tBLE_SCAN_MODE ;
typedef void* UINT8 ;
typedef void* UINT32 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(tGATT_IF VAR_1, UINT32 VAR_2,
                                  UINT32 VAR_3, tBLE_SCAN_MODE VAR_4, UINT8 VAR_5,
                                  UINT8 VAR_6, UINT8 VAR_7, tBLE_SCAN_PARAM_SETUP_CBACK VAR_8)
{
    tBTA_DM_API_BLE_SCAN_FILTER_PARAMS *VAR_9;

    if ((VAR_9 = (tBTA_DM_API_BLE_SCAN_FILTER_PARAMS *)FUNC_2(sizeof(tBTA_DM_API_BLE_SCAN_FILTER_PARAMS))) != ((void*)0)) {
        FUNC_1(VAR_9, 0, sizeof(tBTA_DM_API_BLE_SCAN_FILTER_PARAMS));
        VAR_9->hdr.event = VAR_0;
        VAR_9->client_if = VAR_1;
        VAR_9->scan_int = VAR_2;
        VAR_9->scan_window = VAR_3;
        VAR_9->scan_mode = VAR_4;
        VAR_9->addr_type_own = VAR_6;
        VAR_9->scan_duplicate_filter = VAR_7;
        VAR_9->scan_filter_policy = VAR_5;
        VAR_9->scan_param_setup_cback = VAR_8;

        FUNC_0(VAR_9);
    }


}
