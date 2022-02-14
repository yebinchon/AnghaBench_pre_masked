
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; TYPE_2__* mdev; } ;
struct ethtool_wolinfo {void* wolopts; void* supported; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_6__ {TYPE_1__ caps; } ;
struct TYPE_5__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (TYPE_3__*,int*,int) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5,
       struct ethtool_wolinfo *VAR_6)
{
 struct mlx4_en_priv *VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = 0;
 u64 VAR_9 = 0;
 u64 VAR_10;

 if ((VAR_7->port < 1) || (VAR_7->port > 2)) {
  FUNC_0(VAR_7, "Failed to get WoL information\n");
  return;
 }

 VAR_10 = (VAR_7->port == 1) ? VAR_0 :
  VAR_1;

 if (!(VAR_7->mdev->dev->caps.flags & VAR_10)) {
  VAR_6->supported = 0;
  VAR_6->wolopts = 0;
  return;
 }

 VAR_8 = FUNC_1(VAR_7->mdev->dev, &VAR_9, VAR_7->port);
 if (VAR_8) {
  FUNC_0(VAR_7, "Failed to get WoL information\n");
  return;
 }

 if (VAR_9 & VAR_3)
  VAR_6->supported = VAR_4;
 else
  VAR_6->supported = 0;

 if (VAR_9 & VAR_2)
  VAR_6->wolopts = VAR_4;
 else
  VAR_6->wolopts = 0;
}
