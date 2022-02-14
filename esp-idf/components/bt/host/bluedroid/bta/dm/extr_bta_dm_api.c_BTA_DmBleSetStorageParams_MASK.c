
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTA_DM_BLE_REF_VALUE ;
struct TYPE_5__ {int event; } ;
struct TYPE_6__ {void* batch_scan_notify_threshold; void* batch_scan_trunc_max; void* batch_scan_full_max; int ref_value; int * p_read_rep_cback; int * p_thres_cback; int p_setup_cback; TYPE_1__ hdr; } ;
typedef TYPE_2__ tBTA_DM_API_SET_STORAGE_CONFIG ;
typedef int tBTA_BLE_SCAN_THRESHOLD_CBACK ;
typedef int tBTA_BLE_SCAN_SETUP_CBACK ;
typedef int tBTA_BLE_SCAN_REP_CBACK ;
typedef void* UINT8 ;
struct TYPE_7__ {int * p_setup_cback; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int) ;

extern void FUNC_2(UINT8 VAR_3,
                                      UINT8 VAR_4,
                                      UINT8 VAR_5,
                                      tBTA_BLE_SCAN_SETUP_CBACK *VAR_6,
                                      tBTA_BLE_SCAN_THRESHOLD_CBACK *VAR_7,
                                      tBTA_BLE_SCAN_REP_CBACK *VAR_8,
                                      tBTA_DM_BLE_REF_VALUE VAR_9)
{
    tBTA_DM_API_SET_STORAGE_CONFIG *VAR_10;
    VAR_2.p_setup_cback = VAR_6;
    if ((VAR_10 = (tBTA_DM_API_SET_STORAGE_CONFIG *)
                 FUNC_1(sizeof(tBTA_DM_API_SET_STORAGE_CONFIG))) != ((void*)0)) {
        VAR_10->hdr.event = VAR_0;
        VAR_10->p_setup_cback = VAR_1;
        VAR_10->p_thres_cback = VAR_7;
        VAR_10->p_read_rep_cback = VAR_8;
        VAR_10->ref_value = VAR_9;
        VAR_10->batch_scan_full_max = VAR_3;
        VAR_10->batch_scan_trunc_max = VAR_4;
        VAR_10->batch_scan_notify_threshold = VAR_5;
        FUNC_0(VAR_10);
    }
}
