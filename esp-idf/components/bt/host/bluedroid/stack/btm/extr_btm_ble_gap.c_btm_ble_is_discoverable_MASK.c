
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int bdaddr_cond; } ;
struct TYPE_10__ {scalar_t__ filter_cond_type; TYPE_2__ filter_cond; } ;
typedef TYPE_4__ tBTM_INQ_PARMS ;
struct TYPE_11__ {scalar_t__ adv_len; int adv_data_cache; } ;
typedef TYPE_5__ tBTM_BLE_INQ_CB ;
typedef scalar_t__ UINT8 ;
struct TYPE_9__ {int inq_active; TYPE_4__ inqparms; } ;
struct TYPE_7__ {int scan_activity; TYPE_5__ inq_var; } ;
struct TYPE_12__ {TYPE_3__ btm_inq_vars; TYPE_1__ ble_ctr_cb; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__* FUNC_3 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__*) ;
 TYPE_6__ VAR_13 ;
 scalar_t__ FUNC_6 (int ,int ,int ) ;

UINT8 FUNC_7(BD_ADDR VAR_14, UINT8 VAR_15, UINT8 *VAR_16)
{
    UINT8 *VAR_17, VAR_18 = 0, VAR_19 = 0;
    UINT8 VAR_20;
    tBTM_INQ_PARMS *VAR_21 = &VAR_13.btm_inq_vars.inqparms;
    tBTM_BLE_INQ_CB *VAR_22 = &VAR_13.ble_ctr_cb.inq_var;

    FUNC_5(VAR_16);


    if (FUNC_1(VAR_13.ble_ctr_cb.scan_activity)) {
        VAR_19 |= VAR_10;
    }

    if (FUNC_0(VAR_13.ble_ctr_cb.scan_activity)) {
        VAR_19 |= VAR_4;
    }

    if (FUNC_2(VAR_13.ble_ctr_cb.scan_activity) &&
            (VAR_15 == VAR_3 || VAR_15 == VAR_2)) {
        VAR_19 |= VAR_11;
    }


    if (VAR_21->filter_cond_type == VAR_12 &&
            FUNC_6(VAR_14, VAR_21->filter_cond.bdaddr_cond, VAR_0) != 0) {
        FUNC_4("BD ADDR does not meet filter condition");
        return VAR_19;
    }

    if (VAR_22->adv_len != 0) {
        if ((VAR_17 = FUNC_3(VAR_22->adv_data_cache,
                                       VAR_1, &VAR_20)) != ((void*)0)) {
            VAR_18 = * VAR_17;

            if ((VAR_13.btm_inq_vars.inq_active & VAR_5) &&
                    (VAR_18 & (VAR_9 | VAR_6)) != 0) {
                FUNC_4("Find Generable Discoverable device");
                VAR_19 |= VAR_7;
            }

            else if (VAR_13.btm_inq_vars.inq_active & VAR_8 &&
                     (VAR_18 & VAR_9) != 0) {
                FUNC_4("Find limited discoverable device");
                VAR_19 |= VAR_7;
            }
        }
    }
    return VAR_19;
}
