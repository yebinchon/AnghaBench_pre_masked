
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {size_t tail; } ;
struct TYPE_7__ {scalar_t__ srq; } ;
struct ocrdma_qp {scalar_t__ qp_type; TYPE_4__ rq; int * rqe_wr_id_tbl; TYPE_3__ ibqp; } ;
struct TYPE_6__ {int lkey_immdt; int rxlen; } ;
struct ocrdma_cqe {TYPE_2__ rq; } ;
struct TYPE_5__ {void* invalidate_rkey; void* imm_data; } ;
struct ib_wc {int wr_id; int wc_flags; TYPE_1__ ex; int opcode; void* byte_len; int status; TYPE_3__* qp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (struct ocrdma_cqe*) ;
 scalar_t__ FUNC_2 (struct ocrdma_cqe*) ;
 scalar_t__ FUNC_3 (struct ocrdma_cqe*) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (struct ib_wc*,struct ocrdma_cqe*,struct ocrdma_qp*) ;
 int FUNC_7 (struct ib_wc*,struct ocrdma_cqe*) ;

__attribute__((used)) static void FUNC_8(struct ocrdma_qp *VAR_7,
         struct ocrdma_cqe *VAR_8, struct ib_wc *VAR_9)
{
 VAR_9->opcode = VAR_2;
 VAR_9->qp = &VAR_7->ibqp;
 VAR_9->status = VAR_4;

 if (VAR_7->qp_type == VAR_1 || VAR_7->qp_type == VAR_0)
  FUNC_7(VAR_9, VAR_8);
 else
  VAR_9->byte_len = FUNC_4(VAR_8->rq.rxlen);

 if (FUNC_1(VAR_8)) {
  VAR_9->ex.imm_data = FUNC_0(FUNC_4(VAR_8->rq.lkey_immdt));
  VAR_9->wc_flags |= VAR_5;
 } else if (FUNC_3(VAR_8)) {
  VAR_9->opcode = VAR_3;
  VAR_9->ex.imm_data = FUNC_0(FUNC_4(VAR_8->rq.lkey_immdt));
  VAR_9->wc_flags |= VAR_5;
 } else if (FUNC_2(VAR_8)) {
  VAR_9->ex.invalidate_rkey = FUNC_4(VAR_8->rq.lkey_immdt);
  VAR_9->wc_flags |= VAR_6;
 }
 if (VAR_7->ibqp.srq)
  FUNC_6(VAR_9, VAR_8, VAR_7);
 else {
  VAR_9->wr_id = VAR_7->rqe_wr_id_tbl[VAR_7->rq.tail];
  FUNC_5(&VAR_7->rq);
 }
}
