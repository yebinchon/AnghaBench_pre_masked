
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
typedef int tBTM_BLE_WL_STATE ;
typedef int tBTM_BLE_STATE_MASK ;
struct TYPE_5__ {scalar_t__ adv_mode; int state; int fast_adv_on; } ;
typedef TYPE_2__ tBTM_BLE_INQ_CB ;
typedef int tBTM_BLE_GAP_STATE ;
typedef void* UINT8 ;
struct TYPE_4__ {int wl_state; TYPE_2__ inq_var; } ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_14 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

tBTM_STATUS FUNC_7(void)
{
    tBTM_BLE_INQ_CB *VAR_15 = &VAR_14.ble_ctr_cb.inq_var;
    tBTM_STATUS VAR_16 = VAR_6;
    if (VAR_15->adv_mode == VAR_1) {
        FUNC_4(&VAR_11, VAR_9);
        UINT8 VAR_17 = VAR_15->adv_mode;
        BOOLEAN VAR_18 = VAR_15->fast_adv_on;
        tBTM_BLE_GAP_STATE VAR_19 = VAR_15->state;
        tBTM_BLE_WL_STATE VAR_20 = VAR_14.ble_ctr_cb.wl_state;
        tBTM_BLE_STATE_MASK VAR_21 = FUNC_1 ();

        VAR_15->fast_adv_on = VAR_7;
        VAR_15->adv_mode = VAR_0;
        VAR_15->state = VAR_3;
        VAR_14.ble_ctr_cb.wl_state &= ~VAR_4;


        FUNC_0 (VAR_2);

        if (FUNC_3 (VAR_0)) {
            FUNC_6(&VAR_12, VAR_10);
            VAR_16 = VAR_13;
        } else {

            VAR_15->fast_adv_on = VAR_18;
            VAR_15->adv_mode = VAR_17;
            VAR_15->state = VAR_19;
            VAR_14.ble_ctr_cb.wl_state = VAR_20;
            FUNC_2 (VAR_21);

            VAR_16 = VAR_5;
        }
        if(VAR_13 != VAR_8) {
            VAR_15->adv_mode = VAR_17;
        }
        FUNC_5(&VAR_11);
    }
    return VAR_16;
}
