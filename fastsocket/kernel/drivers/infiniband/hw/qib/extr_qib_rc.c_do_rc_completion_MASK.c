
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int num_sge; int send_flags; size_t opcode; int wr_id; } ;
struct qib_swqe {int psn; int lpsn; int length; TYPE_1__ wr; struct qib_sge* sg_list; } ;
struct qib_sge {int mr; } ;
struct TYPE_4__ {int send_cq; } ;
struct qib_qp {int s_flags; scalar_t__ s_last; scalar_t__ s_size; scalar_t__ s_acked; scalar_t__ s_cur; scalar_t__ s_tail; scalar_t__ state; scalar_t__ s_draining; int s_psn; int s_state; int s_retry_cnt; int s_retry; TYPE_2__ ibqp; int s_sending_hpsn; int s_sending_psn; } ;
struct qib_ibport {int n_rc_delayed_comp; } ;
struct ib_wc {TYPE_2__* qp; int byte_len; int opcode; int status; int wr_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct qib_swqe* FUNC_1 (struct qib_qp*,scalar_t__) ;
 int * VAR_5 ;
 int FUNC_2 (struct ib_wc*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct ib_wc*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct qib_qp*,int ) ;

__attribute__((used)) static struct qib_swqe *FUNC_8(struct qib_qp *VAR_6,
      struct qib_swqe *VAR_7,
      struct qib_ibport *VAR_8)
{
 struct ib_wc VAR_9;
 unsigned VAR_10;






 if (FUNC_3(VAR_7->lpsn, VAR_6->s_sending_psn) < 0 ||
     FUNC_3(VAR_6->s_sending_psn, VAR_6->s_sending_hpsn) > 0) {
  for (VAR_10 = 0; VAR_10 < VAR_7->wr.num_sge; VAR_10++) {
   struct qib_sge *VAR_11 = &VAR_7->sg_list[VAR_10];

   FUNC_5(VAR_11->mr);
  }

  if (!(VAR_6->s_flags & VAR_3) ||
      (VAR_7->wr.send_flags & VAR_1)) {
   FUNC_2(&VAR_9, 0, sizeof VAR_9);
   VAR_9.wr_id = VAR_7->wr.wr_id;
   VAR_9.status = VAR_2;
   VAR_9.opcode = VAR_5[VAR_7->wr.opcode];
   VAR_9.byte_len = VAR_7->length;
   VAR_9.qp = &VAR_6->ibqp;
   FUNC_4(FUNC_6(VAR_6->ibqp.send_cq), &VAR_9, 0);
  }
  if (++VAR_6->s_last >= VAR_6->s_size)
   VAR_6->s_last = 0;
 } else
  VAR_8->n_rc_delayed_comp++;

 VAR_6->s_retry = VAR_6->s_retry_cnt;
 FUNC_7(VAR_6, VAR_7->lpsn);






 if (VAR_6->s_acked == VAR_6->s_cur) {
  if (++VAR_6->s_cur >= VAR_6->s_size)
   VAR_6->s_cur = 0;
  VAR_6->s_acked = VAR_6->s_cur;
  VAR_7 = FUNC_1(VAR_6, VAR_6->s_cur);
  if (VAR_6->s_acked != VAR_6->s_tail) {
   VAR_6->s_state = FUNC_0(VAR_4);
   VAR_6->s_psn = VAR_7->psn;
  }
 } else {
  if (++VAR_6->s_acked >= VAR_6->s_size)
   VAR_6->s_acked = 0;
  if (VAR_6->state == VAR_0 && VAR_6->s_acked == VAR_6->s_cur)
   VAR_6->s_draining = 0;
  VAR_7 = FUNC_1(VAR_6, VAR_6->s_acked);
 }
 return VAR_7;
}
