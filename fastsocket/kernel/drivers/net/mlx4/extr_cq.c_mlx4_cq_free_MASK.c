
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* eq; } ;
struct mlx4_cq_table {int lock; int tree; } ;
struct mlx4_priv {TYPE_2__ eq_table; struct mlx4_cq_table cq_table; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cq {size_t vector; int cqn; int free; int refcount; } ;
struct TYPE_3__ {int irq; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx4_dev*,int *,int ) ;
 int FUNC_3 (struct mlx4_dev*,int ) ;
 struct mlx4_priv* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,char*,int,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct mlx4_dev *VAR_0, struct mlx4_cq *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_4(VAR_0);
 struct mlx4_cq_table *VAR_3 = &VAR_2->cq_table;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0, ((void*)0), VAR_1->cqn);
 if (VAR_4)
  FUNC_5(VAR_0, "HW2SW_CQ failed (%d) for CQN %06x\n", VAR_4, VAR_1->cqn);

 FUNC_9(VAR_2->eq_table.eq[VAR_1->vector].irq);

 FUNC_7(&VAR_3->lock);
 FUNC_6(&VAR_3->tree, VAR_1->cqn);
 FUNC_8(&VAR_3->lock);

 if (FUNC_0(&VAR_1->refcount))
  FUNC_1(&VAR_1->free);
 FUNC_10(&VAR_1->free);

 FUNC_3(VAR_0, VAR_1->cqn);
}
