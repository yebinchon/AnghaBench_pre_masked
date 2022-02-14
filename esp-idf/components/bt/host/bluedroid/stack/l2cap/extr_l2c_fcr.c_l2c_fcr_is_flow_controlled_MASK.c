
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ remote_busy; int controller_idle; int xmit_window_closed; int waiting_for_ack_q; } ;
struct TYPE_9__ {scalar_t__ mode; scalar_t__ tx_win_sz; } ;
struct TYPE_10__ {TYPE_2__ fcr; } ;
struct TYPE_12__ {TYPE_4__ fcrb; TYPE_1__* p_lcb; int xmit_hold_q; TYPE_3__ peer_cfg; } ;
typedef TYPE_5__ tL2C_CCB ;
struct TYPE_13__ {scalar_t__ controller_xmit_window; } ;
struct TYPE_8__ {int sent_not_acked; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_6__ VAR_3 ;

BOOLEAN FUNC_3 (tL2C_CCB *VAR_4)
{
    FUNC_0(VAR_4 != ((void*)0));
    if (VAR_4->peer_cfg.fcr.mode == VAR_1) {

        if ( (VAR_4->fcrb.remote_busy == VAR_2)
         || (FUNC_2(VAR_4->fcrb.waiting_for_ack_q) >= VAR_4->peer_cfg.fcr.tx_win_sz) ) {

            if (!FUNC_1(VAR_4->xmit_hold_q)) {
                VAR_4->fcrb.xmit_window_closed++;

                if ((VAR_4->p_lcb->sent_not_acked < 2) && (VAR_3.controller_xmit_window > 0)) {
                    VAR_4->fcrb.controller_idle++;
                }
            }

            return (VAR_2);
        }
    }
    return (VAR_0);
}
