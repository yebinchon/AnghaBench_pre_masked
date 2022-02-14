
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_srq {int usecnt; } ;
struct ib_qp {TYPE_1__* device; struct ib_srq* srq; struct ib_cq* recv_cq; struct ib_cq* send_cq; struct ib_pd* pd; struct ib_qp* real_qp; int usecnt; } ;
struct ib_pd {int usecnt; } ;
struct ib_cq {int usecnt; } ;
struct TYPE_2__ {int (* destroy_qp ) (struct ib_qp*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ib_qp*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ib_qp*) ;

int FUNC_4(struct ib_qp *VAR_1)
{
 struct ib_pd *VAR_2;
 struct ib_cq *VAR_3, *VAR_4;
 struct ib_srq *VAR_5;
 int VAR_6;

 if (FUNC_2(&VAR_1->usecnt))
  return -VAR_0;

 if (VAR_1->real_qp != VAR_1)
  return FUNC_0(VAR_1);

 VAR_2 = VAR_1->pd;
 VAR_3 = VAR_1->send_cq;
 VAR_4 = VAR_1->recv_cq;
 VAR_5 = VAR_1->srq;

 VAR_6 = VAR_1->device->destroy_qp(VAR_1);
 if (!VAR_6) {
  if (VAR_2)
   FUNC_1(&VAR_2->usecnt);
  if (VAR_3)
   FUNC_1(&VAR_3->usecnt);
  if (VAR_4)
   FUNC_1(&VAR_4->usecnt);
  if (VAR_5)
   FUNC_1(&VAR_5->usecnt);
 }

 return VAR_6;
}
