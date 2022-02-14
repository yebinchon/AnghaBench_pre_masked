
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_qp_table {int lock; } ;
struct mlx4_qp {int qpn; int free; int refcount; } ;
struct mlx4_priv {struct mlx4_qp_table qp_table; } ;
struct TYPE_2__ {int num_qps; } ;
struct mlx4_dev {TYPE_1__ caps; int qp_table_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int) ;
 int FUNC_4 (struct mlx4_dev*,int) ;
 int FUNC_5 (int *,int,struct mlx4_qp*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct mlx4_dev *VAR_1, int VAR_2, struct mlx4_qp *VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_2(VAR_1);
 struct mlx4_qp_table *VAR_5 = &VAR_4->qp_table;
 int VAR_6;

 if (!VAR_2)
  return -VAR_0;

 VAR_3->qpn = VAR_2;

 VAR_6 = FUNC_3(VAR_1, VAR_2);
 if (VAR_6)
  return VAR_6;

 FUNC_6(&VAR_5->lock);
 VAR_6 = FUNC_5(&VAR_1->qp_table_tree, VAR_3->qpn &
    (VAR_1->caps.num_qps - 1), VAR_3);
 FUNC_7(&VAR_5->lock);
 if (VAR_6)
  goto err_icm;

 FUNC_0(&VAR_3->refcount, 1);
 FUNC_1(&VAR_3->free);

 return 0;

err_icm:
 FUNC_4(VAR_1, VAR_2);
 return VAR_6;
}
