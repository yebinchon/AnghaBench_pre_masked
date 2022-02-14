
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cq_table {int bitmap; int table; int cmpt_table; } ;
struct mlx4_priv {struct mlx4_cq_table cq_table; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int *,int) ;
 int FUNC_4 (struct mlx4_dev*,int *,int) ;

int FUNC_5(struct mlx4_dev *VAR_1, int *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_2(VAR_1);
 struct mlx4_cq_table *VAR_4 = &VAR_3->cq_table;
 int VAR_5;

 *VAR_2 = FUNC_0(&VAR_4->bitmap);
 if (*VAR_2 == -1)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_1, &VAR_4->table, *VAR_2);
 if (VAR_5)
  goto err_out;

 VAR_5 = FUNC_3(VAR_1, &VAR_4->cmpt_table, *VAR_2);
 if (VAR_5)
  goto err_put;
 return 0;

err_put:
 FUNC_4(VAR_1, &VAR_4->table, *VAR_2);

err_out:
 FUNC_1(&VAR_4->bitmap, *VAR_2);
 return VAR_5;
}
