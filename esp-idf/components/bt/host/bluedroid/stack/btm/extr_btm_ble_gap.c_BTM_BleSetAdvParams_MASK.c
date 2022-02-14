
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_9__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_11__ {int own_addr_type; } ;
typedef TYPE_2__ tBTM_LE_RANDOM_CB ;
struct TYPE_12__ {scalar_t__ adv_mode; int afp; int adv_chnl_map; int evt_type; void* adv_interval_max; void* adv_interval_min; int direct_bda; } ;
typedef TYPE_3__ tBTM_BLE_INQ_CB ;
typedef int tBTM_BLE_ADV_CHNL_MAP ;
typedef int tBLE_BD_ADDR ;
typedef int tBLE_ADDR_TYPE ;
typedef scalar_t__ UINT8 ;
typedef void* UINT16 ;
struct TYPE_10__ {TYPE_3__ inq_var; TYPE_2__ addr_mgnt_cb; } ;
struct TYPE_15__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_14__ {int (* supports_ble ) () ;} ;
struct TYPE_13__ {int member_0; } ;
typedef TYPE_4__ BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_9__ VAR_6 ;
 int FUNC_4 (TYPE_3__*,TYPE_4__,int *,int *) ;
 int FUNC_5 (void*,void*,int ,int ,int ,TYPE_4__,int ,int ) ;
 TYPE_5__* FUNC_6 () ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 () ;

tBTM_STATUS FUNC_9(UINT16 VAR_7, UINT16 VAR_8,
                                tBLE_BD_ADDR *VAR_9,
                                tBTM_BLE_ADV_CHNL_MAP VAR_10)
{
    tBTM_LE_RANDOM_CB *VAR_11 = &VAR_6.ble_ctr_cb.addr_mgnt_cb;
    tBTM_BLE_INQ_CB *VAR_12 = &VAR_6.ble_ctr_cb.inq_var;
    tBTM_STATUS VAR_13 = VAR_5;
    BD_ADDR VAR_14 = {0};
    tBLE_ADDR_TYPE VAR_15 = VAR_0;
    tBLE_ADDR_TYPE VAR_16 = VAR_11->own_addr_type;
    UINT8 VAR_17 = VAR_12->adv_mode;

    FUNC_1 ("BTM_BleSetAdvParams");

    if (!FUNC_6()->supports_ble()) {
        return VAR_4;
    }

    if (!FUNC_0(VAR_7, VAR_3, VAR_2) ||
            !FUNC_0(VAR_8, VAR_3, VAR_2)) {
        return VAR_4;
    }

    VAR_12->adv_interval_min = VAR_7;
    VAR_12->adv_interval_max = VAR_8;
    VAR_12->adv_chnl_map = VAR_10;

    if (VAR_9) {
        FUNC_7(&VAR_12->direct_bda, VAR_9, sizeof(tBLE_BD_ADDR));
    }

    FUNC_1 ("update params for an active adv\n");

    FUNC_3();

    VAR_12->evt_type = FUNC_4(VAR_12, VAR_14, &VAR_15,
                     &VAR_16);


    FUNC_5 (VAR_12->adv_interval_min,
                                     VAR_12->adv_interval_max,
                                     VAR_12->evt_type,
                                     VAR_16,
                                     VAR_15,
                                     VAR_14,
                                     VAR_12->adv_chnl_map,
                                     VAR_12->afp);

    if (VAR_17 == VAR_1) {
        FUNC_2();
    }

    return VAR_13;
}
