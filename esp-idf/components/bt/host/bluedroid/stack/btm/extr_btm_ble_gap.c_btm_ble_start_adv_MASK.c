
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_5__ {scalar_t__ evt_type; scalar_t__ afp; void* adv_mode; int state; } ;
typedef TYPE_2__ tBTM_BLE_INQ_CB ;
typedef int tBTM_BLE_GAP_STATE ;
typedef void* UINT8 ;
struct TYPE_4__ {int wl_state; TYPE_2__ inq_var; } ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_16 ;
 int FUNC_2 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_3__ VAR_19 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (void*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

tBTM_STATUS FUNC_8(void)
{
    tBTM_BLE_INQ_CB *VAR_20 = &VAR_19.ble_ctr_cb.inq_var;
    tBTM_STATUS VAR_21 = VAR_8;
    FUNC_0 ("btm_ble_start_adv\n");


    if (!FUNC_1 (VAR_18, VAR_20->evt_type)) {
        return VAR_9;
    }

    FUNC_5(&VAR_13, VAR_11);
    if (VAR_20->afp != VAR_0) {

        FUNC_3();
        VAR_19.ble_ctr_cb.wl_state |= VAR_7;
    }


    tBTM_BLE_GAP_STATE VAR_22 = VAR_20->state;
    UINT8 VAR_23 = VAR_20->adv_mode;
    VAR_20->adv_mode = VAR_3;
    VAR_20->state = VAR_1;
    FUNC_1(VAR_17, VAR_20->evt_type);
    if (FUNC_4 (VAR_3)) {
        FUNC_7(&VAR_14, VAR_12);
        VAR_21 = VAR_15;
        FUNC_0 ("BTM_SUCCESS\n");
    } else {
        VAR_20->adv_mode = VAR_2;
        VAR_20->state = VAR_22;
        VAR_20->adv_mode = VAR_23;
        FUNC_1(VAR_16, VAR_20->evt_type);
        VAR_19.ble_ctr_cb.wl_state &= ~VAR_7;
    }

    if(VAR_15 != VAR_10) {
        VAR_20->adv_mode = VAR_23;
    }
    FUNC_6(&VAR_13);
    return VAR_21;
}
