
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_7__ {scalar_t__ in_use; void* p_ref; int * p_cback; int inst_id; } ;
typedef TYPE_2__ tBTM_BLE_MULTI_ADV_INST ;
typedef int tBTM_BLE_MULTI_ADV_CBACK ;
typedef int tBTM_BLE_ADV_PARAMS ;
typedef int UINT8 ;
struct TYPE_6__ {scalar_t__ adv_inst_max; } ;
struct TYPE_9__ {TYPE_1__ cmn_ble_vsc_cb; } ;
struct TYPE_8__ {TYPE_2__* p_adv_inst; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int ) ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;

tBTM_STATUS FUNC_5 (tBTM_BLE_ADV_PARAMS *VAR_8,
                                      tBTM_BLE_MULTI_ADV_CBACK *VAR_9, void *VAR_10)
{
    UINT8 VAR_11;
    tBTM_STATUS VAR_12 = VAR_3;
    tBTM_BLE_MULTI_ADV_INST *VAR_13 = &VAR_7.p_adv_inst[0];

    FUNC_2("BTM_BleEnableAdvInstance called");

    if (0 == VAR_6.cmn_ble_vsc_cb.adv_inst_max) {
        FUNC_1("Controller does not support Multi ADV");
        return VAR_2;
    }

    if (((void*)0) == VAR_13) {
        FUNC_1("Invalid instance in BTM_BleEnableAdvInstance");
        return VAR_2;
    }

    for (VAR_11 = 0; VAR_11 < FUNC_0() - 1; VAR_11 ++, VAR_13++) {
        if (VAR_4 == VAR_13->in_use) {
            VAR_13->in_use = VAR_5;

            if (VAR_8) {
                VAR_12 = FUNC_4(VAR_13, VAR_8, 0);
            } else {
                VAR_12 = VAR_1;
            }


            FUNC_2("btm_ble_enable_multi_adv being called with inst_id:%d",
                            VAR_13->inst_id);

            if (VAR_1 == VAR_12) {
                if ((VAR_12 = FUNC_3 (VAR_5, VAR_13->inst_id,
                                                    VAR_0)) == VAR_1) {
                    VAR_13->p_cback = VAR_9;
                    VAR_13->p_ref = VAR_10;
                }
            }

            if (VAR_1 != VAR_12) {
                VAR_13->in_use = VAR_4;
                FUNC_1("BTM_BleEnableAdvInstance failed");
            }
            break;
        }
    }
    return VAR_12;
}
