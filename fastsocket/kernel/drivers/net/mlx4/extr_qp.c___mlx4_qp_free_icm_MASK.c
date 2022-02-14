
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_qp_table {int qp_table; int auxc_table; int altc_table; int rdmarc_table; int cmpt_table; } ;
struct mlx4_priv {struct mlx4_qp_table qp_table; } ;
struct mlx4_dev {int dummy; } ;


 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (struct mlx4_dev*,int *,int) ;

void FUNC_2(struct mlx4_dev *VAR_0, int VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_0(VAR_0);
 struct mlx4_qp_table *VAR_3 = &VAR_2->qp_table;

 FUNC_1(VAR_0, &VAR_3->cmpt_table, VAR_1);
 FUNC_1(VAR_0, &VAR_3->rdmarc_table, VAR_1);
 FUNC_1(VAR_0, &VAR_3->altc_table, VAR_1);
 FUNC_1(VAR_0, &VAR_3->auxc_table, VAR_1);
 FUNC_1(VAR_0, &VAR_3->qp_table, VAR_1);
}
