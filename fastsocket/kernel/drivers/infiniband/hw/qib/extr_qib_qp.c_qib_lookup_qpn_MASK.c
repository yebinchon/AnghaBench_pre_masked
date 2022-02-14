
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int qp_num; } ;
struct qib_qp {int refcount; TYPE_2__ ibqp; int next; } ;
struct qib_ibport {int qp1; int qp0; } ;
struct qib_ibdev {int * qp_table; } ;
struct TYPE_6__ {TYPE_1__* dd; } ;
struct TYPE_4__ {struct qib_ibdev verbs_dev; } ;


 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (struct qib_ibport*) ;
 unsigned int FUNC_2 (struct qib_ibdev*,int) ;
 struct qib_qp* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

struct qib_qp *FUNC_7(struct qib_ibport *VAR_0, u32 VAR_1)
{
 struct qib_qp *VAR_2 = ((void*)0);

 if (FUNC_6(VAR_1 <= 1)) {
  FUNC_4();
  if (VAR_1 == 0)
   VAR_2 = FUNC_3(VAR_0->qp0);
  else
   VAR_2 = FUNC_3(VAR_0->qp1);
 } else {
  struct qib_ibdev *VAR_3 = &FUNC_1(VAR_0)->dd->verbs_dev;
  unsigned VAR_4 = FUNC_2(VAR_3, VAR_1);

  FUNC_4();
  for (VAR_2 = FUNC_3(VAR_3->qp_table[VAR_4]); VAR_2;
   VAR_2 = FUNC_3(VAR_2->next))
   if (VAR_2->ibqp.qp_num == VAR_1)
    break;
 }
 if (VAR_2)
  if (FUNC_6(!FUNC_0(&VAR_2->refcount)))
   VAR_2 = ((void*)0);

 FUNC_5();
 return VAR_2;
}
