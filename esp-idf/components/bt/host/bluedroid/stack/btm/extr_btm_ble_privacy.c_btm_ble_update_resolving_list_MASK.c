
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ resolving_list_index; int in_controller_list; } ;
struct TYPE_6__ {TYPE_1__ ble; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
struct TYPE_7__ {int (* supports_ble_privacy ) () ;} ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 TYPE_2__* FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(BD_ADDR VAR_1, BOOLEAN VAR_2)
{
    tBTM_SEC_DEV_REC *VAR_3 = FUNC_2(VAR_1);
    if (VAR_3 == ((void*)0)) {
        return;
    }

    if (VAR_2) {
        VAR_3->ble.in_controller_list |= VAR_0;
        if (!FUNC_3()->supports_ble_privacy()) {
            VAR_3->ble.resolving_list_index = FUNC_1();
        }
    } else {
        VAR_3->ble.in_controller_list &= ~VAR_0;
        if (!FUNC_3()->supports_ble_privacy()) {

            FUNC_0(VAR_3->ble.resolving_list_index);
            VAR_3->ble.resolving_list_index = 0;
        }
    }
}
