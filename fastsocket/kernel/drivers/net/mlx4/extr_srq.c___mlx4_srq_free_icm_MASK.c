
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_srq_table {int bitmap; int table; int cmpt_table; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_2__ {struct mlx4_srq_table srq_table; } ;


 int FUNC_0 (int *,int) ;
 TYPE_1__* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (struct mlx4_dev*,int *,int) ;

void FUNC_3(struct mlx4_dev *VAR_0, int VAR_1)
{
 struct mlx4_srq_table *VAR_2 = &FUNC_1(VAR_0)->srq_table;

 FUNC_2(VAR_0, &VAR_2->cmpt_table, VAR_1);
 FUNC_2(VAR_0, &VAR_2->table, VAR_1);
 FUNC_0(&VAR_2->bitmap, VAR_1);
}
