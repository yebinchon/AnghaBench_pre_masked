
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {size_t if_port; struct adapter* ml_priv; } ;
struct mdio_if_info {int dummy; } ;
struct ifreq {int dummy; } ;
struct adapter {TYPE_2__* port; } ;
struct TYPE_4__ {TYPE_1__* phy; } ;
struct TYPE_3__ {struct mdio_if_info mdio; } ;


 int if_mii (struct ifreq*) ;
 int mdio_mii_ioctl (struct mdio_if_info*,int ,int) ;

__attribute__((used)) static int t1_ioctl(struct net_device *dev, struct ifreq *req, int cmd)
{
 struct adapter *adapter = dev->ml_priv;
 struct mdio_if_info *mdio = &adapter->port[dev->if_port].phy->mdio;

 return mdio_mii_ioctl(mdio, if_mii(req), cmd);
}
