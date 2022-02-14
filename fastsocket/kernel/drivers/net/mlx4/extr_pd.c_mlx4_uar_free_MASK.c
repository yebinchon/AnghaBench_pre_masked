
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_uar {int index; } ;
struct mlx4_dev {int dummy; } ;
struct TYPE_3__ {int bitmap; } ;
struct TYPE_4__ {TYPE_1__ uar_table; } ;


 int FUNC_0 (int *,int ) ;
 TYPE_2__* FUNC_1 (struct mlx4_dev*) ;

void FUNC_2(struct mlx4_dev *VAR_0, struct mlx4_uar *VAR_1)
{
 FUNC_0(&FUNC_1(VAR_0)->uar_table.bitmap, VAR_1->index);
}
