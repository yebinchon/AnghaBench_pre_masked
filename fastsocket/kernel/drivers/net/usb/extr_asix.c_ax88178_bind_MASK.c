
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_5__ {int phy_id_mask; int reg_num_mask; int supports_gmii; int phy_id; int (* mdio_write ) (TYPE_3__*,int ,int ,int) ;int mdio_read; TYPE_3__* dev; } ;
struct usbnet {int rx_urb_size; int driver_priv; TYPE_1__* driver_info; TYPE_2__ mii; TYPE_3__* net; int data; } ;
struct usb_interface {int dummy; } ;
struct asix_data {int phymode; int ledmode; } ;
struct asix_common_private {int dummy; } ;
typedef scalar_t__ __le16 ;
struct TYPE_6__ {int * ethtool_ops; int * netdev_ops; int dev_addr; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (struct usbnet*) ;
 int FUNC_1 (struct usbnet*) ;
 int VAR_26 ;
 int FUNC_2 (TYPE_3__*,int ,int ,int) ;
 int FUNC_3 (struct usbnet*,int ,int,int ,int,scalar_t__*) ;
 int FUNC_4 (struct usbnet*,int) ;
 int FUNC_5 (struct usbnet*,int ,int ,int ,int ,int *) ;
 int FUNC_6 (struct usbnet*,int,int) ;
 int FUNC_7 (struct usbnet*,int ) ;
 int FUNC_8 (struct usbnet*,int ) ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int,int ) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct usbnet*) ;
 int FUNC_14 (int ,scalar_t__*,int) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_18(struct usbnet *VAR_29, struct usb_interface *VAR_30)
{
 struct asix_data *VAR_31 = (struct asix_data *)&VAR_29->data;
 int VAR_32;
 u8 VAR_33[VAR_19];
 __le16 VAR_34;
 u8 VAR_35;
 int VAR_36 = 0;
 u32 VAR_37;

 FUNC_17(VAR_29,VAR_30);

 FUNC_3(VAR_29, VAR_6, 0, 0, 1, &VAR_35);
 FUNC_10("GPIO Status: 0x%04x", VAR_35);

 FUNC_5(VAR_29, VAR_9, 0, 0, 0, ((void*)0));
 FUNC_3(VAR_29, VAR_5, 0x0017, 0, 2, &VAR_34);
 FUNC_5(VAR_29, VAR_8, 0, 0, 0, ((void*)0));

 FUNC_10("EEPROM index 0x17 is 0x%04x", VAR_34);

 if (VAR_34 == FUNC_9(0xffff)) {
  VAR_31->phymode = VAR_25;
  VAR_31->ledmode = 0;
  VAR_36 = 1;
 } else {
  VAR_31->phymode = FUNC_12(VAR_34) & 7;
  VAR_31->ledmode = FUNC_12(VAR_34) >> 8;
  VAR_36 = (FUNC_12(VAR_34) & 0x80) ? 0 : 1;
 }
 FUNC_10("GPIO0: %d, PhyMode: %d", VAR_36, VAR_31->phymode);

 FUNC_6(VAR_29, VAR_13 | VAR_12 | VAR_11, 40);
 if ((FUNC_12(VAR_34) >> 8) != 1) {
  FUNC_6(VAR_29, 0x003c, 30);
  FUNC_6(VAR_29, 0x001c, 300);
  FUNC_6(VAR_29, 0x003c, 30);
 } else {
  FUNC_10("gpio phymode == 1 path");
  FUNC_6(VAR_29, VAR_11, 30);
  FUNC_6(VAR_29, VAR_11 | VAR_12, 30);
 }

 FUNC_4(VAR_29, 0);
 FUNC_16(150);

 FUNC_4(VAR_29, VAR_15 | VAR_14);
 FUNC_16(150);

 FUNC_8(VAR_29, 0);


 if ((VAR_32 = FUNC_3(VAR_29, VAR_7,
    0, 0, VAR_19, VAR_33)) < 0) {
  FUNC_10("Failed to read MAC address: %d", VAR_32);
  goto out;
 }
 FUNC_14(VAR_29->net->dev_addr, VAR_33, VAR_19);


 VAR_29->mii.dev = VAR_29->net;
 VAR_29->mii.mdio_read = VAR_26;
 VAR_29->mii.mdio_write = FUNC_2;
 VAR_29->mii.phy_id_mask = 0x1f;
 VAR_29->mii.reg_num_mask = 0xff;
 VAR_29->mii.supports_gmii = 1;
 VAR_29->mii.phy_id = FUNC_0(VAR_29);

 VAR_29->net->netdev_ops = &VAR_28;
 VAR_29->net->ethtool_ops = &VAR_27;

 VAR_37 = FUNC_1(VAR_29);
 FUNC_10("PHYID=0x%08x", VAR_37);

 if (VAR_31->phymode == VAR_25) {
  FUNC_13(VAR_29);
  FUNC_16(60);
 }

 FUNC_2(VAR_29->net, VAR_29->mii.phy_id, VAR_23,
   VAR_17 | VAR_16);
 FUNC_2(VAR_29->net, VAR_29->mii.phy_id, VAR_22,
   VAR_1 | VAR_2 | VAR_3);
 FUNC_2(VAR_29->net, VAR_29->mii.phy_id, VAR_24,
   VAR_0);

 FUNC_15(&VAR_29->mii);

 if ((VAR_32 = FUNC_7(VAR_29, VAR_4)) < 0)
  goto out;

 if ((VAR_32 = FUNC_8(VAR_29, VAR_10)) < 0)
  goto out;


 if (VAR_29->driver_info->flags & VAR_20) {


  VAR_29->rx_urb_size = 2048;
 }

 VAR_29->driver_priv = FUNC_11(sizeof(struct asix_common_private), VAR_21);
 if (!VAR_29->driver_priv)
  return -VAR_18;
 return 0;

out:
 return VAR_32;
}
