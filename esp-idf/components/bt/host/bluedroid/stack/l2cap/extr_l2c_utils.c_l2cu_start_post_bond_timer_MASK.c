
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * p_first_ccb; } ;
struct TYPE_5__ {scalar_t__ link_state; scalar_t__ idle_timeout; int timer_entry; int handle; TYPE_1__ ccb_queue; int is_bonding; } ;
typedef TYPE_2__ tL2C_LCB ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_2__* FUNC_2 (int) ;

BOOLEAN FUNC_3 (UINT16 VAR_10)
{
    UINT16 VAR_11;
    tL2C_LCB *VAR_12 = FUNC_2(VAR_10);

    if (!VAR_12) {
        return (VAR_9);
    }

    VAR_12->is_bonding = VAR_2;


    if (VAR_12->ccb_queue.p_first_ccb != ((void*)0)) {
        return (VAR_2);
    }


    if ( (VAR_12->link_state == VAR_6) || (VAR_12->link_state == VAR_7) || (VAR_12->link_state == VAR_8) ) {
        if (VAR_12->idle_timeout == 0) {
            if (FUNC_0 (VAR_12->handle, VAR_3)) {
                VAR_12->link_state = VAR_8;
                VAR_11 = VAR_5;
            } else {
                VAR_11 = VAR_1;
            }
        } else {
            VAR_11 = VAR_4;
        }

        if (VAR_11 != 0xFFFF) {
            FUNC_1 (&VAR_12->timer_entry, VAR_0, VAR_11);
        }

        return (VAR_9);
    }

    return (VAR_2);
}
