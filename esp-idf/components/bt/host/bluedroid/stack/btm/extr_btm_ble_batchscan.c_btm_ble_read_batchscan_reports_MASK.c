
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_BATCH_SCAN_MODE ;
typedef int UINT8 ;
struct TYPE_2__ {int cur_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int *,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__ VAR_7 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_4 (int *,int ,int) ;

tBTM_STATUS FUNC_5(tBTM_BLE_BATCH_SCAN_MODE VAR_9,
        tBTM_BLE_REF_VALUE VAR_10)
{
    tBTM_STATUS VAR_11 = VAR_5;
    UINT8 VAR_12[VAR_2], *VAR_13;
    VAR_13 = VAR_12;

    FUNC_4(VAR_12, 0, VAR_2);

    FUNC_2 (VAR_13, VAR_1);
    FUNC_2 (VAR_13, VAR_9);

    if ((VAR_11 = FUNC_1 (VAR_6,
                  VAR_2, VAR_12, VAR_8))
            != VAR_3) {
        FUNC_0("btm_ble_read_batchscan_reports %d", VAR_11);
        return VAR_4;
    }

    if (VAR_3 == VAR_11) {

        FUNC_3(VAR_1, VAR_7.cur_state,
                                   VAR_0, VAR_10);
    }

    return VAR_11;
}
