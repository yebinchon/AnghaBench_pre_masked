
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_7__ {scalar_t__ in_use; } ;
typedef TYPE_2__ tBTM_BLE_MULTI_ADV_INST ;
typedef int tBTM_BLE_ADV_PARAMS ;
typedef int UINT8 ;
struct TYPE_6__ {scalar_t__ adv_inst_max; } ;
struct TYPE_9__ {TYPE_1__ cmn_ble_vsc_cb; } ;
struct TYPE_8__ {TYPE_2__* p_adv_inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int ) ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;

tBTM_STATUS FUNC_6 (UINT8 VAR_10, tBTM_BLE_ADV_PARAMS *VAR_11)
{
    tBTM_STATUS VAR_12 = VAR_4;
    tBTM_BLE_MULTI_ADV_INST *VAR_13 = &VAR_9.p_adv_inst[VAR_10 - 1];

    FUNC_3("BTM_BleUpdateAdvInstParam called with inst_id:%d", VAR_10);

    if (0 == VAR_8.cmn_ble_vsc_cb.adv_inst_max) {
        FUNC_2("Controller does not support Multi ADV");
        return VAR_3;
    }

    if (VAR_10 < FUNC_0() &&
            VAR_10 != VAR_0 &&
            VAR_11 != ((void*)0)) {
        if (VAR_6 == VAR_13->in_use) {
            FUNC_1("adv instance %d is not active", VAR_10);
            return VAR_5;
        } else {
            FUNC_4(VAR_6, VAR_10, 0);
        }

        if (VAR_2 == FUNC_5(VAR_13, VAR_11, 0)) {
            VAR_12 = FUNC_4(VAR_7, VAR_10, VAR_1);
        }
    }
    return VAR_12;
}
