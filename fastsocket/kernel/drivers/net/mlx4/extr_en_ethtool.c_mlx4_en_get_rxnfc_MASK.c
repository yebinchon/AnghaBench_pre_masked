
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int rx_ring_num; int port_up; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_2__* dev; } ;
struct TYPE_6__ {int location; } ;
struct ethtool_rxnfc {int cmd; int rule_cnt; TYPE_3__ fs; int data; } ;
struct TYPE_4__ {scalar_t__ steering_mode; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_device*,struct ethtool_rxnfc*,int) ;
 int FUNC_1 (struct mlx4_en_priv*) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, struct ethtool_rxnfc *VAR_5,
        void *VAR_6)
{
 u32 *VAR_7 = VAR_6;
 struct mlx4_en_priv *VAR_8 = FUNC_2(VAR_4);
 struct mlx4_en_dev *VAR_9 = VAR_8->mdev;
 int VAR_10 = 0;
 int VAR_11 = 0, VAR_12 = 0;

 if ((VAR_5->cmd == 130 ||
      VAR_5->cmd == 129 ||
      VAR_5->cmd == 131) &&
     (VAR_9->dev->caps.steering_mode !=
      VAR_3 || !VAR_8->port_up))
  return -VAR_0;

 switch (VAR_5->cmd) {
 case 128:
  VAR_5->data = VAR_8->rx_ring_num;
  break;
 case 130:
  VAR_5->rule_cnt = FUNC_1(VAR_8);
  break;
 case 129:
  VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_5->fs.location);
  break;
 case 131:
  while ((!VAR_10 || VAR_10 == -VAR_1) && VAR_12 < VAR_5->rule_cnt) {
   VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_11);
   if (!VAR_10)
    VAR_7[VAR_12++] = VAR_11;
   VAR_11++;
  }
  VAR_10 = 0;
  break;
 default:
  VAR_10 = -VAR_2;
  break;
 }

 return VAR_10;
}
