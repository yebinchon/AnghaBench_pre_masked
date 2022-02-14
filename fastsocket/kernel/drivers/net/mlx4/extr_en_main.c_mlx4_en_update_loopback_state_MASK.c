
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int flags; scalar_t__ validate_loopback; TYPE_1__* mdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device *VAR_2, u32 VAR_3)
{
 struct mlx4_en_priv *VAR_4 = FUNC_1(VAR_2);

 VAR_4->flags &= ~(VAR_1|
   VAR_0);




 if (FUNC_0(VAR_4->mdev->dev) && !VAR_4->validate_loopback)
  VAR_4->flags |= VAR_1;




 if (FUNC_0(VAR_4->mdev->dev) || VAR_4->validate_loopback)
  VAR_4->flags |= VAR_0;
}
