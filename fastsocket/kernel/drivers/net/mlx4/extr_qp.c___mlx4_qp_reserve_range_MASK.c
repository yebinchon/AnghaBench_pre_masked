
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp_table {int bitmap; } ;
struct mlx4_priv {struct mlx4_qp_table qp_table; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_1, int VAR_2, int VAR_3,
       int *VAR_4)
{
 struct mlx4_priv *VAR_5 = FUNC_1(VAR_1);
 struct mlx4_qp_table *VAR_6 = &VAR_5->qp_table;

 *VAR_4 = FUNC_0(&VAR_6->bitmap, VAR_2, VAR_3);
 if (*VAR_4 == -1)
  return -VAR_0;

 return 0;
}
