
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int idle_timeout; int timer_entry; void* link_state; int handle; scalar_t__ is_bonding; TYPE_1__** p_fixed_ccbs; } ;
typedef TYPE_2__ tL2C_LCB ;
typedef scalar_t__ tBTM_STATUS ;
typedef int UINT16 ;
struct TYPE_5__ {int fixed_chnl_idle_tout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,...) ;
 void* VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;

void FUNC_6 (tL2C_LCB *VAR_8)
{

    tBTM_STATUS VAR_9;

    UINT16 VAR_10 = VAR_8->idle_timeout;
    if (VAR_8->is_bonding) {
        return;
    }

    if (VAR_10 == 0) {
        FUNC_0 ("l2cu_no_dynamic_ccbs() IDLE timer 0, disconnecting link");

        VAR_9 = FUNC_1 (VAR_8->handle, VAR_4);
        if (VAR_9 == VAR_0) {
            FUNC_5(VAR_8);
            VAR_8->link_state = VAR_7;
            VAR_10 = VAR_5;
        } else if (VAR_9 == VAR_1) {
            FUNC_5(VAR_8);

            VAR_8->link_state = VAR_7;
            VAR_10 = 0xFFFF;
        } else if ( (VAR_8->is_bonding)
                    && (FUNC_2 (VAR_8->handle, VAR_4)) ) {
            FUNC_5(VAR_8);
            VAR_8->link_state = VAR_7;
            VAR_10 = VAR_5;
        } else {

            VAR_10 = VAR_3;
        }
    }

    if (VAR_10 != 0xFFFF) {
        FUNC_0 ("l2cu_no_dynamic_ccbs() starting IDLE timeout: %d", VAR_10);
        FUNC_3 (&VAR_8->timer_entry, VAR_2, VAR_10);
    } else {
        FUNC_4(&VAR_8->timer_entry);
    }
}
