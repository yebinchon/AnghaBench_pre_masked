
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


typedef int tBTM_STATUS ;
typedef int tBTM_START_STOP_ADV_CMPL_CBACK ;
struct TYPE_9__ {int own_addr_type; } ;
typedef TYPE_3__ tBTM_LE_RANDOM_CB ;
struct TYPE_8__ {int bda; int type; } ;
struct TYPE_10__ {scalar_t__ adv_mode; int * p_stop_adv_cb; int evt_type; int afp; int adv_chnl_map; TYPE_2__ direct_bda; scalar_t__ adv_interval_max; scalar_t__ adv_interval_min; scalar_t__ scan_rsp; } ;
typedef TYPE_4__ tBTM_BLE_INQ_CB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_7__ {TYPE_4__ inq_var; TYPE_3__ addr_mgnt_cb; } ;
struct TYPE_12__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_11__ {int (* supports_ble ) () ;} ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_6__ VAR_12 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_5__* FUNC_4 () ;
 int FUNC_5 () ;

tBTM_STATUS FUNC_6(BOOLEAN VAR_13, tBTM_START_STOP_ADV_CMPL_CBACK *VAR_14)
{
    tBTM_STATUS VAR_15 = VAR_9;
    tBTM_LE_RANDOM_CB *VAR_16 = &VAR_12.ble_ctr_cb.addr_mgnt_cb;
    tBTM_BLE_INQ_CB *VAR_17 = &VAR_12.ble_ctr_cb.inq_var;
    UINT8 VAR_18 = VAR_17->scan_rsp ? VAR_3 : VAR_5;

    if (!FUNC_4()->supports_ble()) {
        return VAR_8;
    }







    if (VAR_13 && VAR_17->adv_mode == VAR_0) {

        if (!FUNC_3 ((UINT16)(VAR_17->adv_interval_min ? VAR_17->adv_interval_min :
                                              VAR_4),
                                              (UINT16)(VAR_17->adv_interval_max ? VAR_17->adv_interval_max :
                                                      VAR_4),
                                              VAR_18,
                                              VAR_16->own_addr_type,
                                              VAR_17->direct_bda.type,
                                              VAR_17->direct_bda.bda,
                                              VAR_17->adv_chnl_map,
                                              VAR_17->afp))

        {
            VAR_15 = VAR_9;
        } else {
            VAR_17->evt_type = VAR_18;
        }

        VAR_15 = FUNC_1 ();
    } else if (!VAR_13 && VAR_17->adv_mode == VAR_1) {

        VAR_17->p_stop_adv_cb = VAR_14;
        VAR_15 = FUNC_2();

        FUNC_0(VAR_7, VAR_11);

    } else {




        VAR_15 = VAR_10;
    }
    return VAR_15;
}
