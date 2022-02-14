
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ next_seq_expected; scalar_t__ last_ack_sent; scalar_t__ local_busy; int xmit_ack_touts; int wait_ack; } ;
struct TYPE_6__ {scalar_t__ chnl_state; TYPE_1__ fcrb; int local_cid; } ;
typedef TYPE_2__ tL2C_CCB ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

void FUNC_3 (tL2C_CCB *VAR_3)
{
    FUNC_1(VAR_3 != ((void*)0));
    FUNC_0 ("l2c_fcr_proc_ack_tout:  CID: 0x%04x State: %u  Wack:%u  Rq:%d  Acked:%d", VAR_3->local_cid,
                       VAR_3->chnl_state, VAR_3->fcrb.wait_ack, VAR_3->fcrb.next_seq_expected, VAR_3->fcrb.last_ack_sent);

    if ( (VAR_3->chnl_state == VAR_0) && (!VAR_3->fcrb.wait_ack)
            && (VAR_3->fcrb.last_ack_sent != VAR_3->fcrb.next_seq_expected) ) {

        VAR_3->fcrb.xmit_ack_touts++;

        if (VAR_3->fcrb.local_busy) {
            FUNC_2 (VAR_3, VAR_1, 0);
        } else {
            FUNC_2 (VAR_3, VAR_2, 0);
        }
    }
}
