
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
typedef scalar_t__ tBTM_BLE_DISCARD_RULE ;
typedef scalar_t__ tBTM_BLE_BATCH_SCAN_MODE ;
typedef int tBLE_ADDR_TYPE ;
typedef void* UINT32 ;
struct TYPE_7__ {scalar_t__ cur_state; scalar_t__ discard_rule; int addr_type; void* scan_window; void* scan_interval; scalar_t__ scan_mode; } ;
struct TYPE_6__ {int (* supports_ble ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (void*,int ,int ) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_2 (char*,scalar_t__,void*,void*,scalar_t__,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__,void*,void*,int ,scalar_t__,int ) ;
 int VAR_20 ;
 TYPE_3__ VAR_21 ;
 int FUNC_5 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,void*,void*,int ,scalar_t__) ;
 TYPE_2__* FUNC_8 () ;
 int FUNC_9 () ;

tBTM_STATUS FUNC_10(tBTM_BLE_BATCH_SCAN_MODE VAR_22,
                                   UINT32 VAR_23, UINT32 VAR_24, tBLE_ADDR_TYPE VAR_25,
                                   tBTM_BLE_DISCARD_RULE VAR_26, tBTM_BLE_REF_VALUE VAR_27)
{
    tBTM_STATUS VAR_28 = VAR_19;
    tBTM_BLE_VSC_CB VAR_29;
    FUNC_4 (" BTM_BleEnableBatchScan: %d, %d, %d, %d, %d, %d",
                     VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27);

    if (!FUNC_8()->supports_ble()) {
        return VAR_18;
    }

    FUNC_1(&VAR_29);

    if (0 == VAR_29.tot_scan_results_strg) {
        FUNC_3("Controller does not support batch scan");
        return VAR_17;
    }

    FUNC_2("BTM_BleEnableBatchScan: %d, %x, %x, %d, %d", VAR_22, VAR_23,
                    VAR_24, VAR_26, VAR_21.cur_state);



    if ((FUNC_0(VAR_23, VAR_12, VAR_11) ||
            FUNC_0(VAR_24, VAR_15, VAR_14))
            && (VAR_3 == VAR_22 || VAR_2 == VAR_22
                || VAR_4 == VAR_22)
            && (VAR_7 == VAR_26 ||
                VAR_6 == VAR_26)) {
        if (VAR_13 == VAR_21.cur_state ||
                VAR_8 == VAR_21.cur_state ||
                VAR_9 == VAR_21.cur_state) {
            VAR_28 = FUNC_6(VAR_20);
            if (VAR_16 != VAR_28) {
                return VAR_28;
            }
            FUNC_5(VAR_1,
                                       VAR_10, 0, VAR_27);
        }

        VAR_21.scan_mode = VAR_22;
        VAR_21.scan_interval = VAR_23;
        VAR_21.scan_window = VAR_24;
        VAR_21.addr_type = VAR_25;
        VAR_21.discard_rule = VAR_26;

        VAR_28 = FUNC_7(VAR_22, VAR_23, VAR_24, VAR_25,
                                             VAR_26);
        if (VAR_16 != VAR_28) {
            return VAR_28;
        }


        FUNC_5(VAR_5, VAR_21.cur_state,
                                   VAR_0, VAR_27);
    } else {
        FUNC_3("Illegal enable scan params");
        return VAR_18;
    }
    return VAR_28;
}
