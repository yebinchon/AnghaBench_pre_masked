
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int direct_bda; int adv_chnl_map; int adv_interval_max; int adv_interval_min; } ;
typedef TYPE_2__ tBTM_BLE_INQ_CB ;
typedef int tBTM_BLE_ADV_CHNL_MAP ;
typedef int tBLE_BD_ADDR ;
typedef int UINT16 ;
struct TYPE_5__ {TYPE_2__ inq_var; } ;
struct TYPE_8__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_7__ {int (* supports_ble ) () ;} ;


 int FUNC_0 (char*) ;
 TYPE_4__ VAR_0 ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 () ;

void FUNC_4 (UINT16 *VAR_1, UINT16 *VAR_2,
                           tBLE_BD_ADDR *VAR_3, tBTM_BLE_ADV_CHNL_MAP *VAR_4)
{
    tBTM_BLE_INQ_CB *VAR_5 = &VAR_0.ble_ctr_cb.inq_var;

    FUNC_0 ("BTM_BleReadAdvParams ");
    if (!FUNC_1()->supports_ble()) {
        return ;
    }

    *VAR_1 = VAR_5->adv_interval_min;
    *VAR_2 = VAR_5->adv_interval_max;
    *VAR_4 = VAR_5->adv_chnl_map;

    if (VAR_3 != ((void*)0)) {
        FUNC_2(VAR_3, &VAR_5->direct_bda, sizeof(tBLE_BD_ADDR));
    }
}
