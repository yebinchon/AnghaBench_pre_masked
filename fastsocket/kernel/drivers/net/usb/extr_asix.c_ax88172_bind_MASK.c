
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int phy_id_mask; int reg_num_mask; int phy_id; int (* mdio_write ) (TYPE_3__*,int ,int ,int) ;int mdio_read; TYPE_3__* dev; } ;
struct usbnet {int driver_priv; TYPE_2__ mii; TYPE_3__* net; int data; TYPE_1__* driver_info; } ;
struct usb_interface {int dummy; } ;
struct asix_data {int eeprom_len; } ;
struct asix_common_private {int dummy; } ;
struct TYPE_6__ {int * ethtool_ops; int * netdev_ops; int dev_addr; } ;
struct TYPE_4__ {unsigned long data; } ;


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
 int FUNC_0 (struct usbnet*) ;
 int VAR_12 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int) ;
 int FUNC_2 (struct usbnet*,int ,int ,int ,int,int *) ;
 int FUNC_3 (struct usbnet*,int ,unsigned long,int ,int ,int *) ;
 int FUNC_4 (struct usbnet*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int ,int *,int) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_11(struct usbnet *VAR_15, struct usb_interface *VAR_16)
{
 int VAR_17 = 0;
 u8 VAR_18[VAR_8];
 int VAR_19;
 unsigned long VAR_20 = VAR_15->driver_info->data;
 struct asix_data *VAR_21 = (struct asix_data *)&VAR_15->data;

 VAR_21->eeprom_len = VAR_4;

 FUNC_10(VAR_15,VAR_16);


 for (VAR_19 = 2; VAR_19 >= 0; VAR_19--) {
  if ((VAR_17 = FUNC_3(VAR_15, VAR_5,
     (VAR_20 >> (VAR_19 * 8)) & 0xff, 0, 0,
     ((void*)0))) < 0)
   goto out;
  FUNC_9(5);
 }

 if ((VAR_17 = FUNC_4(VAR_15, 0x80)) < 0)
  goto out;


 if ((VAR_17 = FUNC_2(VAR_15, VAR_3,
    0, 0, VAR_8, VAR_18)) < 0) {
  FUNC_5("read AX_CMD_READ_NODE_ID failed: %d", VAR_17);
  goto out;
 }
 FUNC_7(VAR_15->net->dev_addr, VAR_18, VAR_8);


 VAR_15->mii.dev = VAR_15->net;
 VAR_15->mii.mdio_read = VAR_12;
 VAR_15->mii.mdio_write = FUNC_1;
 VAR_15->mii.phy_id_mask = 0x3f;
 VAR_15->mii.reg_num_mask = 0x1f;
 VAR_15->mii.phy_id = FUNC_0(VAR_15);

 VAR_15->net->netdev_ops = &VAR_14;
 VAR_15->net->ethtool_ops = &VAR_13;

 FUNC_1(VAR_15->net, VAR_15->mii.phy_id, VAR_11, VAR_6);
 FUNC_1(VAR_15->net, VAR_15->mii.phy_id, VAR_10,
  VAR_0 | VAR_1 | VAR_2);
 FUNC_8(&VAR_15->mii);

 VAR_15->driver_priv = FUNC_6(sizeof(struct asix_common_private), VAR_9);
 if (!VAR_15->driver_priv)
  return -VAR_7;

 return 0;

out:
 return VAR_17;
}
