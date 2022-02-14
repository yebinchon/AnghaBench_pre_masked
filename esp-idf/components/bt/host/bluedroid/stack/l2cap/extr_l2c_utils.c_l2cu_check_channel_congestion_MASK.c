
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {size_t local_cid; int buff_quota; TYPE_6__* p_lcb; TYPE_4__* p_rcb; int xmit_hold_q; void* cong_sent; } ;
typedef TYPE_7__ tL2C_CCB ;
typedef size_t UINT8 ;
struct TYPE_17__ {TYPE_5__* fixed_reg; void* is_cong_cback_context; } ;
struct TYPE_15__ {int remote_bd_addr; TYPE_7__** p_fixed_ccbs; int ucd_out_sec_pending_q; } ;
struct TYPE_14__ {int (* pL2CA_FixedCong_Cb ) (int ,void*) ;} ;
struct TYPE_11__ {int (* pL2CA_UCD_Congestion_Status_Cb ) (int ,void*) ;} ;
struct TYPE_12__ {TYPE_2__ cb_info; } ;
struct TYPE_10__ {int (* pL2CA_CongestionStatus_Cb ) (size_t,void*) ;} ;
struct TYPE_13__ {TYPE_3__ ucd; TYPE_1__ api; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,size_t,size_t,int) ;
 void* VAR_3 ;
 size_t FUNC_1 (int ) ;
 TYPE_9__ VAR_4 ;
 int FUNC_2 (size_t,void*) ;
 int FUNC_3 (int ,void*) ;
 int FUNC_4 (int ,void*) ;
 int FUNC_5 (size_t,void*) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int ,void*) ;

void FUNC_8 (tL2C_CCB *VAR_5)
{
    size_t VAR_6 = FUNC_1(VAR_5->xmit_hold_q);


    if ( VAR_5->local_cid == VAR_1 ) {
        VAR_6 += FUNC_1(VAR_5->p_lcb->ucd_out_sec_pending_q);
    }



    if (VAR_5->buff_quota != 0) {

        if ( VAR_5->cong_sent ) {

            if (VAR_6 <= (VAR_5->buff_quota / 2)) {
                VAR_5->cong_sent = VAR_0;
                if (VAR_5->p_rcb && VAR_5->p_rcb->api.pL2CA_CongestionStatus_Cb) {
                    FUNC_0 ("L2CAP - Calling CongestionStatus_Cb (FALSE), CID: 0x%04x  xmit_hold_q.count: %u  buff_quota: %u",
                                       VAR_5->local_cid, VAR_6, VAR_5->buff_quota);


                    VAR_4.is_cong_cback_context = VAR_3;
                    (*VAR_5->p_rcb->api.pL2CA_CongestionStatus_Cb)(VAR_5->local_cid, VAR_0);
                    VAR_4.is_cong_cback_context = VAR_0;
                }

                else if ( VAR_5->p_rcb && VAR_5->local_cid == VAR_1 ) {
                    if ( VAR_5->p_rcb->ucd.cb_info.pL2CA_UCD_Congestion_Status_Cb ) {
                        FUNC_0 ("L2CAP - Calling UCD CongestionStatus_Cb (FALSE), SecPendingQ:%u,XmitQ:%u,Quota:%u",
                                           FUNC_1(VAR_5->p_lcb->ucd_out_sec_pending_q),
                                           FUNC_1(VAR_5->xmit_hold_q),
                                           VAR_5->buff_quota);
                        VAR_5->p_rcb->ucd.cb_info.pL2CA_UCD_Congestion_Status_Cb( VAR_5->p_lcb->remote_bd_addr, VAR_0 );
                    }
                }
            }
        } else {

            if (VAR_6 > VAR_5->buff_quota) {
                VAR_5->cong_sent = VAR_3;
                if (VAR_5->p_rcb && VAR_5->p_rcb->api.pL2CA_CongestionStatus_Cb) {
                    FUNC_0 ("L2CAP - Calling CongestionStatus_Cb (TRUE),CID:0x%04x,XmitQ:%u,Quota:%u",
                                       VAR_5->local_cid, VAR_6, VAR_5->buff_quota);

                    (*VAR_5->p_rcb->api.pL2CA_CongestionStatus_Cb)(VAR_5->local_cid, VAR_3);
                }

                else if ( VAR_5->p_rcb && VAR_5->local_cid == VAR_1 ) {
                    if ( VAR_5->p_rcb->ucd.cb_info.pL2CA_UCD_Congestion_Status_Cb ) {
                        FUNC_0 ("L2CAP - Calling UCD CongestionStatus_Cb (TRUE), SecPendingQ:%u,XmitQ:%u,Quota:%u",
                                          FUNC_1(VAR_5->p_lcb->ucd_out_sec_pending_q),
                                          FUNC_1(VAR_5->xmit_hold_q),
                                          VAR_5->buff_quota);
                        VAR_5->p_rcb->ucd.cb_info.pL2CA_UCD_Congestion_Status_Cb( VAR_5->p_lcb->remote_bd_addr, VAR_3 );
                    }
                }
            }
        }
    }
}
