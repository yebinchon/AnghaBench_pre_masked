
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int phy_id; } ;
struct jme_adapter {int reg_txpfc; int reg_rxmcs; int phy_lock; TYPE_1__ mii_if; int dev; int rxmcs_lock; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (struct jme_adapter*,int ,int) ;
 struct jme_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_7,
   struct ethtool_pauseparam *VAR_8)
{
 struct jme_adapter *VAR_9 = FUNC_3(VAR_7);
 u32 VAR_10;

 if (((VAR_9->reg_txpfc & VAR_6) != 0) ^
  (VAR_8->tx_pause != 0)) {

  if (VAR_8->tx_pause)
   VAR_9->reg_txpfc |= VAR_6;
  else
   VAR_9->reg_txpfc &= ~VAR_6;

  FUNC_2(VAR_9, VAR_3, VAR_9->reg_txpfc);
 }

 FUNC_4(&VAR_9->rxmcs_lock);
 if (((VAR_9->reg_rxmcs & VAR_5) != 0) ^
  (VAR_8->rx_pause != 0)) {

  if (VAR_8->rx_pause)
   VAR_9->reg_rxmcs |= VAR_5;
  else
   VAR_9->reg_rxmcs &= ~VAR_5;

  FUNC_2(VAR_9, VAR_2, VAR_9->reg_rxmcs);
 }
 FUNC_5(&VAR_9->rxmcs_lock);

 FUNC_4(&VAR_9->phy_lock);
 VAR_10 = FUNC_0(VAR_9->dev, VAR_9->mii_if.phy_id, VAR_4);
 if (((VAR_10 & (VAR_1 | VAR_0)) != 0) ^
  (VAR_8->autoneg != 0)) {

  if (VAR_8->autoneg)
   VAR_10 |= (VAR_1 | VAR_0);
  else
   VAR_10 &= ~(VAR_1 | VAR_0);

  FUNC_1(VAR_9->dev, VAR_9->mii_if.phy_id,
    VAR_4, VAR_10);
 }
 FUNC_5(&VAR_9->phy_lock);

 return 0;
}
