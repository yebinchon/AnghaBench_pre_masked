
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ocrdma_dev {int eq_cnt; int dev_lock; TYPE_2__* qp_eq_tbl; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct TYPE_4__ {int cq_cnt; TYPE_1__ q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_dev *VAR_0, u16 VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->dev_lock);
 for (VAR_2 = 0; VAR_2 < VAR_0->eq_cnt; VAR_2++) {
  if (VAR_0->qp_eq_tbl[VAR_2].q.id != VAR_1)
   continue;
  VAR_0->qp_eq_tbl[VAR_2].cq_cnt -= 1;
  break;
 }
 FUNC_1(&VAR_0->dev_lock);
}
