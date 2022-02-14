
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_srq_table {int lock; int tree; } ;
struct mlx4_srq {int dummy; } ;
struct TYPE_3__ {int num_srqs; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_4__ {struct mlx4_srq_table srq_table; } ;


 TYPE_2__* FUNC_0 (struct mlx4_dev*) ;
 struct mlx4_srq* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

struct mlx4_srq *FUNC_4(struct mlx4_dev *VAR_0, u32 VAR_1)
{
 struct mlx4_srq_table *VAR_2 = &FUNC_0(VAR_0)->srq_table;
 struct mlx4_srq *VAR_3;
 unsigned long VAR_4;

 FUNC_2(&VAR_2->lock, VAR_4);
 VAR_3 = FUNC_1(&VAR_2->tree,
    VAR_1 & (VAR_0->caps.num_srqs - 1));
 FUNC_3(&VAR_2->lock, VAR_4);

 return VAR_3;
}
