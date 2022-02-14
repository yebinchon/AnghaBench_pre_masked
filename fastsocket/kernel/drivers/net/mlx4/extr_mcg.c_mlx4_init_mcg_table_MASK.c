
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int bitmap; } ;
struct mlx4_priv {TYPE_1__ mcg_table; } ;
struct TYPE_4__ {scalar_t__ steering_mode; scalar_t__ num_amgms; } ;
struct mlx4_dev {TYPE_2__ caps; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__,int ,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mlx4_dev *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;


 if (VAR_1->caps.steering_mode ==
     VAR_0)
  return 0;
 VAR_3 = FUNC_0(&VAR_2->mcg_table.bitmap, VAR_1->caps.num_amgms,
          VAR_1->caps.num_amgms - 1, 0, 0);
 if (VAR_3)
  return VAR_3;

 FUNC_2(&VAR_2->mcg_table.mutex);

 return 0;
}
