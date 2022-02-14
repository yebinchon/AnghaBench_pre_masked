
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int max_held_acks; } ;
struct TYPE_14__ {int tx_win_sz; } ;
struct TYPE_15__ {TYPE_4__ fcr; int qos; scalar_t__ qos_present; } ;
struct TYPE_11__ {int mon_tout; int rtrans_tout; } ;
struct TYPE_12__ {TYPE_1__ fcr; } ;
struct TYPE_17__ {TYPE_6__ fcrb; TYPE_5__ our_cfg; TYPE_2__ peer_cfg; } ;
typedef TYPE_7__ tL2C_CCB ;
struct TYPE_13__ {scalar_t__ mode; int tx_win_sz; int mon_tout; int rtrans_tout; } ;
struct TYPE_18__ {TYPE_3__ fcr; scalar_t__ fcr_present; int qos; scalar_t__ qos_present; } ;
typedef TYPE_8__ tL2CAP_CFG_INFO ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int,int) ;

void FUNC_1 (tL2C_CCB *VAR_1, tL2CAP_CFG_INFO *VAR_2)
{

    if ( (VAR_2->qos_present) && (VAR_1->our_cfg.qos_present) ) {
        VAR_1->our_cfg.qos = VAR_2->qos;
    }

    if (VAR_2->fcr_present) {

        if (VAR_2->fcr.mode == VAR_0) {
            VAR_1->peer_cfg.fcr.rtrans_tout = VAR_2->fcr.rtrans_tout;
            VAR_1->peer_cfg.fcr.mon_tout = VAR_2->fcr.mon_tout;
        }


        if (VAR_2->fcr.tx_win_sz < VAR_1->our_cfg.fcr.tx_win_sz) {
            VAR_1->fcrb.max_held_acks = VAR_2->fcr.tx_win_sz / 3;
        } else {
            VAR_1->fcrb.max_held_acks = VAR_1->our_cfg.fcr.tx_win_sz / 3;
        }

        FUNC_0 ("l2cu_process_peer_cfg_rsp(): peer tx_win_sz: %d, our tx_win_sz: %d, max_held_acks: %d",
                           VAR_2->fcr.tx_win_sz, VAR_1->our_cfg.fcr.tx_win_sz, VAR_1->fcrb.max_held_acks);
    }
}
