
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int endp_in; int endp_out; int endp_out2; void* rx_urb; void* tx_urb; scalar_t__ ap; int fraglist; int rxdataq; scalar_t__ removed; struct usb_device* usb; struct net_device* dev; } ;
struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dev; } ;
struct net_device {int name; int addr_len; int dev_addr; int watchdog_timeo; int * wireless_handlers; int * netdev_ops; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (struct net_device*,int *) ;
 int VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 short VAR_8 ;
 short VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct net_device* FUNC_2 (int) ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 struct usb_device* FUNC_8 (struct usb_interface*) ;
 int FUNC_9 (int) ;
 struct zd1201* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ,char*) ;
 void* FUNC_13 (int ,int ) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (struct usb_interface*,struct zd1201*) ;
 int FUNC_16 (struct zd1201*) ;
 int FUNC_17 (struct zd1201*,int ,int ,int ,int ) ;
 int FUNC_18 (struct zd1201*) ;
 int FUNC_19 (struct zd1201*) ;
 int FUNC_20 (struct usb_device*,scalar_t__) ;
 int FUNC_21 (struct zd1201*,int ,int ,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_22 (struct zd1201*,int ,char*,int,int) ;
 int FUNC_23 (struct zd1201*,int ,short) ;

__attribute__((used)) static int FUNC_24(struct usb_interface *VAR_19,
   const struct usb_device_id *VAR_20)
{
 struct zd1201 *VAR_21;
 struct net_device *VAR_22;
 struct usb_device *VAR_23;
 int VAR_24;
 short VAR_25;
 char VAR_26[VAR_2+2];

 VAR_23 = FUNC_8(VAR_19);

 VAR_22 = FUNC_2(sizeof(*VAR_21));
 if (!VAR_22)
  return -VAR_0;
 VAR_21 = FUNC_10(VAR_22);
 VAR_21->dev = VAR_22;

 VAR_21->ap = VAR_16;
 VAR_21->usb = VAR_23;
 VAR_21->removed = 0;
 FUNC_7(&VAR_21->rxdataq);
 FUNC_0(&VAR_21->fraglist);

 VAR_24 = FUNC_20(VAR_23, VAR_21->ap);
 if (VAR_24) {
  FUNC_4(&VAR_23->dev, "zd1201 firmware upload failed: %d\n", VAR_24);
  goto err_zd;
 }

 VAR_21->endp_in = 1;
 VAR_21->endp_out = 1;
 VAR_21->endp_out2 = 2;
 VAR_21->rx_urb = FUNC_13(0, VAR_1);
 VAR_21->tx_urb = FUNC_13(0, VAR_1);
 if (!VAR_21->rx_urb || !VAR_21->tx_urb)
  goto err_zd;

 FUNC_9(100);
 VAR_24 = FUNC_18(VAR_21);
 if (VAR_24)
  goto err_zd;

 VAR_24 = FUNC_23(VAR_21, VAR_11, 2312);
 if (VAR_24)
  goto err_start;

 VAR_24 = FUNC_23(VAR_21, VAR_14,
     VAR_6 | VAR_8 | VAR_9 | VAR_7);
 if (VAR_24)
  goto err_start;

 VAR_22->netdev_ops = &VAR_18;
 VAR_22->wireless_handlers = &VAR_17;
 VAR_22->watchdog_timeo = VAR_15;
 FUNC_12(VAR_22->name, "wlan%d");

 VAR_24 = FUNC_21(VAR_21, VAR_12,
     VAR_22->dev_addr, VAR_22->addr_len);
 if (VAR_24)
  goto err_start;


 *(__le16 *)VAR_26 = FUNC_3(0);
 VAR_24 = FUNC_22(VAR_21, VAR_10, VAR_26,
     VAR_2+2, 1);
 if (VAR_24)
  goto err_start;

 if (VAR_21->ap)
  VAR_25 = VAR_4;
 else
  VAR_25 = VAR_5;
 VAR_24 = FUNC_23(VAR_21, VAR_13, VAR_25);
 if (VAR_24)
  goto err_start;

 FUNC_1(VAR_22, &VAR_23->dev);

 VAR_24 = FUNC_11(VAR_22);
 if (VAR_24)
  goto err_start;
 FUNC_5(&VAR_23->dev, "%s: ZD1201 USB Wireless interface\n",
     VAR_22->name);

 FUNC_15(VAR_19, VAR_21);
 FUNC_19(VAR_21);
 FUNC_16(VAR_21);
 return 0;

err_start:

 FUNC_17(VAR_21, VAR_3, 0, 0, 0);
err_zd:
 FUNC_14(VAR_21->tx_urb);
 FUNC_14(VAR_21->rx_urb);
 FUNC_6(VAR_22);
 return VAR_24;
}
