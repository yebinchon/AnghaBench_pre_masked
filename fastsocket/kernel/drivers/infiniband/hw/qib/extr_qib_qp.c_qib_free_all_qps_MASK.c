
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_qp {int next; } ;
struct qib_ibport {int qp1; int qp0; } ;
struct qib_ibdev {unsigned int qp_table_size; int qpt_lock; int * qp_table; } ;
struct qib_devdata {unsigned int num_pports; TYPE_1__* pport; struct qib_ibdev verbs_dev; } ;
struct TYPE_2__ {struct qib_ibport ibport_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct qib_ibport*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 struct qib_qp* FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 () ;

unsigned FUNC_10(struct qib_devdata *VAR_0)
{
 struct qib_ibdev *VAR_1 = &VAR_0->verbs_dev;
 unsigned long VAR_2;
 struct qib_qp *VAR_3;
 unsigned VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_pports; VAR_4++) {
  struct qib_ibport *VAR_6 = &VAR_0->pport[VAR_4].ibport_data;

  if (!FUNC_1(VAR_6))
   VAR_5++;
  FUNC_5();
  if (FUNC_3(VAR_6->qp0))
   VAR_5++;
  if (FUNC_3(VAR_6->qp1))
   VAR_5++;
  FUNC_6();
 }

 FUNC_7(&VAR_1->qpt_lock, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_1->qp_table_size; VAR_4++) {
  VAR_3 = FUNC_4(VAR_1->qp_table[VAR_4],
   FUNC_0(&VAR_1->qpt_lock));
  FUNC_2(VAR_1->qp_table[VAR_4], ((void*)0));

  for (; VAR_3; VAR_3 = FUNC_4(VAR_3->next,
     FUNC_0(&VAR_1->qpt_lock)))
   VAR_5++;
 }
 FUNC_8(&VAR_1->qpt_lock, VAR_2);
 FUNC_9();

 return VAR_5;
}
