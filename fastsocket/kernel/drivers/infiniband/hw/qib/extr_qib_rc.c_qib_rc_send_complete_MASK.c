
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {unsigned int num_sge; int send_flags; size_t opcode; int wr_id; } ;
struct qib_swqe {int length; TYPE_3__ wr; struct qib_sge* sg_list; scalar_t__ lpsn; } ;
struct qib_sge {int mr; } ;
struct TYPE_8__ {int send_cq; } ;
struct qib_qp {size_t state; scalar_t__ s_acked; scalar_t__ s_tail; int s_flags; scalar_t__ s_last; scalar_t__ s_size; scalar_t__ s_psn; scalar_t__ s_sending_hpsn; scalar_t__ s_sending_psn; TYPE_4__ ibqp; int s_rdma_ack_cnt; } ;
struct qib_other_headers {int * bth; } ;
struct TYPE_5__ {struct qib_other_headers oth; } ;
struct TYPE_6__ {TYPE_1__ l; struct qib_other_headers oth; } ;
struct qib_ib_header {TYPE_2__ u; int * lrh; } ;
struct ib_wc {TYPE_4__* qp; int byte_len; int opcode; int status; int wr_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct qib_swqe* FUNC_4 (struct qib_qp*,scalar_t__) ;
 int* VAR_12 ;
 int * VAR_13 ;
 int FUNC_5 (struct ib_wc*,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,struct ib_wc*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct qib_qp*) ;
 int FUNC_10 (struct qib_qp*,int) ;
 int FUNC_11 (struct qib_qp*) ;
 int FUNC_12 (int ) ;

void FUNC_13(struct qib_qp *VAR_14, struct qib_ib_header *VAR_15)
{
 struct qib_other_headers *VAR_16;
 struct qib_swqe *VAR_17;
 struct ib_wc VAR_18;
 unsigned VAR_19;
 u32 VAR_20;
 u32 VAR_21;

 if (!(VAR_12[VAR_14->state] & VAR_5))
  return;


 if ((FUNC_2(VAR_15->lrh[0]) & 3) == VAR_4)
  VAR_16 = &VAR_15->u.oth;
 else
  VAR_16 = &VAR_15->u.l.oth;

 VAR_20 = FUNC_3(VAR_16->bth[0]) >> 24;
 if (VAR_20 >= FUNC_0(VAR_11) &&
     VAR_20 <= FUNC_0(VAR_0)) {
  FUNC_1(!VAR_14->s_rdma_ack_cnt);
  VAR_14->s_rdma_ack_cnt--;
  return;
 }

 VAR_21 = FUNC_3(VAR_16->bth[2]);
 FUNC_10(VAR_14, VAR_21);





 if ((VAR_21 & VAR_1) && VAR_14->s_acked != VAR_14->s_tail &&
     !(VAR_14->s_flags & (VAR_8 | VAR_10 | VAR_9)) &&
     (VAR_12[VAR_14->state] & VAR_6))
  FUNC_11(VAR_14);

 while (VAR_14->s_last != VAR_14->s_acked) {
  VAR_17 = FUNC_4(VAR_14, VAR_14->s_last);
  if (FUNC_6(VAR_17->lpsn, VAR_14->s_sending_psn) >= 0 &&
      FUNC_6(VAR_14->s_sending_psn, VAR_14->s_sending_hpsn) <= 0)
   break;
  for (VAR_19 = 0; VAR_19 < VAR_17->wr.num_sge; VAR_19++) {
   struct qib_sge *VAR_22 = &VAR_17->sg_list[VAR_19];

   FUNC_8(VAR_22->mr);
  }

  if (!(VAR_14->s_flags & VAR_7) ||
      (VAR_17->wr.send_flags & VAR_2)) {
   FUNC_5(&VAR_18, 0, sizeof VAR_18);
   VAR_18.wr_id = VAR_17->wr.wr_id;
   VAR_18.status = VAR_3;
   VAR_18.opcode = VAR_13[VAR_17->wr.opcode];
   VAR_18.byte_len = VAR_17->length;
   VAR_18.qp = &VAR_14->ibqp;
   FUNC_7(FUNC_12(VAR_14->ibqp.send_cq), &VAR_18, 0);
  }
  if (++VAR_14->s_last >= VAR_14->s_size)
   VAR_14->s_last = 0;
 }




 if (VAR_14->s_flags & VAR_9 &&
     FUNC_6(VAR_14->s_sending_psn, VAR_14->s_sending_hpsn) > 0) {
  VAR_14->s_flags &= ~VAR_9;
  VAR_14->s_sending_psn = VAR_14->s_psn;
  VAR_14->s_sending_hpsn = VAR_14->s_psn - 1;
  FUNC_9(VAR_14);
 }
}
