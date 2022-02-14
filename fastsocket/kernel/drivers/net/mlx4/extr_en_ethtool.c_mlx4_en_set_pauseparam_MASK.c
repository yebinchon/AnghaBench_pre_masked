
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_1__* prof; scalar_t__ rx_skb_size; int port; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct TYPE_2__ {int tx_pause; int rx_pause; int rx_ppp; int tx_ppp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (int ,int ,scalar_t__,int,int ,int,int ) ;
 struct mlx4_en_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
    struct ethtool_pauseparam *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_2(VAR_1);
 struct mlx4_en_dev *VAR_4 = VAR_3->mdev;
 int VAR_5;

 VAR_3->prof->tx_pause = VAR_2->tx_pause != 0;
 VAR_3->prof->rx_pause = VAR_2->rx_pause != 0;
 VAR_5 = FUNC_1(VAR_4->dev, VAR_3->port,
        VAR_3->rx_skb_size + VAR_0,
        VAR_3->prof->tx_pause,
        VAR_3->prof->tx_ppp,
        VAR_3->prof->rx_pause,
        VAR_3->prof->rx_ppp);
 if (VAR_5)
  FUNC_0(VAR_3, "Failed setting pause params\n");

 return VAR_5;
}
