
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


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__ VAR_1 ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

void FUNC_4(UINT8 VAR_2)
{
    UINT8 VAR_3 = VAR_1.ble_ctr_cb.rl_state;

    VAR_1.ble_ctr_cb.rl_state |= VAR_2;
    if (VAR_3 == VAR_0 &&
            VAR_1.ble_ctr_cb.rl_state != VAR_0 &&
            FUNC_2()->get_ble_resolving_list_max_size() != 0) {
        FUNC_0();
        FUNC_1();
    }
}
