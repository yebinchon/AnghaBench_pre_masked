
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ocrdma_dev {int eq_cnt; int dev_lock; TYPE_2__* qp_eq_tbl; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {int cq_cnt; TYPE_1__ q; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u16 FUNC_2(struct ocrdma_dev *VAR_0)
{
 int VAR_1, VAR_2 = 0, VAR_3 = 0;
 u16 VAR_4;

 FUNC_0(&VAR_0->dev_lock);
 VAR_3 = VAR_0->qp_eq_tbl[0].cq_cnt;
 VAR_4 = VAR_0->qp_eq_tbl[0].q.id;



 for (VAR_1 = 0; VAR_1 < VAR_0->eq_cnt; VAR_1++) {
  if (VAR_0->qp_eq_tbl[VAR_1].cq_cnt < VAR_3) {
   VAR_3 = VAR_0->qp_eq_tbl[VAR_1].cq_cnt;
   VAR_4 = VAR_0->qp_eq_tbl[VAR_1].q.id;
   VAR_2 = VAR_1;
  }
 }
 VAR_0->qp_eq_tbl[VAR_2].cq_cnt += 1;
 FUNC_1(&VAR_0->dev_lock);
 return VAR_4;
}
