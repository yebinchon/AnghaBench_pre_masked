
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ mode; } ;
struct TYPE_13__ {TYPE_1__ fcr; } ;
struct TYPE_16__ {int remote_cid; size_t ccb_priority; TYPE_4__* p_lcb; int xmit_hold_q; int local_cid; TYPE_2__ peer_cfg; } ;
typedef TYPE_5__ tL2C_CCB ;
typedef int UINT8 ;
struct TYPE_18__ {int check_round_robin; } ;
struct TYPE_17__ {int offset; int len; int event; } ;
struct TYPE_15__ {size_t rr_pri; scalar_t__ link_xmit_quota; TYPE_3__* rr_serv; } ;
struct TYPE_14__ {scalar_t__ quota; } ;
typedef TYPE_6__ BT_HDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,TYPE_6__*,int ) ;
 TYPE_8__ VAR_4 ;
 int FUNC_2 (TYPE_5__*) ;

void FUNC_3 (tL2C_CCB *VAR_5, BT_HDR *VAR_6)
{
    UINT8 *VAR_7;

    if (VAR_5->peer_cfg.fcr.mode != VAR_1) {
        VAR_6->event = 0;
    } else {

        VAR_6->event = VAR_5->local_cid;


        VAR_6->offset -= VAR_2;
        VAR_6->len += VAR_2;


        VAR_7 = (UINT8 *)(VAR_6 + 1) + VAR_6->offset;


        FUNC_0 (VAR_7, VAR_6->len - VAR_2);
        FUNC_0 (VAR_7, VAR_5->remote_cid);
    }

    FUNC_1(VAR_5->xmit_hold_q, VAR_6, VAR_0);

    FUNC_2 (VAR_5);



    if (( VAR_5->p_lcb->rr_pri > VAR_5->ccb_priority )
            && ( VAR_5->p_lcb->rr_serv[VAR_5->ccb_priority].quota > 0)) {

        VAR_5->p_lcb->rr_pri = VAR_5->ccb_priority;
    }



    if (VAR_5->p_lcb->link_xmit_quota == 0) {
        VAR_4.check_round_robin = VAR_3;
    }
}
