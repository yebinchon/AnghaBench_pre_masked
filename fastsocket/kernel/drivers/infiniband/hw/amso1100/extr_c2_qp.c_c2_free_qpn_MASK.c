
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int idr; } ;
struct c2_dev {TYPE_1__ qp_table; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct c2_dev *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->qp_table.lock);
 FUNC_0(&VAR_0->qp_table.idr, VAR_1);
 FUNC_2(&VAR_0->qp_table.lock);
}
