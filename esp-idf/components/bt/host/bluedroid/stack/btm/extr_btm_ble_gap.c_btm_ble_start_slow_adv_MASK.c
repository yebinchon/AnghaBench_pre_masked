
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int own_addr_type; } ;
typedef TYPE_2__ tBTM_LE_RANDOM_CB ;
struct TYPE_11__ {scalar_t__ adv_mode; int afp; int adv_chnl_map; int evt_type; } ;
typedef TYPE_3__ tBTM_BLE_INQ_CB ;
typedef int tBLE_ADDR_TYPE ;
struct TYPE_9__ {TYPE_2__ addr_mgnt_cb; TYPE_3__ inq_var; } ;
struct TYPE_13__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_12__ {int member_0; } ;
typedef TYPE_4__ BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_8__ VAR_3 ;
 int FUNC_2 (TYPE_3__*,TYPE_4__,int *,int *) ;
 int FUNC_3 (int ,int ,int ,int ,int ,TYPE_4__,int ,int ) ;

__attribute__((used)) static void FUNC_4 (void)
{
    tBTM_BLE_INQ_CB *VAR_4 = &VAR_3.ble_ctr_cb.inq_var;

    if (VAR_4->adv_mode == VAR_1) {
        tBTM_LE_RANDOM_CB *VAR_5 = &VAR_3.ble_ctr_cb.addr_mgnt_cb;
        BD_ADDR VAR_6 = {0};
        tBLE_ADDR_TYPE VAR_7 = VAR_0;
        tBLE_ADDR_TYPE VAR_8 = VAR_5->own_addr_type;

        FUNC_1();

        VAR_4->evt_type = FUNC_2(VAR_4, VAR_6, &VAR_7,
                         &VAR_8);


        FUNC_3 (VAR_2, VAR_2,
                                         VAR_4->evt_type, VAR_8,
                                         VAR_7, VAR_6,
                                         VAR_4->adv_chnl_map, VAR_4->afp);

        FUNC_0();
    }
}
