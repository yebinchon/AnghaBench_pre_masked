
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stmmac_priv {int bsp_priv; int (* phy_reset ) (int ) ;TYPE_3__* mac_type; } ;
struct net_device {unsigned long base_addr; } ;
struct mii_bus {struct net_device* priv; } ;
struct TYPE_4__ {unsigned int addr; } ;
struct TYPE_5__ {TYPE_1__ mii; } ;
struct TYPE_6__ {TYPE_2__ hw; } ;


 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->priv;
 struct stmmac_priv *VAR_2 = FUNC_0(VAR_1);
 unsigned long VAR_3 = VAR_1->base_addr;
 unsigned int VAR_4 = VAR_2->mac_type->hw.mii.addr;

 if (VAR_2->phy_reset) {
  FUNC_1("stmmac_mdio_reset: calling phy_reset\n");
  VAR_2->phy_reset(VAR_2->bsp_priv);
 }





 FUNC_3(0, VAR_3 + VAR_4);

 return 0;
}
