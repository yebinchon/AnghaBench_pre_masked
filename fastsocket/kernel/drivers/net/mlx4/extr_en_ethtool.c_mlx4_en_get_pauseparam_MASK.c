
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlx4_en_priv {TYPE_1__* prof; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; } ;
struct TYPE_2__ {int rx_pause; int tx_pause; } ;


 struct mlx4_en_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
     struct ethtool_pauseparam *VAR_1)
{
 struct mlx4_en_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_1->tx_pause = VAR_2->prof->tx_pause;
 VAR_1->rx_pause = VAR_2->prof->rx_pause;
}
