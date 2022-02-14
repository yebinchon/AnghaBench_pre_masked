
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ num_tries; scalar_t__ local_busy; int rej_sent; int srej_sent; int retrans_touts; int waiting_for_ack_q; int wait_ack; } ;
struct TYPE_8__ {scalar_t__ max_transmit; } ;
struct TYPE_9__ {TYPE_1__ fcr; } ;
struct TYPE_11__ {TYPE_3__ fcrb; TYPE_2__ peer_cfg; int local_cid; } ;
typedef TYPE_4__ tL2C_CCB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (TYPE_4__*) ;

void FUNC_5 (tL2C_CCB *VAR_3)
{
    FUNC_1(VAR_3 != ((void*)0));
    FUNC_0 ("l2c_fcr_proc_tout:  CID: 0x%04x  num_tries: %u (max: %u)  wait_ack: %u  ack_q_count: %u",
                       VAR_3->local_cid, VAR_3->fcrb.num_tries,
                       VAR_3->peer_cfg.fcr.max_transmit,
                       VAR_3->fcrb.wait_ack,
                       FUNC_2(VAR_3->fcrb.waiting_for_ack_q));


    VAR_3->fcrb.retrans_touts++;


    if ( (VAR_3->peer_cfg.fcr.max_transmit != 0) && (++VAR_3->fcrb.num_tries > VAR_3->peer_cfg.fcr.max_transmit) ) {
        FUNC_4 (VAR_3);
    } else {
        if (!VAR_3->fcrb.srej_sent && !VAR_3->fcrb.rej_sent) {
            if (VAR_3->fcrb.local_busy) {
                FUNC_3 (VAR_3, VAR_1, VAR_0);
            } else {
                FUNC_3 (VAR_3, VAR_2, VAR_0);
            }
        }
    }
}
