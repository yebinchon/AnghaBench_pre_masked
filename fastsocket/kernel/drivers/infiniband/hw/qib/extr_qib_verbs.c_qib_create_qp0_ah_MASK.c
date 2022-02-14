
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int pd; } ;
struct qib_qp {TYPE_1__ ibqp; } ;
struct qib_ibport {int qp0; } ;
struct ib_ah_attr {int port_num; int dlid; } ;
struct ib_ah {int dummy; } ;
struct TYPE_4__ {int port; } ;


 int VAR_0 ;
 struct ib_ah* FUNC_0 (int ) ;
 struct ib_ah* FUNC_1 (int ,struct ib_ah_attr*) ;
 int FUNC_2 (struct ib_ah_attr*,int ,int) ;
 TYPE_2__* FUNC_3 (struct qib_ibport*) ;
 struct qib_qp* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

struct ib_ah *FUNC_7(struct qib_ibport *VAR_1, u16 VAR_2)
{
 struct ib_ah_attr VAR_3;
 struct ib_ah *VAR_4 = FUNC_0(-VAR_0);
 struct qib_qp *VAR_5;

 FUNC_2(&VAR_3, 0, sizeof VAR_3);
 VAR_3.dlid = VAR_2;
 VAR_3.port_num = FUNC_3(VAR_1)->port;
 FUNC_5();
 VAR_5 = FUNC_4(VAR_1->qp0);
 if (VAR_5)
  VAR_4 = FUNC_1(VAR_5->ibqp.pd, &VAR_3);
 FUNC_6();
 return VAR_4;
}
