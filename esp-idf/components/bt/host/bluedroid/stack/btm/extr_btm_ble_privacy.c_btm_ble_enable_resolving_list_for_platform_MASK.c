
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int in_controller_list; } ;
struct TYPE_8__ {TYPE_1__ ble; } ;
typedef TYPE_3__ tBTM_SEC_DEV_REC ;
typedef scalar_t__ UINT8 ;
struct TYPE_7__ {scalar_t__ wl_state; scalar_t__ resolving_list_avail_size; } ;
struct TYPE_10__ {TYPE_3__* sec_dev_rec; TYPE_2__ ble_ctr_cb; } ;
struct TYPE_9__ {scalar_t__ (* get_ble_resolving_list_max_size ) () ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_5__ VAR_5 ;
 TYPE_4__* FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;

void FUNC_5 (UINT8 VAR_6)
{

    if (FUNC_2()->get_ble_resolving_list_max_size() == 0) {
        return;
    }

    if (VAR_5.ble_ctr_cb.wl_state == VAR_0) {
        if (FUNC_2()->get_ble_resolving_list_max_size() >
                VAR_5.ble_ctr_cb.resolving_list_avail_size) {
            FUNC_1(VAR_6);
        } else {
            FUNC_0(VAR_6, VAR_4);
        }
        return;
    }

    tBTM_SEC_DEV_REC *VAR_7 = &VAR_5.sec_dev_rec[0];
    for (UINT8 VAR_8 = 0; VAR_8 < VAR_2; VAR_8 ++, VAR_7 ++) {
        if ((VAR_7->ble.in_controller_list & VAR_1) &&
                (VAR_7->ble.in_controller_list & VAR_3)) {
            FUNC_1(VAR_6);
            return;
        }
    }
    FUNC_0(VAR_6, VAR_4);
}
