
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_5__ {scalar_t__ tot_scan_results_strg; } ;
typedef TYPE_1__ tBTM_BLE_VSC_CB ;
typedef int tBTM_BLE_TRACK_ADV_CBACK ;
typedef int tBTM_BLE_REF_VALUE ;
struct TYPE_7__ {int ref_value; int * p_track_cback; } ;
struct TYPE_6__ {int (* supports_ble ) () ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_3__ VAR_3 ;
 TYPE_2__* FUNC_3 () ;
 int FUNC_4 () ;

tBTM_STATUS FUNC_5(tBTM_BLE_TRACK_ADV_CBACK *VAR_4,
                                   tBTM_BLE_REF_VALUE VAR_5)
{
    tBTM_BLE_VSC_CB VAR_6;
    FUNC_2 (" BTM_BleTrackAdvertiser");
    if (!FUNC_3()->supports_ble()) {
        return VAR_2;
    }

    FUNC_0(&VAR_6);

    if (0 == VAR_6.tot_scan_results_strg) {
        FUNC_1("Controller does not support scan storage");
        return VAR_1;
    }

    VAR_3.p_track_cback = VAR_4;
    VAR_3.ref_value = VAR_5;
    return VAR_0;
}
