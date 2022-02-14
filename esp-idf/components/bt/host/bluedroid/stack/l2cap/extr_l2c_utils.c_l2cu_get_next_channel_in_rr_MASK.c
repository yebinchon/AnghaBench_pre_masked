
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {size_t rr_pri; TYPE_4__* rr_serv; } ;
typedef TYPE_5__ tL2C_LCB ;
struct TYPE_11__ {scalar_t__ mode; } ;
struct TYPE_12__ {TYPE_2__ fcr; } ;
struct TYPE_10__ {int retrans_q; scalar_t__ remote_busy; scalar_t__ wait_ack; } ;
struct TYPE_15__ {scalar_t__ ccb_priority; scalar_t__ chnl_state; int local_cid; int xmit_hold_q; TYPE_3__ peer_cfg; TYPE_1__ fcrb; struct TYPE_15__* p_next_ccb; } ;
typedef TYPE_6__ tL2C_CCB ;
struct TYPE_13__ {int num_ccb; int quota; TYPE_6__* p_serve_ccb; TYPE_6__* p_first_ccb; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (size_t) ;
 int VAR_3 ;
 int FUNC_1 (char*,scalar_t__,int ,int ) ;
 int FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static tL2C_CCB *FUNC_6(tL2C_LCB *VAR_4)
{
    tL2C_CCB *VAR_5 = ((void*)0);
    tL2C_CCB *VAR_6;

    int VAR_7, VAR_8;


    for ( VAR_7 = 0; (VAR_7 < VAR_3) && (!VAR_5); VAR_7++ ) {

        for ( VAR_8 = 0; (VAR_8 < VAR_4->rr_serv[VAR_4->rr_pri].num_ccb) && (!VAR_5); VAR_8++) {

            VAR_6 = VAR_4->rr_serv[VAR_4->rr_pri].p_serve_ccb;

            if (!VAR_6) {
                FUNC_2("p_serve_ccb is NULL, rr_pri=%d", VAR_4->rr_pri);
                return ((void*)0);
            }

            FUNC_1("RR scan pri=%d, lcid=0x%04x, q_cout=%d",
                              VAR_6->ccb_priority, VAR_6->local_cid,
                              FUNC_4(VAR_6->xmit_hold_q));



            if (( VAR_6->p_next_ccb == ((void*)0) )
                    || ( VAR_6->p_next_ccb->ccb_priority != VAR_6->ccb_priority )) {

                VAR_4->rr_serv[VAR_4->rr_pri].p_serve_ccb = VAR_4->rr_serv[VAR_4->rr_pri].p_first_ccb;
            } else {

                VAR_4->rr_serv[VAR_4->rr_pri].p_serve_ccb = VAR_6->p_next_ccb;
            }

            if (VAR_6->chnl_state != VAR_0) {
                continue;
            }


            if (VAR_6->peer_cfg.fcr.mode != VAR_1) {
                if (VAR_6->fcrb.wait_ack || VAR_6->fcrb.remote_busy) {
                    continue;
                }

                if (FUNC_3(VAR_6->fcrb.retrans_q)) {
                    if (FUNC_3(VAR_6->xmit_hold_q)) {
                        continue;
                    }




                    if ( (VAR_6->peer_cfg.fcr.mode == VAR_2) && (FUNC_5 (VAR_6)) ) {
                        continue;
                    }

                }
            } else {
                if (FUNC_3(VAR_6->xmit_hold_q)) {
                    continue;
                }
            }


            VAR_5 = VAR_6;

            VAR_4->rr_serv[VAR_4->rr_pri].quota--;
        }


        if ((VAR_4->rr_serv[VAR_4->rr_pri].quota == 0) || (!VAR_5)) {

            VAR_4->rr_pri = (VAR_4->rr_pri + 1) % VAR_3;

            VAR_4->rr_serv[VAR_4->rr_pri].quota = FUNC_0(VAR_4->rr_pri);
        }
    }

    if (VAR_5) {
        FUNC_1("RR service pri=%d, quota=%d, lcid=0x%04x",
                          VAR_5->ccb_priority,
                          VAR_4->rr_serv[VAR_5->ccb_priority].quota,
                          VAR_5->local_cid );
    }

    return VAR_5;
}
