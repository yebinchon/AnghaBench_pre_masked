
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_if_info {int phy_id_mask; int reg_num_mask; scalar_t__ phy_id; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct ifreq {int dummy; } ;
struct bcm_enet_priv {int phydev; scalar_t__ has_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mii_if_info*,int ,int,int *) ;
 int FUNC_1 (struct ifreq*) ;
 struct bcm_enet_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3, struct ifreq *VAR_4, int VAR_5)
{
 struct bcm_enet_priv *VAR_6;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6->has_phy) {
  if (!VAR_6->phydev)
   return -VAR_0;
  return FUNC_3(VAR_6->phydev, FUNC_1(VAR_4), VAR_5);
 } else {
  struct mii_if_info VAR_7;

  VAR_7.dev = VAR_3;
  VAR_7.mdio_read = VAR_1;
  VAR_7.mdio_write = VAR_2;
  VAR_7.phy_id = 0;
  VAR_7.phy_id_mask = 0x3f;
  VAR_7.reg_num_mask = 0x1f;
  return FUNC_0(&VAR_7, FUNC_1(VAR_4), VAR_5, ((void*)0));
 }
}
