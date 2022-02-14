
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int qp_num; int device; } ;
struct qib_qp {int next; TYPE_1__ ibqp; int refcount; int port_num; } ;
struct qib_ibport {int qp1; int qp0; } ;
struct qib_ibdev {int qpt_lock; int * qp_table; } ;


 int FUNC_0 (int *) ;
 unsigned int FUNC_1 (struct qib_ibdev*,int) ;
 int FUNC_2 (int ,struct qib_qp*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;
 struct qib_ibport* FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct qib_ibdev *VAR_0, struct qib_qp *VAR_1)
{
 struct qib_ibport *VAR_2 = FUNC_6(VAR_1->ibqp.device, VAR_1->port_num);
 unsigned long VAR_3;
 unsigned VAR_4 = FUNC_1(VAR_0, VAR_1->ibqp.qp_num);

 FUNC_3(&VAR_0->qpt_lock, VAR_3);
 FUNC_0(&VAR_1->refcount);

 if (VAR_1->ibqp.qp_num == 0)
  FUNC_2(VAR_2->qp0, VAR_1);
 else if (VAR_1->ibqp.qp_num == 1)
  FUNC_2(VAR_2->qp1, VAR_1);
 else {
  VAR_1->next = VAR_0->qp_table[VAR_4];
  FUNC_2(VAR_0->qp_table[VAR_4], VAR_1);
 }

 FUNC_4(&VAR_0->qpt_lock, VAR_3);
 FUNC_5();
}
