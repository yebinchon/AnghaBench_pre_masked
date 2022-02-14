
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; scalar_t__ map; int timer; } ;
struct mlx4_priv {TYPE_1__ catas_err; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct mlx4_dev *VAR_1)
{
 struct mlx4_priv *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->catas_err.timer);

 if (VAR_2->catas_err.map)
  FUNC_1(VAR_2->catas_err.map);

 FUNC_4(&VAR_0);
 FUNC_2(&VAR_2->catas_err.list);
 FUNC_5(&VAR_0);
}
