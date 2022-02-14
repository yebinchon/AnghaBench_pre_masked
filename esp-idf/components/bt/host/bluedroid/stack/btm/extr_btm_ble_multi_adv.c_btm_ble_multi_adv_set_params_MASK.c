
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_18__ {scalar_t__ param; } ;
struct TYPE_15__ {int member_5; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_13__ {scalar_t__ inst_id; scalar_t__ adv_evt; TYPE_7__ raddr_timer_ent; TYPE_4__ rpa; } ;
typedef TYPE_2__ tBTM_BLE_MULTI_ADV_INST ;
struct TYPE_14__ {scalar_t__ adv_type; scalar_t__ channel_map; scalar_t__ adv_filter_policy; scalar_t__ tx_power; int adv_int_max; int adv_int_min; } ;
typedef TYPE_3__ tBTM_BLE_ADV_PARAMS ;
typedef int UINT8 ;
struct TYPE_12__ {scalar_t__ privacy_mode; } ;
struct TYPE_19__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_17__ {TYPE_5__* (* get_address ) () ;} ;
struct TYPE_16__ {TYPE_4__ address; } ;
typedef scalar_t__ TIMER_PARAM_TYPE ;
typedef TYPE_4__ BD_ADDR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_4__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,...) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,int ) ;
 int VAR_13 ;
 TYPE_8__ VAR_14 ;
 int FUNC_7 (TYPE_7__*,int ,int ) ;
 TYPE_6__* FUNC_8 () ;
 int FUNC_9 (int *,int ,int) ;
 TYPE_5__* FUNC_10 () ;

tBTM_STATUS FUNC_11 (tBTM_BLE_MULTI_ADV_INST *VAR_15,
        tBTM_BLE_ADV_PARAMS *VAR_16,
        UINT8 VAR_17)
{
    UINT8 VAR_18[VAR_7], *VAR_19;
    tBTM_STATUS VAR_20;
    BD_ADDR VAR_21 = {0, 0, 0, 0, 0, 0};

    VAR_19 = VAR_18;
    FUNC_9(VAR_18, 0, VAR_7);

    FUNC_4(VAR_19, VAR_6);

    FUNC_3 (VAR_19, VAR_16->adv_int_min);
    FUNC_3 (VAR_19, VAR_16->adv_int_max);
    FUNC_4 (VAR_19, VAR_16->adv_type);







    {
        FUNC_4 (VAR_19, VAR_2);
        FUNC_0 (VAR_19, FUNC_8()->get_address()->address);
    }

    FUNC_1 (" btm_ble_multi_adv_set_params,Min %d, Max %d,adv_type %d",
                     VAR_16->adv_int_min, VAR_16->adv_int_max, VAR_16->adv_type);

    FUNC_4 (VAR_19, 0);
    FUNC_0 (VAR_19, VAR_21);

    if (VAR_16->channel_map == 0 || VAR_16->channel_map > VAR_5) {
        VAR_16->channel_map = VAR_5;
    }
    FUNC_4 (VAR_19, VAR_16->channel_map);

    if (VAR_16->adv_filter_policy >= VAR_1) {
        VAR_16->adv_filter_policy = VAR_0;
    }
    FUNC_4 (VAR_19, VAR_16->adv_filter_policy);

    FUNC_4 (VAR_19, VAR_15->inst_id);

    if (VAR_16->tx_power > VAR_4) {
        VAR_16->tx_power = VAR_4;
    }
    FUNC_4 (VAR_19, FUNC_5(VAR_16->tx_power));

    FUNC_1("set_params:Chnl Map %d,adv_fltr policy %d,ID:%d, TX Power%d",
                    VAR_16->channel_map, VAR_16->adv_filter_policy, VAR_15->inst_id, VAR_16->tx_power);

    if ((VAR_20 = FUNC_2 (VAR_12,
                                         VAR_7,
                                         VAR_18,
                                         VAR_13))
            == VAR_9) {
        VAR_15->adv_evt = VAR_16->adv_type;
        FUNC_6(VAR_6, VAR_15->inst_id, VAR_17);
    }
    return VAR_20;
}
