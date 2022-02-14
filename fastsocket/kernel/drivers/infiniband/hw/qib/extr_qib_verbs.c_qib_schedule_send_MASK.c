
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct qib_qp {int s_work; int port_num; TYPE_1__ ibqp; } ;
struct qib_pportdata {int qib_wq; } ;
struct qib_ibport {int dummy; } ;


 struct qib_pportdata* FUNC_0 (struct qib_ibport*) ;
 scalar_t__ FUNC_1 (struct qib_qp*) ;
 int FUNC_2 (int ,int *) ;
 struct qib_ibport* FUNC_3 (int ,int ) ;

void FUNC_4(struct qib_qp *VAR_0)
{
 if (FUNC_1(VAR_0)) {
  struct qib_ibport *VAR_1 =
   FUNC_3(VAR_0->ibqp.device, VAR_0->port_num);
  struct qib_pportdata *VAR_2 = FUNC_0(VAR_1);

  FUNC_2(VAR_2->qib_wq, &VAR_0->s_work);
 }
}
