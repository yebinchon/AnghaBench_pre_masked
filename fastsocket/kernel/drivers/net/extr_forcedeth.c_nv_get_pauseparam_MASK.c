
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct fe_priv {int pause_flags; } ;
struct ethtool_pauseparam {int autoneg; int rx_pause; int tx_pause; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fe_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_3, struct ethtool_pauseparam* VAR_4)
{
 struct fe_priv *VAR_5 = FUNC_0(VAR_3);

 VAR_4->autoneg = (VAR_5->pause_flags & VAR_0) != 0;
 VAR_4->rx_pause = (VAR_5->pause_flags & VAR_1) != 0;
 VAR_4->tx_pause = (VAR_5->pause_flags & VAR_2) != 0;
}
