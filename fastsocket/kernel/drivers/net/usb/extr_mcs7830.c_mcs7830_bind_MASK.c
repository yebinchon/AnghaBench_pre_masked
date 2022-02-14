
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int phy_id_mask; int reg_num_mask; int phy_id; struct net_device* dev; int mdio_write; int mdio_read; } ;
struct usbnet {TYPE_1__ mii; scalar_t__ rx_urb_size; struct net_device* net; } ;
struct usb_interface {int dummy; } ;
struct net_device {scalar_t__ dev_addr; int * netdev_ops; int * ethtool_ops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbnet*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_3(struct usbnet *VAR_5, struct usb_interface *VAR_6)
{
 struct net_device *VAR_7 = VAR_5->net;
 int VAR_8;

 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8)
  goto out;

 VAR_7->ethtool_ops = &VAR_1;
 VAR_7->netdev_ops = &VAR_4;
 FUNC_1(VAR_7);


 VAR_5->rx_urb_size = VAR_0 + 1;

 VAR_5->mii.mdio_read = VAR_2;
 VAR_5->mii.mdio_write = VAR_3;
 VAR_5->mii.dev = VAR_7;
 VAR_5->mii.phy_id_mask = 0x3f;
 VAR_5->mii.reg_num_mask = 0x1f;
 VAR_5->mii.phy_id = *((u8 *) VAR_7->dev_addr + 1);

 VAR_8 = FUNC_2(VAR_5, VAR_6);
out:
 return VAR_8;
}
