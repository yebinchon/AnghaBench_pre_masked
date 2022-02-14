
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
struct ethtool_ts_info {int so_timestamping; int tx_types; int rx_filters; } ;
struct TYPE_3__ {int flags2; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,struct ethtool_ts_info*) ;
 struct mlx4_en_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_8,
          struct ethtool_ts_info *VAR_9)
{
 struct mlx4_en_priv *VAR_10 = FUNC_1(VAR_8);
 struct mlx4_en_dev *VAR_11 = VAR_10->mdev;
 int VAR_12;

 VAR_12 = FUNC_0(VAR_8, VAR_9);
 if (VAR_12)
  return VAR_12;

 if (VAR_11->dev->caps.flags2 & VAR_4) {
  VAR_9->so_timestamping |=
   VAR_7 |
   VAR_6 |
   VAR_5;

  VAR_9->tx_types =
   (1 << VAR_2) |
   (1 << VAR_3);

  VAR_9->rx_filters =
   (1 << VAR_1) |
   (1 << VAR_0);
 }

 return VAR_12;
}
