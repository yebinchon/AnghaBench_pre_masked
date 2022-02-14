
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int srq; int recv_cq; int send_cq; int qp_context; int event_handler; } ;
struct TYPE_4__ {int rq_size; int sq_size; } ;
struct nes_qp {TYPE_2__ ibqp; TYPE_1__ hwqp; } ;
struct TYPE_6__ {int max_recv_sge; int max_inline_data; int max_recv_wr; int max_send_wr; } ;
struct ib_qp_init_attr {TYPE_3__ cap; int srq; int recv_cq; int send_cq; int qp_context; int event_handler; } ;
struct ib_qp_attr {TYPE_3__ cap; scalar_t__ qp_access_flags; } ;
struct ib_qp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 struct nes_qp* FUNC_1 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_2(struct ib_qp *VAR_3, struct ib_qp_attr *VAR_4,
  int VAR_5, struct ib_qp_init_attr *VAR_6)
{
 struct nes_qp *VAR_7 = FUNC_1(VAR_3);

 FUNC_0(VAR_0, "\n");

 VAR_4->qp_access_flags = 0;
 VAR_4->cap.max_send_wr = VAR_7->hwqp.sq_size;
 VAR_4->cap.max_recv_wr = VAR_7->hwqp.rq_size;
 VAR_4->cap.max_recv_sge = 1;
 if (VAR_2 & VAR_1)
  VAR_4->cap.max_inline_data = 0;
 else
  VAR_4->cap.max_inline_data = 64;

 VAR_6->event_handler = VAR_7->ibqp.event_handler;
 VAR_6->qp_context = VAR_7->ibqp.qp_context;
 VAR_6->send_cq = VAR_7->ibqp.send_cq;
 VAR_6->recv_cq = VAR_7->ibqp.recv_cq;
 VAR_6->srq = VAR_7->ibqp.srq = VAR_7->ibqp.srq;
 VAR_6->cap = VAR_4->cap;

 return 0;
}
