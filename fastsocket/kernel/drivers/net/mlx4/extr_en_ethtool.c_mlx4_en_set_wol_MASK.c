
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int port; TYPE_2__* mdev; } ;
struct ethtool_wolinfo {int supported; int wolopts; } ;
struct TYPE_5__ {int flags; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;
struct TYPE_6__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (TYPE_3__*,int*,int) ;
 int FUNC_2 (TYPE_3__*,int,int) ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_8,
       struct ethtool_wolinfo *VAR_9)
{
 struct mlx4_en_priv *VAR_10 = FUNC_3(VAR_8);
 u64 VAR_11 = 0;
 int VAR_12 = 0;
 u64 VAR_13;

 if ((VAR_10->port < 1) || (VAR_10->port > 2))
  return -VAR_1;

 VAR_13 = (VAR_10->port == 1) ? VAR_2 :
  VAR_3;

 if (!(VAR_10->mdev->dev->caps.flags & VAR_13))
  return -VAR_1;

 if (VAR_9->supported & ~VAR_7)
  return -VAR_0;

 VAR_12 = FUNC_1(VAR_10->mdev->dev, &VAR_11, VAR_10->port);
 if (VAR_12) {
  FUNC_0(VAR_10, "Failed to get WoL info, unable to modify\n");
  return VAR_12;
 }

 if (VAR_9->wolopts & VAR_7) {
  VAR_11 |= VAR_4 | VAR_5 |
    VAR_6;
 } else {
  VAR_11 &= ~(VAR_5 | VAR_6);
  VAR_11 |= VAR_4;
 }

 VAR_12 = FUNC_2(VAR_10->mdev->dev, VAR_11, VAR_10->port);
 if (VAR_12)
  FUNC_0(VAR_10, "Failed to set WoL information\n");

 return VAR_12;
}
