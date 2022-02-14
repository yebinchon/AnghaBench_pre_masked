
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct ehca_qp {scalar_t__ ext_type; struct list_head rq_err_node; TYPE_2__* recv_cq; struct list_head sq_err_node; TYPE_1__* send_cq; } ;
struct TYPE_4__ {struct list_head rqp_err_list; } ;
struct TYPE_3__ {struct list_head sqp_err_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct list_head*,struct list_head*) ;
 scalar_t__ FUNC_1 (struct list_head*) ;

void FUNC_2(struct ehca_qp *VAR_1, int VAR_2)
{
 struct list_head *VAR_3, *VAR_4;


 if (VAR_1->ext_type == VAR_0)
  return;

 if (VAR_2) {
  VAR_3 = &VAR_1->send_cq->sqp_err_list;
  VAR_4 = &VAR_1->sq_err_node;
 } else {
  VAR_3 = &VAR_1->recv_cq->rqp_err_list;
  VAR_4 = &VAR_1->rq_err_node;
 }

 if (FUNC_1(VAR_4))
  FUNC_0(VAR_4, VAR_3);

 return;
}
