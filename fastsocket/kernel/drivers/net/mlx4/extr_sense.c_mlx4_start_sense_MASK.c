
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_sense {int sense_poll; } ;
struct mlx4_priv {struct mlx4_sense sense; } ;
struct TYPE_2__ {int flags; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx4_priv* FUNC_0 (struct mlx4_dev*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct mlx4_dev *VAR_3)
{
 struct mlx4_priv *VAR_4 = FUNC_0(VAR_3);
 struct mlx4_sense *VAR_5 = &VAR_4->sense;

 if (!(VAR_3->caps.flags & VAR_0))
  return;

 FUNC_1(VAR_2 , &VAR_5->sense_poll,
      FUNC_2(VAR_1));
}
