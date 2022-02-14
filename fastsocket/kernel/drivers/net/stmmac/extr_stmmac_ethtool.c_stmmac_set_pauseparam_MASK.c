
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stmmac_priv {int flow_ctrl; int lock; int pause; TYPE_2__* mac_type; struct phy_device* phydev; } ;
struct phy_device {int duplex; int addr; int speed; scalar_t__ autoneg; int advertising; int supported; } ;
struct net_device {unsigned long base_addr; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; } ;
struct ethtool_cmd {int phy_address; int duplex; int speed; scalar_t__ autoneg; int advertising; int supported; int cmd; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* flow_ctrl ) (unsigned long,int ,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct phy_device*,struct ethtool_cmd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long,int ,int,int ) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_4,
        struct ethtool_pauseparam *VAR_5)
{
 struct stmmac_priv *VAR_6 = FUNC_0(VAR_4);
 struct phy_device *VAR_7 = VAR_6->phydev;
 int VAR_8 = VAR_1;
 int VAR_9 = 0;

 FUNC_3(&VAR_6->lock);

 if (VAR_5->rx_pause)
  VAR_8 |= VAR_2;
 if (VAR_5->tx_pause)
  VAR_8 |= VAR_3;

 VAR_6->flow_ctrl = VAR_8;

 if (VAR_7->autoneg) {
  if (FUNC_1(VAR_4)) {
   struct ethtool_cmd VAR_10;

   VAR_10.cmd = VAR_0;
   VAR_10.supported = VAR_7->supported;
   VAR_10.advertising = VAR_7->advertising;
   VAR_10.autoneg = VAR_7->autoneg;
   VAR_10.speed = VAR_7->speed;
   VAR_10.duplex = VAR_7->duplex;
   VAR_10.phy_address = VAR_7->addr;
   VAR_9 = FUNC_2(VAR_7, &VAR_10);
  }
 } else {
  unsigned long VAR_11 = VAR_4->base_addr;
  VAR_6->mac_type->ops->flow_ctrl(VAR_11, VAR_7->duplex,
            VAR_6->flow_ctrl, VAR_6->pause);
 }
 FUNC_4(&VAR_6->lock);
 return VAR_9;
}
