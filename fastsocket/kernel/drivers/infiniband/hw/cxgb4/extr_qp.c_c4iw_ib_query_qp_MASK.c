
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_qp_init_attr {int qp_state; } ;
struct ib_qp_attr {int qp_state; } ;
struct ib_qp {int dummy; } ;
struct TYPE_2__ {int state; } ;
struct c4iw_qp {TYPE_1__ attr; } ;


 int FUNC_0 (struct ib_qp_init_attr*,int ,int) ;
 struct c4iw_qp* FUNC_1 (struct ib_qp*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct ib_qp *VAR_0, struct ib_qp_attr *VAR_1,
       int VAR_2, struct ib_qp_init_attr *VAR_3)
{
 struct c4iw_qp *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, 0, sizeof *VAR_1);
 FUNC_0(VAR_3, 0, sizeof *VAR_3);
 VAR_1->qp_state = FUNC_2(VAR_4->attr.state);
 return 0;
}
