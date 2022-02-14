
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ uobject; } ;
struct TYPE_5__ {int scq; int rcq; } ;
struct c4iw_qp {int wq; TYPE_2__ ibqp; TYPE_1__ attr; int rhp; } ;
struct TYPE_7__ {int cq_context; int (* comp_handler ) (TYPE_3__*,int ) ;} ;
struct c4iw_cq {int comp_handler_lock; TYPE_3__ ibcq; int cq; } ;


 int FUNC_0 (struct c4iw_qp*,struct c4iw_cq*,struct c4iw_cq*) ;
 struct c4iw_cq* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct c4iw_qp *VAR_0)
{
 struct c4iw_cq *VAR_1, *VAR_2;
 unsigned long VAR_3;

 VAR_1 = FUNC_1(VAR_0->rhp, VAR_0->attr.rcq);
 VAR_2 = FUNC_1(VAR_0->rhp, VAR_0->attr.scq);

 if (VAR_0->ibqp.uobject) {
  FUNC_7(&VAR_0->wq);
  FUNC_6(&VAR_1->cq);
  FUNC_2(&VAR_1->comp_handler_lock, VAR_3);
  (*VAR_1->ibcq.comp_handler)(&VAR_1->ibcq, VAR_1->ibcq.cq_context);
  FUNC_3(&VAR_1->comp_handler_lock, VAR_3);
  if (VAR_2 != VAR_1) {
   FUNC_6(&VAR_2->cq);
   FUNC_2(&VAR_2->comp_handler_lock, VAR_3);
   (*VAR_2->ibcq.comp_handler)(&VAR_2->ibcq,
     VAR_2->ibcq.cq_context);
   FUNC_3(&VAR_2->comp_handler_lock, VAR_3);
  }
  return;
 }
 FUNC_0(VAR_0, VAR_1, VAR_2);
}
