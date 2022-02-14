
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBTM_BLE_MULTI_ADV_INST ;
struct TYPE_8__ {int own_addr_type; } ;
struct TYPE_9__ {TYPE_2__ addr_mgnt_cb; } ;
struct TYPE_7__ {int discoverable_mode; int connectable_mode; } ;
struct TYPE_11__ {TYPE_3__ ble_ctr_cb; TYPE_1__ btm_inq_vars; } ;
struct TYPE_10__ {int event; scalar_t__ param; } ;
typedef TYPE_4__ TIMER_LIST_ENT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;






 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_5__ VAR_2 ;
 int FUNC_8 (void*) ;
 scalar_t__ VAR_3 ;

void FUNC_9(TIMER_LIST_ENT *VAR_4)
{
    FUNC_1 ("btm_ble_timeout");

    switch (VAR_4->event) {
    case 130:
        FUNC_7();
        break;
    case 128:
        FUNC_5();
        break;
    case 131:
        FUNC_6();
        break;

    case 132:

        VAR_2.btm_inq_vars.discoverable_mode &= ~VAR_1;
        FUNC_3(VAR_2.btm_inq_vars.connectable_mode, VAR_2.btm_inq_vars.discoverable_mode);
        break;

    case 129:
        if (VAR_2.ble_ctr_cb.addr_mgnt_cb.own_addr_type == VAR_0) {
            if (((void*)0) == (void *)(VAR_4->param)) {

                FUNC_8((void *)VAR_3);
            } else {
                if (FUNC_0() > 0) {
                    FUNC_2((tBTM_BLE_MULTI_ADV_INST *)VAR_4->param);
                }
            }
        }
        break;

    case 133:

        FUNC_4();
        break;

    default:
        break;

    }
}
