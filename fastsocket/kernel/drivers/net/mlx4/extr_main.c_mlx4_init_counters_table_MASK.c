
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_priv {int counters_bitmap; } ;
struct TYPE_2__ {int flags; int max_counters; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int ,int ) ;
 struct mlx4_priv* FUNC_1 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_2(struct mlx4_dev *VAR_2)
{
 struct mlx4_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 if (!(VAR_2->caps.flags & VAR_1))
  return -VAR_0;

 VAR_4 = VAR_2->caps.max_counters;
 return FUNC_0(&VAR_3->counters_bitmap, VAR_4, VAR_4 - 1, 0, 0);
}
