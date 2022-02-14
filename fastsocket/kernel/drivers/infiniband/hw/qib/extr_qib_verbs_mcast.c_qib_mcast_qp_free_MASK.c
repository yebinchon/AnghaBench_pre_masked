
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_qp {int wait; int refcount; } ;
struct qib_mcast_qp {struct qib_qp* qp; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct qib_mcast_qp*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct qib_mcast_qp *VAR_0)
{
 struct qib_qp *VAR_1 = VAR_0->qp;


 if (FUNC_0(&VAR_1->refcount))
  FUNC_2(&VAR_1->wait);

 FUNC_1(VAR_0);
}
