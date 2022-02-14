
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_4__ {int rl_state; } ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_5__ {scalar_t__ (* get_ble_resolving_list_max_size ) () ;} ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__ VAR_3 ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

BOOLEAN FUNC_4(UINT8 VAR_4, BOOLEAN VAR_5 )
{
    UINT8 VAR_6 = VAR_3.ble_ctr_cb.rl_state;


    if (FUNC_2()->get_ble_resolving_list_max_size() == 0) {
        return VAR_1;
    }

    VAR_3.ble_ctr_cb.rl_state &= ~VAR_4;

    if (VAR_6 != VAR_0 && VAR_3.ble_ctr_cb.rl_state == VAR_0) {
        if (FUNC_0()) {
            if (VAR_5) {
                FUNC_1();
            }

            return VAR_2;
        } else {
            return VAR_1;
        }
    }

    return VAR_2;
}
