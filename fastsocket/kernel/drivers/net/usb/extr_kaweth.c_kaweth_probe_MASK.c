
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_4__ {int bcdDevice; scalar_t__ bDescriptorType; scalar_t__ bLength; int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; int devnum; } ;
struct net_device {int mtu; int name; int features; int watchdog_timeo; int * netdev_ops; int dev_addr; int broadcast; } ;
struct TYPE_6__ {int statistics_mask; int max_multicast_filters; int segment_size; scalar_t__* const hw_addr; } ;
struct kaweth_device {void* tx_urb; void* rx_urb; void* irq_urb; int intbufferhandle; void* intbuffer; struct usb_device* dev; int rxbufferhandle; void* rx_buf; struct net_device* net; int lowmem_work; TYPE_3__ configuration; struct usb_interface* intf; int * firmware_buf; int term_wait; int device_lock; } ;
typedef scalar_t__* eth_addr_t ;
typedef int bcast_addr ;
typedef int __u8 ;
struct TYPE_5__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (struct net_device*,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 struct net_device* FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *,char*,...) ;
 scalar_t__ FUNC_7 (int *,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int *) ;
 struct usb_device* FUNC_12 (struct usb_interface*) ;
 int FUNC_13 (struct kaweth_device*,char*,int,int) ;
 int VAR_11 ;
 int FUNC_14 (struct kaweth_device*) ;
 int FUNC_15 (struct kaweth_device*) ;
 int VAR_12 ;
 int FUNC_16 (struct kaweth_device*,int) ;
 scalar_t__ FUNC_17 (struct kaweth_device*,int ) ;
 scalar_t__ FUNC_18 (struct kaweth_device*,int ) ;
 int FUNC_19 (struct kaweth_device*,int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (scalar_t__* const*,scalar_t__* const*,int) ;
 int FUNC_22 (int ,scalar_t__* const*,int) ;
 struct kaweth_device* FUNC_23 (struct net_device*) ;
 int VAR_13 ;
 scalar_t__ FUNC_24 (struct net_device*) ;
 int FUNC_25 (int *) ;
 void* FUNC_26 (int ,int ) ;
 void* FUNC_27 (struct usb_device*,int ,int ,int *) ;
 int FUNC_28 (struct usb_device*,int ,void*,int ) ;
 int FUNC_29 (void*) ;
 int FUNC_30 (struct usb_interface*,struct kaweth_device*) ;

__attribute__((used)) static int FUNC_31(
  struct usb_interface *VAR_14,
  const struct usb_device_id *VAR_15
 )
{
 struct usb_device *VAR_16 = FUNC_12(VAR_14);
 struct kaweth_device *VAR_17;
 struct net_device *VAR_18;
 const eth_addr_t VAR_19 = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
 int VAR_20 = 0;

 FUNC_5("Kawasaki Device Probe (Device number:%d): 0x%4.4x:0x%4.4x:0x%4.4x",
   VAR_16->devnum,
   FUNC_20(VAR_16->descriptor.idVendor),
   FUNC_20(VAR_16->descriptor.idProduct),
   FUNC_20(VAR_16->descriptor.bcdDevice));

 FUNC_5("Device at %p", VAR_16);

 FUNC_5("Descriptor length: %x type: %x",
   (int)VAR_16->descriptor.bLength,
   (int)VAR_16->descriptor.bDescriptorType);

 VAR_18 = FUNC_4(sizeof(*VAR_17));
 if (!VAR_18)
  return -VAR_1;

 VAR_17 = FUNC_23(VAR_18);
 VAR_17->dev = VAR_16;
 VAR_17->net = VAR_18;

 FUNC_25(&VAR_17->device_lock);
 FUNC_11(&VAR_17->term_wait);

 FUNC_5("Resetting.");

 FUNC_15(VAR_17);






 if (FUNC_20(VAR_16->descriptor.bcdDevice) >> 8) {
  FUNC_6(&VAR_14->dev, "Firmware present in device.\n");
 } else {

  FUNC_6(&VAR_14->dev, "Downloading firmware...\n");
  VAR_17->firmware_buf = (__u8 *)FUNC_3(VAR_2);
  if ((VAR_20 = FUNC_13(VAR_17,
            "kaweth/new_code.bin",
            100,
            2)) < 0) {
   FUNC_8("Error downloading firmware (%d)", VAR_20);
   goto err_fw;
  }

  if ((VAR_20 = FUNC_13(VAR_17,
            "kaweth/new_code_fix.bin",
            100,
            3)) < 0) {
   FUNC_8("Error downloading firmware fix (%d)", VAR_20);
   goto err_fw;
  }

  if ((VAR_20 = FUNC_13(VAR_17,
            "kaweth/trigger_code.bin",
            126,
            2)) < 0) {
   FUNC_8("Error downloading trigger code (%d)", VAR_20);
   goto err_fw;

  }

  if ((VAR_20 = FUNC_13(VAR_17,
            "kaweth/trigger_code_fix.bin",
            126,
            3)) < 0) {
   FUNC_8("Error downloading trigger code fix (%d)", VAR_20);
   goto err_fw;
  }


  if ((VAR_20 = FUNC_19(VAR_17, 126)) < 0) {
   FUNC_8("Error triggering firmware (%d)", VAR_20);
   goto err_fw;
  }


  FUNC_6(&VAR_14->dev, "Firmware loaded.  I'll be back...\n");
err_fw:
  FUNC_10((unsigned long)VAR_17->firmware_buf);
  FUNC_9(VAR_18);
  return -VAR_0;
 }

 VAR_20 = FUNC_14(VAR_17);

 if(VAR_20 < 0) {
  FUNC_8("Error reading configuration (%d), no net device created", VAR_20);
  goto err_free_netdev;
 }

 FUNC_6(&VAR_14->dev, "Statistics collection: %x\n", VAR_17->configuration.statistics_mask);
 FUNC_6(&VAR_14->dev, "Multicast filter limit: %x\n", VAR_17->configuration.max_multicast_filters & ((1 << 15) - 1));
 FUNC_6(&VAR_14->dev, "MTU: %d\n", FUNC_20(VAR_17->configuration.segment_size));
 FUNC_6(&VAR_14->dev, "Read MAC address %2.2x:%2.2x:%2.2x:%2.2x:%2.2x:%2.2x\n",
   (int)VAR_17->configuration.hw_addr[0],
   (int)VAR_17->configuration.hw_addr[1],
   (int)VAR_17->configuration.hw_addr[2],
   (int)VAR_17->configuration.hw_addr[3],
   (int)VAR_17->configuration.hw_addr[4],
   (int)VAR_17->configuration.hw_addr[5]);

 if(!FUNC_21(&VAR_17->configuration.hw_addr,
                   &VAR_19,
     sizeof(VAR_19))) {
  FUNC_8("Firmware not functioning properly, no net device created");
  goto err_free_netdev;
 }

 if(FUNC_18(VAR_17, VAR_4) < 0) {
  FUNC_5("Error setting URB size");
  goto err_free_netdev;
 }

 if(FUNC_17(VAR_17, VAR_8) < 0) {
  FUNC_8("Error setting SOFS wait");
  goto err_free_netdev;
 }

 VAR_20 = FUNC_16(VAR_17,
                                           VAR_6 |
                                           VAR_5 |
                                           VAR_7);

 if(VAR_20 < 0) {
  FUNC_8("Error setting receive filter");
  goto err_free_netdev;
 }

 FUNC_5("Initializing net device.");

 VAR_17->intf = VAR_14;

 VAR_17->tx_urb = FUNC_26(0, VAR_2);
 if (!VAR_17->tx_urb)
  goto err_free_netdev;
 VAR_17->rx_urb = FUNC_26(0, VAR_2);
 if (!VAR_17->rx_urb)
  goto err_only_tx;
 VAR_17->irq_urb = FUNC_26(0, VAR_2);
 if (!VAR_17->irq_urb)
  goto err_tx_and_rx;

 VAR_17->intbuffer = FUNC_27( VAR_17->dev,
      VAR_3,
      VAR_2,
      &VAR_17->intbufferhandle);
 if (!VAR_17->intbuffer)
  goto err_tx_and_rx_and_irq;
 VAR_17->rx_buf = FUNC_27( VAR_17->dev,
      VAR_4,
      VAR_2,
      &VAR_17->rxbufferhandle);
 if (!VAR_17->rx_buf)
  goto err_all_but_rxbuf;

 FUNC_22(VAR_18->broadcast, &VAR_19, sizeof(VAR_19));
 FUNC_22(VAR_18->dev_addr, &VAR_17->configuration.hw_addr,
               sizeof(VAR_17->configuration.hw_addr));

 VAR_18->netdev_ops = &VAR_11;
 VAR_18->watchdog_timeo = VAR_9;
 VAR_18->mtu = FUNC_20(VAR_17->configuration.segment_size);
 FUNC_1(VAR_18, &VAR_13);


 FUNC_0(&VAR_17->lowmem_work, VAR_12);
 FUNC_30(VAR_14, VAR_17);







 FUNC_2(VAR_18, &VAR_14->dev);
 if (FUNC_24(VAR_18) != 0) {
  FUNC_8("Error registering netdev.");
  goto err_intfdata;
 }

 FUNC_6(&VAR_14->dev, "kaweth interface created at %s\n",
   VAR_17->net->name);

 FUNC_5("Kaweth probe returning.");

 return 0;

err_intfdata:
 FUNC_30(VAR_14, ((void*)0));
 FUNC_28(VAR_17->dev, VAR_4, (void *)VAR_17->rx_buf, VAR_17->rxbufferhandle);
err_all_but_rxbuf:
 FUNC_28(VAR_17->dev, VAR_3, (void *)VAR_17->intbuffer, VAR_17->intbufferhandle);
err_tx_and_rx_and_irq:
 FUNC_29(VAR_17->irq_urb);
err_tx_and_rx:
 FUNC_29(VAR_17->rx_urb);
err_only_tx:
 FUNC_29(VAR_17->tx_urb);
err_free_netdev:
 FUNC_9(VAR_18);

 return -VAR_0;
}
