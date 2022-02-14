
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ max_sges; size_t head; } ;
struct ocrdma_qp {scalar_t__ state; int q_lock; TYPE_3__ sq; TYPE_2__* wqe_wr_id_tbl; } ;
struct ocrdma_hdr_wqe {int cw; int lkey; void* immdt; scalar_t__ total_len; } ;
struct TYPE_6__ {int invalidate_rkey; int imm_data; } ;
struct ib_send_wr {scalar_t__ num_sge; int send_flags; int opcode; struct ib_send_wr* next; int wr_id; TYPE_1__ ex; } ;
struct ib_qp {int dummy; } ;
struct TYPE_7__ {int signaled; int wrid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 struct ocrdma_qp* FUNC_0 (struct ib_qp*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ocrdma_qp*,struct ocrdma_hdr_wqe*,struct ib_send_wr*) ;
 int FUNC_3 (struct ocrdma_qp*,struct ocrdma_hdr_wqe*,struct ib_send_wr*) ;
 int FUNC_4 (struct ocrdma_qp*,struct ocrdma_hdr_wqe*,struct ib_send_wr*) ;
 int FUNC_5 (struct ocrdma_hdr_wqe*,int) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 struct ocrdma_hdr_wqe* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct ocrdma_qp*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 () ;

int FUNC_13(struct ib_qp *VAR_20, struct ib_send_wr *VAR_21,
       struct ib_send_wr **VAR_22)
{
 int VAR_23 = 0;
 struct ocrdma_qp *VAR_24 = FUNC_0(VAR_20);
 struct ocrdma_hdr_wqe *VAR_25;
 unsigned long VAR_26;

 FUNC_10(&VAR_24->q_lock, VAR_26);
 if (VAR_24->state != VAR_11 && VAR_24->state != VAR_12) {
  FUNC_11(&VAR_24->q_lock, VAR_26);
  *VAR_22 = VAR_21;
  return -VAR_0;
 }

 while (VAR_21) {
  if (FUNC_6(&VAR_24->sq) == 0 ||
      VAR_21->num_sge > VAR_24->sq.max_sges) {
   *VAR_22 = VAR_21;
   VAR_23 = -VAR_1;
   break;
  }
  VAR_25 = FUNC_7(&VAR_24->sq);
  VAR_25->cw = 0;
  if (VAR_21->send_flags & VAR_3)
   VAR_25->cw |= (VAR_8 << VAR_14);
  if (VAR_21->send_flags & VAR_2)
   VAR_25->cw |=
       (VAR_5 << VAR_14);
  if (VAR_21->send_flags & VAR_4)
   VAR_25->cw |=
       (VAR_9 << VAR_14);
  VAR_25->total_len = 0;
  switch (VAR_21->opcode) {
  case 129:
   VAR_25->cw |= (VAR_6 << VAR_14);
   VAR_25->immdt = FUNC_1(VAR_21->ex.imm_data);
  case 130:
   VAR_25->cw |= (VAR_13 << VAR_15);
   FUNC_3(VAR_24, VAR_25, VAR_21);
   break;
  case 128:
   VAR_25->cw |= (VAR_7 << VAR_14);
   VAR_25->cw |= (VAR_13 << VAR_15);
   VAR_25->lkey = VAR_21->ex.invalidate_rkey;
   VAR_23 = FUNC_3(VAR_24, VAR_25, VAR_21);
   break;
  case 131:
   VAR_25->cw |= (VAR_6 << VAR_14);
   VAR_25->immdt = FUNC_1(VAR_21->ex.imm_data);
  case 132:
   VAR_25->cw |= (VAR_19 << VAR_15);
   VAR_23 = FUNC_4(VAR_24, VAR_25, VAR_21);
   break;
  case 133:
   VAR_25->cw |= (VAR_7 << VAR_14);
  case 134:
   FUNC_2(VAR_24, VAR_25, VAR_21);
   break;
  case 135:
   VAR_25->cw |=
       (VAR_10 << VAR_15);
   VAR_25->cw |= (sizeof(struct ocrdma_hdr_wqe) /
    VAR_18) << VAR_17;
   VAR_25->lkey = VAR_21->ex.invalidate_rkey;
   break;
  default:
   VAR_23 = -VAR_0;
   break;
  }
  if (VAR_23) {
   *VAR_22 = VAR_21;
   break;
  }
  if (VAR_21->send_flags & VAR_3)
   VAR_24->wqe_wr_id_tbl[VAR_24->sq.head].signaled = 1;
  else
   VAR_24->wqe_wr_id_tbl[VAR_24->sq.head].signaled = 0;
  VAR_24->wqe_wr_id_tbl[VAR_24->sq.head].wrid = VAR_21->wr_id;
  FUNC_5(VAR_25, ((VAR_25->cw >> VAR_17) &
       VAR_16) * VAR_18);

  FUNC_12();

  FUNC_9(VAR_24);


  FUNC_8(&VAR_24->sq);
  VAR_21 = VAR_21->next;
 }
 FUNC_11(&VAR_24->q_lock, VAR_26);
 return VAR_23;
}
