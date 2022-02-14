
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int num_cqs; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cq_table {int lock; int tree; } ;
struct mlx4_cq {int free; int refcount; int (* event ) (struct mlx4_cq*,int) ;} ;
struct TYPE_4__ {struct mlx4_cq_table cq_table; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,char*,int) ;
 struct mlx4_cq* FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mlx4_cq*,int) ;

void FUNC_9(struct mlx4_dev *VAR_0, u32 VAR_1, int VAR_2)
{
 struct mlx4_cq_table *VAR_3 = &FUNC_3(VAR_0)->cq_table;
 struct mlx4_cq *VAR_4;

 FUNC_6(&VAR_3->lock);

 VAR_4 = FUNC_5(&VAR_3->tree, VAR_1 & (VAR_0->caps.num_cqs - 1));
 if (VAR_4)
  FUNC_1(&VAR_4->refcount);

 FUNC_7(&VAR_3->lock);

 if (!VAR_4) {
  FUNC_4(VAR_0, "Async event for bogus CQ %08x\n", VAR_1);
  return;
 }

 VAR_4->event(VAR_4, VAR_2);

 if (FUNC_0(&VAR_4->refcount))
  FUNC_2(&VAR_4->free);
}
