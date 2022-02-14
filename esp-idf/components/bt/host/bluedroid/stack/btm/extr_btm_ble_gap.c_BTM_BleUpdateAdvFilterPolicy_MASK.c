
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ adv_mode; scalar_t__ afp; int connectable_mode; int adv_chnl_map; int adv_addr_type; int evt_type; scalar_t__ adv_interval_max; scalar_t__ adv_interval_min; } ;
typedef TYPE_2__ tBTM_BLE_INQ_CB ;
typedef scalar_t__ tBTM_BLE_AFP ;
typedef int tBLE_ADDR_TYPE ;
typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_9__ {TYPE_2__ inq_var; } ;
struct TYPE_13__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_12__ {int (* supports_ble ) () ;} ;
struct TYPE_11__ {int member_0; } ;
typedef TYPE_3__ BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_8__ VAR_4 ;
 int FUNC_3 (TYPE_2__*,TYPE_3__,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int ,int ,TYPE_3__,int ,scalar_t__) ;
 TYPE_4__* FUNC_5 () ;
 int FUNC_6 () ;

void FUNC_7(tBTM_BLE_AFP VAR_5)
{
    tBTM_BLE_INQ_CB *VAR_6 = &VAR_4.ble_ctr_cb.inq_var;
    tBLE_ADDR_TYPE VAR_7 = VAR_0;
    BD_ADDR VAR_8 = {0};
    UINT8 VAR_9 = VAR_6->adv_mode;

    FUNC_0 ("BTM_BleUpdateAdvFilterPolicy\n");

    if (!FUNC_5()->supports_ble()) {
        return;
    }

    if (VAR_6->afp != VAR_5) {
        VAR_6->afp = VAR_5;


        FUNC_2 ();

        if (VAR_6->connectable_mode & VAR_2) {
            VAR_6->evt_type = FUNC_3(VAR_6, VAR_8, &VAR_7,
                             &VAR_6->adv_addr_type);
        }

        FUNC_4 ((UINT16)(VAR_6->adv_interval_min ? VAR_6->adv_interval_min :
                                         VAR_3),
                                         (UINT16)(VAR_6->adv_interval_max ? VAR_6->adv_interval_max :
                                                 VAR_3),
                                         VAR_6->evt_type,
                                         VAR_6->adv_addr_type,
                                         VAR_7,
                                         VAR_8,
                                         VAR_6->adv_chnl_map,
                                         VAR_6->afp);

        if (VAR_9 == VAR_1) {
            FUNC_1 ();
        }

    }
}
