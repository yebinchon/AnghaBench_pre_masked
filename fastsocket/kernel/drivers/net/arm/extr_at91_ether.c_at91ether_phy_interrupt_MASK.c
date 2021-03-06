
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct at91_private {scalar_t__ phy_type; int phy_address; } ;
typedef int irqreturn_t ;


 int IRQ_HANDLED ;
 scalar_t__ MII_BCM5221_ID ;
 int MII_BCMINTR_REG ;
 scalar_t__ MII_DM9161A_ID ;
 scalar_t__ MII_DM9161_ID ;
 scalar_t__ MII_DP83848_ID ;
 int MII_DPPHYSTS_REG ;
 int MII_DSINTR_REG ;
 int MII_ISINTS_REG ;
 scalar_t__ MII_KS8721_ID ;
 scalar_t__ MII_LXT971A_ID ;
 int MII_T78Q21INT_REG ;
 scalar_t__ MII_T78Q21x3_ID ;
 int MII_TPISTATUS ;
 int disable_mdi () ;
 int enable_mdi () ;
 struct at91_private* netdev_priv (struct net_device*) ;
 int read_phy (int ,int ,unsigned int*) ;
 int update_linkspeed (struct net_device*,int ) ;

__attribute__((used)) static irqreturn_t at91ether_phy_interrupt(int irq, void *dev_id)
{
 struct net_device *dev = (struct net_device *) dev_id;
 struct at91_private *lp = netdev_priv(dev);
 unsigned int phy;






 enable_mdi();
 if ((lp->phy_type == MII_DM9161_ID) || (lp->phy_type == MII_DM9161A_ID)) {
  read_phy(lp->phy_address, MII_DSINTR_REG, &phy);
  if (!(phy & (1 << 0)))
   goto done;
 }
 else if (lp->phy_type == MII_LXT971A_ID) {
  read_phy(lp->phy_address, MII_ISINTS_REG, &phy);
  if (!(phy & (1 << 2)))
   goto done;
 }
 else if (lp->phy_type == MII_BCM5221_ID) {
  read_phy(lp->phy_address, MII_BCMINTR_REG, &phy);
  if (!(phy & (1 << 0)))
   goto done;
 }
 else if (lp->phy_type == MII_KS8721_ID) {
  read_phy(lp->phy_address, MII_TPISTATUS, &phy);
  if (!(phy & ((1 << 2) | 1)))
   goto done;
 }
 else if (lp->phy_type == MII_T78Q21x3_ID) {
  read_phy(lp->phy_address, MII_T78Q21INT_REG, &phy);
  if (!(phy & ((1 << 2) | 1)))
   goto done;
 }
 else if (lp->phy_type == MII_DP83848_ID) {
  read_phy(lp->phy_address, MII_DPPHYSTS_REG, &phy);
  if (!(phy & (1 << 7)))
   goto done;
 }

 update_linkspeed(dev, 0);

done:
 disable_mdi();

 return IRQ_HANDLED;
}
