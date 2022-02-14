
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {int port_up; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
struct ethtool_rxnfc {int cmd; } ;
struct TYPE_3__ {scalar_t__ steering_mode; } ;
struct TYPE_4__ {TYPE_1__ caps; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx4_en_priv*,char*,int) ;
 int FUNC_1 (struct net_device*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct net_device*,struct ethtool_rxnfc*) ;
 struct mlx4_en_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, struct ethtool_rxnfc *VAR_3)
{
 int VAR_4 = 0;
 struct mlx4_en_priv *VAR_5 = FUNC_3(VAR_2);
 struct mlx4_en_dev *VAR_6 = VAR_5->mdev;

 if (VAR_6->dev->caps.steering_mode !=
     VAR_1 || !VAR_5->port_up)
  return -VAR_0;

 switch (VAR_3->cmd) {
 case 128:
  VAR_4 = FUNC_2(VAR_2, VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  break;
 default:
  FUNC_0(VAR_5, "Unsupported ethtool command. (%d)\n", VAR_3->cmd);
  return -VAR_0;
 }

 return VAR_4;
}
