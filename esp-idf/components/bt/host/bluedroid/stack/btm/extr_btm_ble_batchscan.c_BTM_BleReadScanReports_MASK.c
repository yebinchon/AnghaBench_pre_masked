
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_5__ {scalar_t__ tot_scan_results_strg; } ;
typedef TYPE_1__ tBTM_BLE_VSC_CB ;
typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_BATCH_SCAN_MODE ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_7__ {int scan_mode; int cur_state; } ;
struct TYPE_6__ {int (* supports_ble ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,int ) ;
 TYPE_3__ VAR_7 ;
 int FUNC_3 (int,int *,int*,int**,int *) ;
 scalar_t__ FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int,int ) ;
 TYPE_2__* FUNC_6 () ;
 int FUNC_7 () ;

tBTM_STATUS FUNC_8(tBTM_BLE_BATCH_SCAN_MODE VAR_8,
                                   tBTM_BLE_REF_VALUE VAR_9)
{
    tBTM_STATUS VAR_10 = VAR_5;
    tBTM_BLE_VSC_CB VAR_11;
    UINT8 VAR_12 = 0;
    UINT8 *VAR_13 = ((void*)0), VAR_14 = 0;
    UINT16 VAR_15 = 0;

    FUNC_2 (" BTM_BleReadScanReports; %d, %d", VAR_8, VAR_9);

    if (!FUNC_6()->supports_ble()) {
        return VAR_4;
    }

    FUNC_0(&VAR_11);

    if (0 == VAR_11.tot_scan_results_strg) {
        FUNC_1("Controller does not support batch scan");
        return VAR_3;
    }


    VAR_12 = VAR_7.scan_mode & VAR_0;
    if (0 == VAR_12) {
        VAR_12 = VAR_7.scan_mode & VAR_1;
    }


    if (VAR_12 > 0 && (VAR_1 == VAR_8 ||
                               VAR_0 == VAR_8)) {
        VAR_10 = FUNC_4(VAR_8, VAR_9);
        if (VAR_6 == VAR_10) {
            VAR_10 = FUNC_5(VAR_8, VAR_9);
            if (VAR_2 != VAR_10) {
                FUNC_3(VAR_8, &VAR_9,
                                               &VAR_14, &VAR_13, &VAR_15);
            }
        }
    } else {
        FUNC_1("Illegal read scan params: %d, %d, %d", VAR_12, VAR_8,
                        VAR_7.cur_state);
        return VAR_4;
    }
    return VAR_10;
}
