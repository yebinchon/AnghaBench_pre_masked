
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ulong ;
typedef int u32 ;
struct usbnet {int rx_urb_size; struct net_device* net; TYPE_1__* udev; scalar_t__* data; } ;
struct smsc95xx_priv {int mac_cr; int use_tx_csum; } ;
struct net_device {int dev_addr; } ;
struct TYPE_2__ {scalar_t__ speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
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
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct usbnet*,char*,...) ;
 int FUNC_1 (struct usbnet*,char*,...) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct usbnet*) ;
 int FUNC_5 (struct usbnet*) ;
 scalar_t__ FUNC_6 (struct usbnet*) ;
 int FUNC_7 (struct usbnet*,int ,int*) ;
 int FUNC_8 (struct usbnet*) ;
 int FUNC_9 (struct usbnet*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct usbnet*) ;
 int FUNC_12 (struct usbnet*) ;
 int FUNC_13 (struct usbnet*,int ,int) ;
 scalar_t__ VAR_33 ;

__attribute__((used)) static int FUNC_14(struct usbnet *VAR_34)
{
 struct smsc95xx_priv *VAR_35 = (struct smsc95xx_priv *)(VAR_34->data[0]);
 struct net_device *VAR_36 = VAR_34->net;
 u32 VAR_37, VAR_38, VAR_39;
 int VAR_40 = 0, VAR_41;

 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "entering smsc95xx_reset");

 VAR_38 = VAR_15;
 VAR_40 = FUNC_13(VAR_34, VAR_12, VAR_38);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write HW_CFG_LRST_ bit in HW_CFG "
   "register, ret = %d", VAR_40);
  return VAR_40;
 }

 VAR_41 = 0;
 do {
  VAR_40 = FUNC_7(VAR_34, VAR_12, &VAR_37);
  if (VAR_40 < 0) {
   FUNC_1(VAR_34, "Failed to read HW_CFG: %d", VAR_40);
   return VAR_40;
  }
  FUNC_3(10);
  VAR_41++;
 } while ((VAR_37 & VAR_15) && (VAR_41 < 100));

 if (VAR_41 >= 100) {
  FUNC_1(VAR_34, "timeout waiting for completion of Lite Reset");
  return VAR_40;
 }

 VAR_38 = VAR_29;
 VAR_40 = FUNC_13(VAR_34, VAR_30, VAR_38);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write PM_CTRL: %d", VAR_40);
  return VAR_40;
 }

 VAR_41 = 0;
 do {
  VAR_40 = FUNC_7(VAR_34, VAR_30, &VAR_37);
  if (VAR_40 < 0) {
   FUNC_1(VAR_34, "Failed to read PM_CTRL: %d", VAR_40);
   return VAR_40;
  }
  FUNC_3(10);
  VAR_41++;
 } while ((VAR_37 & VAR_29) && (VAR_41 < 100));

 if (VAR_41 >= 100) {
  FUNC_1(VAR_34, "timeout waiting for PHY Reset");
  return VAR_40;
 }

 FUNC_5(VAR_34);

 VAR_40 = FUNC_9(VAR_34);
 if (VAR_40 < 0)
  return VAR_40;

 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "MAC Address: %pM", VAR_34->net->dev_addr);

 VAR_40 = FUNC_7(VAR_34, VAR_12, &VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to read HW_CFG: %d", VAR_40);
  return VAR_40;
 }

 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "Read Value from HW_CFG : 0x%08x", VAR_37);

 VAR_37 |= VAR_14;

 VAR_40 = FUNC_13(VAR_34, VAR_12, VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write HW_CFG_BIR_ bit in HW_CFG "
   "register, ret = %d", VAR_40);
  return VAR_40;
 }

 VAR_40 = FUNC_7(VAR_34, VAR_12, &VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to read HW_CFG: %d", VAR_40);
  return VAR_40;
 }
 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "Read Value from HW_CFG after writing "
   "HW_CFG_BIR_: 0x%08x", VAR_37);

 if (!VAR_33) {
  VAR_39 = 0;
  VAR_34->rx_urb_size = VAR_27;
 } else if (VAR_34->udev->speed == VAR_31) {
  VAR_39 = VAR_6 / VAR_11;
  VAR_34->rx_urb_size = VAR_6;
 } else {
  VAR_39 = VAR_5 / VAR_10;
  VAR_34->rx_urb_size = VAR_5;
 }

 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "rx_urb_size=%ld", (ulong)VAR_34->rx_urb_size);

 VAR_40 = FUNC_13(VAR_34, VAR_3, VAR_39);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write BURST_CAP: %d", VAR_40);
  return VAR_40;
 }

 VAR_40 = FUNC_7(VAR_34, VAR_3, &VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to read BURST_CAP: %d", VAR_40);
  return VAR_40;
 }
 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "Read Value from BURST_CAP after writing: 0x%08x",
   VAR_37);

 VAR_37 = VAR_4;
 VAR_40 = FUNC_13(VAR_34, VAR_2, VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "ret = %d", VAR_40);
  return VAR_40;
 }

 VAR_40 = FUNC_7(VAR_34, VAR_2, &VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to read BULK_IN_DLY: %d", VAR_40);
  return VAR_40;
 }
 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "Read Value from BULK_IN_DLY after writing: "
   "0x%08x", VAR_37);

 VAR_40 = FUNC_7(VAR_34, VAR_12, &VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to read HW_CFG: %d", VAR_40);
  return VAR_40;
 }
 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "Read Value from HW_CFG: 0x%08x", VAR_37);

 if (VAR_33)
  VAR_37 |= (VAR_16 | VAR_13);

 VAR_37 &= ~VAR_17;


 VAR_37 |= VAR_28 << 9;

 VAR_40 = FUNC_13(VAR_34, VAR_12, VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write HW_CFG register, ret=%d", VAR_40);
  return VAR_40;
 }

 VAR_40 = FUNC_7(VAR_34, VAR_12, &VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to read HW_CFG: %d", VAR_40);
  return VAR_40;
 }
 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "Read Value from HW_CFG after writing: 0x%08x",
   VAR_37);

 VAR_38 = 0xFFFFFFFF;
 VAR_40 = FUNC_13(VAR_34, VAR_21, VAR_38);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write INT_STS register, ret=%d", VAR_40);
  return VAR_40;
 }

 VAR_40 = FUNC_7(VAR_34, VAR_18, &VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to read ID_REV: %d", VAR_40);
  return VAR_40;
 }
 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "ID_REV = 0x%08x", VAR_37);


 VAR_38 = VAR_25 | VAR_24 |
  VAR_23;
 VAR_40 = FUNC_13(VAR_34, VAR_22, VAR_38);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write LED_GPIO_CFG register, ret=%d",
   VAR_40);
  return VAR_40;
 }


 VAR_38 = 0;
 VAR_40 = FUNC_13(VAR_34, VAR_9, VAR_38);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write FLOW: %d", VAR_40);
  return VAR_40;
 }

 VAR_37 = VAR_1;
 VAR_40 = FUNC_13(VAR_34, VAR_0, VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write AFC_CFG: %d", VAR_40);
  return VAR_40;
 }


 VAR_40 = FUNC_7(VAR_34, VAR_26, &VAR_35->mac_cr);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to read MAC_CR: %d", VAR_40);
  return VAR_40;
 }



 VAR_38 = (u32)VAR_8;
 VAR_40 = FUNC_13(VAR_34, VAR_32, VAR_38);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write VAN1: %d", VAR_40);
  return VAR_40;
 }


 FUNC_2(VAR_36, VAR_35->use_tx_csum);
 VAR_40 = FUNC_8(VAR_34);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to set csum offload: %d", VAR_40);
  return VAR_40;
 }

 FUNC_10(VAR_34->net);

 if (FUNC_6(VAR_34) < 0)
  return -VAR_7;

 VAR_40 = FUNC_7(VAR_34, VAR_19, &VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to read INT_EP_CTL: %d", VAR_40);
  return VAR_40;
 }


 VAR_37 |= VAR_20;

 VAR_40 = FUNC_13(VAR_34, VAR_19, VAR_37);
 if (VAR_40 < 0) {
  FUNC_1(VAR_34, "Failed to write INT_EP_CTL: %d", VAR_40);
  return VAR_40;
 }

 FUNC_12(VAR_34);
 FUNC_11(VAR_34);

 if (FUNC_4(VAR_34))
  FUNC_0(VAR_34, "smsc95xx_reset, return 0");
 return 0;
}
