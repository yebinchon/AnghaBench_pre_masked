
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {int flow_ctrl; int lock; TYPE_1__* phydev; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int rx_pause; int tx_pause; int autoneg; } ;
struct TYPE_2__ {int autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_2,
        struct ethtool_pauseparam *VAR_3)
{
 struct stmmac_priv *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(&VAR_4->lock);

 VAR_3->rx_pause = 0;
 VAR_3->tx_pause = 0;
 VAR_3->autoneg = VAR_4->phydev->autoneg;

 if (VAR_4->flow_ctrl & VAR_0)
  VAR_3->rx_pause = 1;
 if (VAR_4->flow_ctrl & VAR_1)
  VAR_3->tx_pause = 1;

 FUNC_2(&VAR_4->lock);
 return;
}
