
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_5__ {int phy_id_mask; int reg_num_mask; int phy_id; int (* mdio_write ) (TYPE_3__*,int,int ,int) ;int mdio_read; TYPE_3__* dev; } ;
struct usbnet {int rx_urb_size; int driver_priv; TYPE_1__* driver_info; TYPE_2__ mii; TYPE_3__* net; int data; } ;
struct usb_interface {int dummy; } ;
struct asix_data {int eeprom_len; } ;
struct asix_common_private {int dummy; } ;
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
 int FUNC_2 (TYPE_3__*,int,int ,int) ;
 int FUNC_3 (struct usbnet*,int ,int ,int ,int,int *) ;
 int FUNC_4 (struct usbnet*) ;
 int FUNC_5 (struct usbnet*) ;
 int FUNC_6 (struct usbnet*,int) ;
 int FUNC_7 (struct usbnet*,int ,int,int ,int ,int *) ;
 int FUNC_8 (struct usbnet*,int,int) ;
 int FUNC_9 (struct usbnet*,int ) ;
 int FUNC_10 (struct usbnet*,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_11 (char*,int) ;
 int FUNC_12 (int,int ) ;
 int FUNC_13 (int ,int *,int) ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_17(struct usbnet *VAR_29, struct usb_interface *VAR_30)
{
 int VAR_31, VAR_32;
 u16 VAR_33;
 struct asix_data *VAR_34 = (struct asix_data *)&VAR_29->data;
 u8 VAR_35[VAR_21];
 u32 VAR_36;

 VAR_34->eeprom_len = VAR_2;

 FUNC_16(VAR_29,VAR_30);

 if ((VAR_31 = FUNC_8(VAR_29,
   VAR_13 | VAR_12 | VAR_11, 5)) < 0)
  goto out;


 VAR_32 = ((FUNC_0(VAR_29) & 0x1f) == 0x10 ? 1 : 0);
 if ((VAR_31 = FUNC_7(VAR_29, VAR_8,
    VAR_32, 0, 0, ((void*)0))) < 0) {
  FUNC_11("Select PHY #1 failed: %d", VAR_31);
  goto out;
 }

 if ((VAR_31 = FUNC_6(VAR_29, VAR_15 | VAR_17)) < 0)
  goto out;

 FUNC_15(150);
 if ((VAR_31 = FUNC_6(VAR_29, VAR_14)) < 0)
  goto out;

 FUNC_15(150);
 if (VAR_32) {
  if ((VAR_31 = FUNC_6(VAR_29, VAR_16)) < 0)
   goto out;
 }
 else {
  if ((VAR_31 = FUNC_6(VAR_29, VAR_18)) < 0)
   goto out;
 }

 FUNC_15(150);
 VAR_33 = FUNC_5(VAR_29);
 FUNC_11("RX_CTL is 0x%04x after software reset", VAR_33);
 if ((VAR_31 = FUNC_10(VAR_29, 0x0000)) < 0)
  goto out;

 VAR_33 = FUNC_5(VAR_29);
 FUNC_11("RX_CTL is 0x%04x setting to 0x0000", VAR_33);


 if ((VAR_31 = FUNC_3(VAR_29, VAR_7,
    0, 0, VAR_21, VAR_35)) < 0) {
  FUNC_11("Failed to read MAC address: %d", VAR_31);
  goto out;
 }
 FUNC_13(VAR_29->net->dev_addr, VAR_35, VAR_21);


 VAR_29->mii.dev = VAR_29->net;
 VAR_29->mii.mdio_read = VAR_26;
 VAR_29->mii.mdio_write = FUNC_2;
 VAR_29->mii.phy_id_mask = 0x1f;
 VAR_29->mii.reg_num_mask = 0x1f;
 VAR_29->mii.phy_id = FUNC_0(VAR_29);

 VAR_36 = FUNC_1(VAR_29);
 FUNC_11("PHYID=0x%08x", VAR_36);

 if ((VAR_31 = FUNC_6(VAR_29, VAR_17)) < 0)
  goto out;

 FUNC_15(150);

 if ((VAR_31 = FUNC_6(VAR_29, VAR_16 | VAR_17)) < 0)
  goto out;

 FUNC_15(150);

 VAR_29->net->netdev_ops = &VAR_28;
 VAR_29->net->ethtool_ops = &VAR_27;

 FUNC_2(VAR_29->net, VAR_29->mii.phy_id, VAR_25, VAR_19);
 FUNC_2(VAR_29->net, VAR_29->mii.phy_id, VAR_24,
   VAR_0 | VAR_1);
 FUNC_14(&VAR_29->mii);

 if ((VAR_31 = FUNC_9(VAR_29, VAR_6)) < 0)
  goto out;

 if ((VAR_31 = FUNC_7(VAR_29, VAR_9,
    VAR_3 | VAR_4,
    VAR_5, 0, ((void*)0))) < 0) {
  FUNC_11("Write IPG,IPG1,IPG2 failed: %d", VAR_31);
  goto out;
 }


 if ((VAR_31 = FUNC_10(VAR_29, VAR_10)) < 0)
  goto out;

 VAR_33 = FUNC_5(VAR_29);
 FUNC_11("RX_CTL is 0x%04x after all initializations", VAR_33);

 VAR_33 = FUNC_4(VAR_29);
 FUNC_11("Medium Status is 0x%04x after all initializations", VAR_33);


 if (VAR_29->driver_info->flags & VAR_22) {


  VAR_29->rx_urb_size = 2048;
 }

 VAR_29->driver_priv = FUNC_12(sizeof(struct asix_common_private), VAR_23);
 if (!VAR_29->driver_priv)
  return -VAR_20;

 return 0;

out:
 return VAR_31;
}
