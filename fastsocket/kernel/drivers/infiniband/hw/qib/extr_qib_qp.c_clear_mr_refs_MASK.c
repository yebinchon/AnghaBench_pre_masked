
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ah; } ;
struct TYPE_8__ {TYPE_1__ ud; } ;
struct TYPE_9__ {unsigned int num_sge; TYPE_2__ wr; } ;
struct qib_swqe {TYPE_3__ wr; struct qib_sge* sg_list; } ;
struct qib_sge {int * mr; } ;
struct TYPE_10__ {scalar_t__ qp_type; } ;
struct qib_qp {scalar_t__ s_last; scalar_t__ s_head; scalar_t__ s_size; struct qib_ack_entry* s_ack_queue; TYPE_4__ ibqp; int * s_rdma_mr; int r_sge; int s_rdma_read_sge; int r_aflags; } ;
struct TYPE_11__ {int * mr; } ;
struct qib_ack_entry {scalar_t__ opcode; TYPE_5__ rdma_sge; } ;
struct TYPE_12__ {int refcount; } ;


 unsigned int FUNC_0 (struct qib_ack_entry*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 struct qib_swqe* FUNC_2 (struct qib_qp*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 TYPE_6__* FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct qib_qp *VAR_6, int VAR_7)
{
 unsigned VAR_8;

 if (FUNC_5(VAR_5, &VAR_6->r_aflags))
  FUNC_4(&VAR_6->s_rdma_read_sge);

 FUNC_4(&VAR_6->r_sge);

 if (VAR_7) {
  while (VAR_6->s_last != VAR_6->s_head) {
   struct qib_swqe *VAR_9 = FUNC_2(VAR_6, VAR_6->s_last);
   unsigned VAR_10;

   for (VAR_10 = 0; VAR_10 < VAR_9->wr.num_sge; VAR_10++) {
    struct qib_sge *VAR_11 = &VAR_9->sg_list[VAR_10];

    FUNC_3(VAR_11->mr);
   }
   if (VAR_6->ibqp.qp_type == VAR_4 ||
       VAR_6->ibqp.qp_type == VAR_3 ||
       VAR_6->ibqp.qp_type == VAR_1)
    FUNC_1(&FUNC_6(VAR_9->wr.wr.ud.ah)->refcount);
   if (++VAR_6->s_last >= VAR_6->s_size)
    VAR_6->s_last = 0;
  }
  if (VAR_6->s_rdma_mr) {
   FUNC_3(VAR_6->s_rdma_mr);
   VAR_6->s_rdma_mr = ((void*)0);
  }
 }

 if (VAR_6->ibqp.qp_type != VAR_2)
  return;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->s_ack_queue); VAR_8++) {
  struct qib_ack_entry *VAR_12 = &VAR_6->s_ack_queue[VAR_8];

  if (VAR_12->opcode == VAR_0 &&
      VAR_12->rdma_sge.mr) {
   FUNC_3(VAR_12->rdma_sge.mr);
   VAR_12->rdma_sge.mr = ((void*)0);
  }
 }
}
