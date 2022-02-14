
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* wq; } ;
struct ipath_qp {int s_ssn; TYPE_2__ r_rq; scalar_t__ s_num_rd_atomic; scalar_t__ s_tail_ack_queue; scalar_t__ r_head_ack_queue; int s_ack_queue; scalar_t__ s_lsn; scalar_t__ s_last; scalar_t__ s_cur; scalar_t__ s_tail; scalar_t__ s_head; scalar_t__ s_rnr_timeout; scalar_t__ r_flags; scalar_t__ r_aflags; scalar_t__ r_nak_state; int s_ack_state; void* r_state; void* s_state; scalar_t__ r_msn; scalar_t__ r_psn; scalar_t__ s_psn; scalar_t__ s_draining; scalar_t__ s_pkt_delay; int * s_wqe; scalar_t__ s_hdrwords; int s_flags; int s_dma_busy; scalar_t__ qp_access_flags; scalar_t__ qkey; scalar_t__ remote_qpn; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_3__ {scalar_t__ tail; scalar_t__ head; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ipath_qp *VAR_5, enum ib_qp_type VAR_6)
{
 VAR_5->remote_qpn = 0;
 VAR_5->qkey = 0;
 VAR_5->qp_access_flags = 0;
 FUNC_0(&VAR_5->s_dma_busy, 0);
 VAR_5->s_flags &= VAR_4;
 VAR_5->s_hdrwords = 0;
 VAR_5->s_wqe = ((void*)0);
 VAR_5->s_pkt_delay = 0;
 VAR_5->s_draining = 0;
 VAR_5->s_psn = 0;
 VAR_5->r_psn = 0;
 VAR_5->r_msn = 0;
 if (VAR_6 == VAR_3) {
  VAR_5->s_state = VAR_1;
  VAR_5->r_state = VAR_1;
 } else {
  VAR_5->s_state = VAR_2;
  VAR_5->r_state = VAR_2;
 }
 VAR_5->s_ack_state = VAR_0;
 VAR_5->r_nak_state = 0;
 VAR_5->r_aflags = 0;
 VAR_5->r_flags = 0;
 VAR_5->s_rnr_timeout = 0;
 VAR_5->s_head = 0;
 VAR_5->s_tail = 0;
 VAR_5->s_cur = 0;
 VAR_5->s_last = 0;
 VAR_5->s_ssn = 1;
 VAR_5->s_lsn = 0;
 FUNC_1(VAR_5->s_ack_queue, 0, sizeof(VAR_5->s_ack_queue));
 VAR_5->r_head_ack_queue = 0;
 VAR_5->s_tail_ack_queue = 0;
 VAR_5->s_num_rd_atomic = 0;
 if (VAR_5->r_rq.wq) {
  VAR_5->r_rq.wq->head = 0;
  VAR_5->r_rq.wq->tail = 0;
 }
}
