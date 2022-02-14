
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int peer_ext_fea; scalar_t__ link_flush_tout; int handle; } ;
typedef TYPE_4__ tL2C_LCB ;
struct TYPE_11__ {scalar_t__ mode; } ;
struct TYPE_12__ {scalar_t__ flush_to; scalar_t__ fcr_present; TYPE_2__ fcr; int qos; int qos_present; } ;
struct TYPE_10__ {int max_held_acks; } ;
struct TYPE_14__ {TYPE_4__* p_lcb; TYPE_3__ our_cfg; int bypass_fcs; TYPE_1__ fcrb; } ;
typedef TYPE_5__ tL2C_CCB ;
typedef int tL2CAP_FCR_OPTS ;
struct TYPE_16__ {scalar_t__ mode; int max_transmit; int tx_win_sz; scalar_t__ rtrans_tout; scalar_t__ mon_tout; } ;
struct TYPE_15__ {scalar_t__ fcs; scalar_t__ flush_to; void* flush_to_present; scalar_t__ fcr_present; TYPE_7__ fcr; void* fcs_present; int qos; scalar_t__ qos_present; } ;
typedef TYPE_6__ tL2CAP_CFG_INFO ;
typedef int UINT16 ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_7__*,int ,int) ;

void FUNC_2 (tL2C_CCB *VAR_9, tL2CAP_CFG_INFO *VAR_10)
{
    tL2C_LCB *VAR_11;
    UINT16 VAR_12;


    if (VAR_10->qos_present) {
        VAR_9->our_cfg.qos_present = VAR_8;
        VAR_9->our_cfg.qos = VAR_10->qos;
    }

    if (VAR_10->fcr_present) {

        if (VAR_10->fcr.mode == VAR_5) {
            FUNC_1(&VAR_10->fcr, 0, sizeof(tL2CAP_FCR_OPTS));
        } else {



            VAR_10->fcr.mon_tout = VAR_10->fcr.rtrans_tout = 0;

            if (VAR_10->fcr.mode == VAR_6) {
                VAR_10->fcr.max_transmit = VAR_10->fcr.tx_win_sz = 0;
            }
        }


        VAR_9->fcrb.max_held_acks = VAR_10->fcr.tx_win_sz / 3;


        if (VAR_9->p_lcb->peer_ext_fea & VAR_4) {

            if (VAR_10->fcs_present && VAR_10->fcs == VAR_2) {
                VAR_9->bypass_fcs |= VAR_3;
            }
        } else {
            VAR_10->fcs_present = VAR_0;
        }
    } else {
        VAR_10->fcr.mode = VAR_5;
    }

    VAR_9->our_cfg.fcr.mode = VAR_10->fcr.mode;
    VAR_9->our_cfg.fcr_present = VAR_10->fcr_present;



    if (VAR_10->flush_to_present) {
        if ((VAR_10->flush_to == 0) || (VAR_10->flush_to == VAR_7)) {



            VAR_10->flush_to_present = VAR_0;
        } else {
            VAR_9->our_cfg.flush_to = VAR_10->flush_to;
            VAR_11 = VAR_9->p_lcb;

            if (VAR_10->flush_to < VAR_11->link_flush_tout) {
                VAR_11->link_flush_tout = VAR_10->flush_to;


                if (VAR_10->flush_to <= ((VAR_1 * 5) / 8)) {

                    VAR_12 = ((VAR_10->flush_to * 8) + 3) / 5;
                    FUNC_0 (VAR_11->handle, VAR_12);
                }
            }
        }
    }
}
