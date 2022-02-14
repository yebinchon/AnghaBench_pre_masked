
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_5__ {int bitmap; } ;
struct TYPE_6__ {TYPE_2__ mcg_table; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (struct mlx4_dev*) ;

void FUNC_2(struct mlx4_dev *VAR_1)
{
 if (VAR_1->caps.steering_mode !=
     VAR_0)
  FUNC_0(&FUNC_1(VAR_1)->mcg_table.bitmap);
}
