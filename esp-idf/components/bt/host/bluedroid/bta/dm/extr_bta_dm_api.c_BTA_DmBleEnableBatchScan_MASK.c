
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tBTA_DM_BLE_REF_VALUE ;
struct TYPE_4__ {int event; } ;
struct TYPE_5__ {int ref_value; int addr_type; int discard_rule; void* scan_window; void* scan_int; int scan_mode; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_ENABLE_SCAN ;
typedef int tBTA_BLE_DISCARD_RULE ;
typedef int tBTA_BLE_BATCH_SCAN_MODE ;
typedef int tBLE_ADDR_TYPE ;
typedef void* UINT32 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

extern void FUNC_2(tBTA_BLE_BATCH_SCAN_MODE VAR_1,
                                     UINT32 VAR_2, UINT32 VAR_3,
                                     tBTA_BLE_DISCARD_RULE VAR_4,
                                     tBLE_ADDR_TYPE VAR_5,
                                     tBTA_DM_BLE_REF_VALUE VAR_6)
{
    tBTA_DM_API_ENABLE_SCAN *VAR_7;

    if ((VAR_7 = (tBTA_DM_API_ENABLE_SCAN *) FUNC_1(sizeof(tBTA_DM_API_ENABLE_SCAN))) != ((void*)0)) {
        VAR_7->hdr.event = VAR_0;
        VAR_7->scan_mode = VAR_1;
        VAR_7->scan_int = VAR_2;
        VAR_7->scan_window = VAR_3;
        VAR_7->discard_rule = VAR_4;
        VAR_7->addr_type = VAR_5;
        VAR_7->ref_value = VAR_6;
        FUNC_0(VAR_7);
    }
}
