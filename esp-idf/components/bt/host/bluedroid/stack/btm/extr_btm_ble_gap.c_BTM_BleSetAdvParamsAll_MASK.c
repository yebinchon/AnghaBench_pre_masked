
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int (* tBTM_START_ADV_CMPL_CBACK ) (int ) ;
struct TYPE_11__ {int exist_addr_bit; scalar_t__ own_addr_type; TYPE_4__* static_rand_addr; int * private_addr; TYPE_4__* resolvale_addr; } ;
typedef TYPE_2__ tBTM_LE_RANDOM_CB ;
struct TYPE_12__ {int afp; int direct_bda; int (* p_adv_cb ) (int ) ;scalar_t__ evt_type; int adv_chnl_map; void* adv_interval_max; void* adv_interval_min; } ;
typedef TYPE_3__ tBTM_BLE_INQ_CB ;
typedef int tBTM_BLE_AFP ;
typedef int tBTM_BLE_ADV_CHNL_MAP ;
struct TYPE_13__ {int bda; int type; } ;
typedef TYPE_4__ tBLE_BD_ADDR ;
typedef scalar_t__ tBLE_ADDR_TYPE ;
typedef scalar_t__ UINT8 ;
typedef void* UINT16 ;
struct TYPE_10__ {scalar_t__ privacy_mode; TYPE_2__ addr_mgnt_cb; TYPE_3__ inq_var; } ;
struct TYPE_15__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_14__ {int (* supports_ble ) () ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (void*,int ,int ) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ,int *) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 TYPE_8__ VAR_26 ;
 int FUNC_6 (TYPE_4__*) ;
 scalar_t__ FUNC_7 (void*,void*,scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 TYPE_6__* FUNC_8 () ;
 int FUNC_9 (int *,TYPE_4__*,int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

tBTM_STATUS FUNC_18(UINT16 VAR_27, UINT16 VAR_28, UINT8 VAR_29,
                                        tBLE_ADDR_TYPE VAR_30, tBLE_BD_ADDR *VAR_31,
                                        tBTM_BLE_ADV_CHNL_MAP VAR_32, tBTM_BLE_AFP VAR_33, tBTM_START_ADV_CMPL_CBACK *VAR_34)
{
    tBTM_LE_RANDOM_CB *VAR_35 = &VAR_26.ble_ctr_cb.addr_mgnt_cb;
    tBTM_BLE_INQ_CB *VAR_36 = &VAR_26.ble_ctr_cb.inq_var;

    FUNC_3 ("BTM_BleSetAdvParamsAll\n");

    if (!FUNC_8()->supports_ble()) {
        return VAR_15;
    }

    if(VAR_30 == VAR_3) {
        if((VAR_26.ble_ctr_cb.addr_mgnt_cb.exist_addr_bit & VAR_9) == VAR_9) {


            if (VAR_26.ble_ctr_cb.privacy_mode != VAR_17) {
                FUNC_1(VAR_19, ((void*)0));
            }

            VAR_26.ble_ctr_cb.addr_mgnt_cb.own_addr_type = VAR_3;
            FUNC_9(VAR_26.ble_ctr_cb.addr_mgnt_cb.private_addr, VAR_26.ble_ctr_cb.addr_mgnt_cb.static_rand_addr, VAR_0);

            FUNC_6(VAR_26.ble_ctr_cb.addr_mgnt_cb.static_rand_addr);

        } else if((VAR_26.ble_ctr_cb.addr_mgnt_cb.exist_addr_bit & VAR_10) == VAR_10) {
            VAR_26.ble_ctr_cb.addr_mgnt_cb.own_addr_type = VAR_3;
            FUNC_9(VAR_26.ble_ctr_cb.addr_mgnt_cb.private_addr, VAR_26.ble_ctr_cb.addr_mgnt_cb.resolvale_addr, VAR_0);
            FUNC_6(VAR_26.ble_ctr_cb.addr_mgnt_cb.resolvale_addr);
        }else {
            FUNC_2 ("No random address yet, please set random address and try\n");
            if(VAR_34) {
                (* VAR_34)(VAR_20);
            }
            return VAR_15;
        }
    } else if(VAR_30 == VAR_2 || VAR_30 == VAR_4) {
        if((VAR_26.ble_ctr_cb.addr_mgnt_cb.exist_addr_bit & VAR_10) == VAR_10) {
            VAR_30 = VAR_3;
            VAR_26.ble_ctr_cb.addr_mgnt_cb.own_addr_type = VAR_3;
            FUNC_9(VAR_26.ble_ctr_cb.addr_mgnt_cb.private_addr, VAR_26.ble_ctr_cb.addr_mgnt_cb.resolvale_addr, VAR_0);
            FUNC_6(VAR_26.ble_ctr_cb.addr_mgnt_cb.resolvale_addr);
        } else {

            if(VAR_26.ble_ctr_cb.privacy_mode != VAR_17) {
                FUNC_2 ("Error state\n");
                if(VAR_34) {
                    (* VAR_34)(VAR_20);
                }
                return VAR_15;
            }

            if(VAR_30 == VAR_2) {
                VAR_30 = VAR_1;
                VAR_26.ble_ctr_cb.addr_mgnt_cb.own_addr_type = VAR_1;
            } else {
                if((VAR_26.ble_ctr_cb.addr_mgnt_cb.exist_addr_bit & VAR_9) == VAR_9) {
                    VAR_30 = VAR_3;
                    VAR_26.ble_ctr_cb.addr_mgnt_cb.own_addr_type = VAR_3;
                    FUNC_9(VAR_26.ble_ctr_cb.addr_mgnt_cb.private_addr, VAR_26.ble_ctr_cb.addr_mgnt_cb.static_rand_addr, VAR_0);
                    FUNC_6(VAR_26.ble_ctr_cb.addr_mgnt_cb.static_rand_addr);
                } else {
                    FUNC_2 ("No RPA and no random address yet, please set RPA or random address and try\n");
                    if(VAR_34) {
                        (* VAR_34)(VAR_20);
                    }
                    return VAR_15;
                }
            }
        }
    } else {
        VAR_26.ble_ctr_cb.addr_mgnt_cb.own_addr_type = VAR_1;
    }

    if (!FUNC_0(VAR_27, VAR_6, VAR_5) ||
            !FUNC_0(VAR_28, VAR_6, VAR_5)) {
         FUNC_2 ("adv_int_min or adv_int_max is invalid\n");
        if(VAR_34) {
            (* VAR_34)(VAR_20);
        }
        return VAR_15;
    }

    FUNC_5();

    FUNC_10(&VAR_23, VAR_21);
    if(VAR_29 == VAR_7){
        FUNC_4(VAR_12);
    }else if(VAR_29 == VAR_8){
        FUNC_4(VAR_13);
    }else if(VAR_29 == VAR_11){
        FUNC_4(VAR_14);
    }

    VAR_36->adv_interval_min = VAR_27;
    VAR_36->adv_interval_max = VAR_28;
    VAR_36->adv_chnl_map = VAR_32;
    VAR_35->own_addr_type = VAR_30;
    VAR_36->evt_type = VAR_29;
    VAR_36->afp = VAR_33;
    VAR_36->p_adv_cb = *VAR_34;

    if (VAR_31) {
        FUNC_9(&VAR_36->direct_bda, VAR_31, sizeof(tBLE_BD_ADDR));
    }

    FUNC_3 ("update params for an active adv\n");

    tBTM_STATUS VAR_37 = VAR_18;

    if (FUNC_7 (VAR_27,
                                        VAR_28,
                                        VAR_29,
                                        VAR_30,
                                        VAR_31->type,
                                        VAR_31->bda,
                                        VAR_32,
                                        VAR_36->afp)) {
        FUNC_12(&VAR_24, VAR_22);
        VAR_37 = VAR_25;
    } else {
        VAR_37 = VAR_16;
    }
    FUNC_11(&VAR_23);
    return VAR_37;
}
