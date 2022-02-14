
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ uobject; } ;
struct TYPE_5__ {int scq; int rcq; } ;
struct iwch_qp {int wq; TYPE_2__ ibqp; TYPE_1__ attr; int rhp; } ;
struct TYPE_7__ {int cq_context; int (* comp_handler ) (TYPE_3__*,int ) ;} ;
struct iwch_cq {int comp_handler_lock; TYPE_3__ ibcq; int cq; } ;


 int FUNC_0 (struct iwch_qp*,struct iwch_cq*,struct iwch_cq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct iwch_cq* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;

__attribute__((used)) static void FUNC_8(struct iwch_qp *VAR_0)
{
 struct iwch_cq *VAR_1, *VAR_2;

 VAR_1 = FUNC_3(VAR_0->rhp, VAR_0->attr.rcq);
 VAR_2 = FUNC_3(VAR_0->rhp, VAR_0->attr.scq);

 if (VAR_0->ibqp.uobject) {
  FUNC_2(&VAR_0->wq);
  FUNC_1(&VAR_1->cq);
  FUNC_4(&VAR_1->comp_handler_lock);
  (*VAR_1->ibcq.comp_handler)(&VAR_1->ibcq, VAR_1->ibcq.cq_context);
  FUNC_5(&VAR_1->comp_handler_lock);
  if (VAR_2 != VAR_1) {
   FUNC_1(&VAR_2->cq);
   FUNC_4(&VAR_2->comp_handler_lock);
   (*VAR_2->ibcq.comp_handler)(&VAR_2->ibcq,
         VAR_2->ibcq.cq_context);
   FUNC_5(&VAR_2->comp_handler_lock);
  }
  return;
 }
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
