
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_qp_table {int lock; } ;
struct mlx4_qp {int qpn; } ;
struct TYPE_3__ {int num_qps; } ;
struct mlx4_dev {TYPE_1__ caps; int qp_table_tree; } ;
struct TYPE_4__ {struct mlx4_qp_table qp_table; } ;


 TYPE_2__* FUNC_0 (struct mlx4_dev*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mlx4_dev *VAR_0, struct mlx4_qp *VAR_1)
{
 struct mlx4_qp_table *VAR_2 = &FUNC_0(VAR_0)->qp_table;
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);
 FUNC_1(&VAR_0->qp_table_tree, VAR_1->qpn & (VAR_0->caps.num_qps - 1));
 FUNC_3(&VAR_2->lock, VAR_3);
}
