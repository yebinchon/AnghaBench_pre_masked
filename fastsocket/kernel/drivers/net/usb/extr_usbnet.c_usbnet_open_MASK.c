
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct usbnet {int intf; int flags; int bh; scalar_t__ pkt_err; scalar_t__ pkt_cnt; struct driver_info* driver_info; TYPE_3__* net; scalar_t__ interrupt; TYPE_2__* udev; } ;
struct net_device {int dummy; } ;
struct driver_info {char* description; int (* reset ) (struct usbnet*) ;int (* check_connect ) (struct usbnet*) ;int flags; int (* manage_power ) (struct usbnet*,int) ;} ;
struct TYPE_8__ {int mtu; } ;
struct TYPE_7__ {int devpath; TYPE_1__* bus; } ;
struct TYPE_6__ {int bus_name; } ;


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
 scalar_t__ FUNC_0 (struct usbnet*) ;
 scalar_t__ FUNC_1 (struct usbnet*) ;
 int FUNC_2 (int ,int *) ;
 int VAR_10 ;
 struct usbnet* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct usbnet*,int ,TYPE_3__*,char*,int) ;
 int FUNC_5 (struct usbnet*,int ,TYPE_3__*,char*,int) ;
 int FUNC_6 (struct usbnet*,int ,TYPE_3__*,char*,int,int,int ,char*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct usbnet*) ;
 int FUNC_10 (struct usbnet*) ;
 int FUNC_11 (struct usbnet*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct usbnet*,int ) ;

int FUNC_16 (struct net_device *VAR_11)
{
 struct usbnet *VAR_12 = FUNC_3(VAR_11);
 int VAR_13;
 struct driver_info *VAR_14 = VAR_12->driver_info;

 if ((VAR_13 = FUNC_13(VAR_12->intf)) < 0) {
  FUNC_6(VAR_12, VAR_10, VAR_12->net,
      "resumption fail (%d) usbnet usb-%s-%s, %s\n",
      VAR_13,
      VAR_12->udev->bus->bus_name,
      VAR_12->udev->devpath,
      VAR_14->description);
  goto done_nopm;
 }


 if (VAR_14->reset && (VAR_13 = VAR_14->reset (VAR_12)) < 0) {
  FUNC_6(VAR_12, VAR_10, VAR_12->net,
      "open reset fail (%d) usbnet usb-%s-%s, %s\n",
      VAR_13,
      VAR_12->udev->bus->bus_name,
      VAR_12->udev->devpath,
      VAR_14->description);
  goto done;
 }


 if (VAR_14->check_connect && (VAR_13 = VAR_14->check_connect (VAR_12)) < 0) {
  FUNC_4(VAR_12, VAR_10, VAR_12->net, "can't open; %d\n", VAR_13);
  goto done;
 }


 if (VAR_12->interrupt) {
  VAR_13 = FUNC_15(VAR_12, VAR_9);
  if (VAR_13 < 0) {
   FUNC_5(VAR_12, VAR_10, VAR_12->net,
      "intr submit %d\n", VAR_13);
   goto done;
  }
 }

 FUNC_8(VAR_0, &VAR_12->flags);
 FUNC_7 (VAR_11);
 FUNC_6(VAR_12, VAR_10, VAR_12->net,
     "open: enable queueing (rx %d, tx %d) mtu %d %s framing\n",
     (int)FUNC_0(VAR_12), (int)FUNC_1(VAR_12),
     VAR_12->net->mtu,
     (VAR_12->driver_info->flags & VAR_5) ? "NetChip" :
     (VAR_12->driver_info->flags & VAR_4) ? "GeneSys" :
     (VAR_12->driver_info->flags & VAR_7) ? "Zaurus" :
     (VAR_12->driver_info->flags & VAR_6) ? "RNDIS" :
     (VAR_12->driver_info->flags & VAR_3) ? "ASIX" :
     "simple");


 VAR_12->pkt_cnt = 0;
 VAR_12->pkt_err = 0;
 FUNC_2(VAR_2, &VAR_12->flags);


 FUNC_12 (&VAR_12->bh);
 if ((VAR_14->flags & VAR_8) && VAR_14->manage_power) {
  VAR_13 = VAR_14->manage_power(VAR_12, 1);
  if (VAR_13 < 0) {
   VAR_13 = 0;
   FUNC_8(VAR_1, &VAR_12->flags);
  } else {
   FUNC_14(VAR_12->intf);
  }
 }
 return VAR_13;
done:
 FUNC_14(VAR_12->intf);
done_nopm:
 return VAR_13;
}
