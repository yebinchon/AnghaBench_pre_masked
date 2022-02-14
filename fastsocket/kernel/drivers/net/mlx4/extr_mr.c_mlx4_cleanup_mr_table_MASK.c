
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_mr_table {int mpt_bitmap; int mtt_buddy; } ;
struct mlx4_priv {scalar_t__ reserved_mtts; struct mlx4_mr_table mr_table; } ;
struct TYPE_2__ {scalar_t__ reserved_mtts; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx4_dev*,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;

void FUNC_6(struct mlx4_dev *VAR_0)
{
 struct mlx4_priv *VAR_1 = FUNC_5(VAR_0);
 struct mlx4_mr_table *VAR_2 = &VAR_1->mr_table;

 if (FUNC_4(VAR_0))
  return;
 if (VAR_1->reserved_mtts >= 0)
  FUNC_3(VAR_0, VAR_1->reserved_mtts,
        FUNC_0(VAR_0->caps.reserved_mtts - 1));
 FUNC_2(&VAR_2->mtt_buddy);
 FUNC_1(&VAR_2->mpt_bitmap);
}
