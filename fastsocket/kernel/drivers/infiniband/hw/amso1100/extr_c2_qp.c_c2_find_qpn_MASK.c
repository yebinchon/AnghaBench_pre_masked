
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct c2_qp {int dummy; } ;
struct TYPE_2__ {int lock; int idr; } ;
struct c2_dev {TYPE_1__ qp_table; } ;


 struct c2_qp* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct c2_qp *FUNC_3(struct c2_dev *VAR_0, int VAR_1)
{
 unsigned long VAR_2;
 struct c2_qp *VAR_3;

 FUNC_1(&VAR_0->qp_table.lock, VAR_2);
 VAR_3 = FUNC_0(&VAR_0->qp_table.idr, VAR_1);
 FUNC_2(&VAR_0->qp_table.lock, VAR_2);
 return VAR_3;
}
