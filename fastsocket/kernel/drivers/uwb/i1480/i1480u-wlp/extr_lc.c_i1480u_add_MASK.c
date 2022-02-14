
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct wlp_tx_hdr {int dummy; } ;
struct wlp {int start_queue; int stop_queue; int fill_device_info; int xmit_frame; } ;
struct TYPE_7__ {int data; } ;
struct uwb_dev {TYPE_1__ mac_addr; } ;
struct uwb_rc {struct uwb_dev uwb_dev; } ;
struct usb_interface {TYPE_3__* cur_altsetting; int dev; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device {int dummy; } ;
struct untd_hdr_cmp {int dummy; } ;
struct net_device {int mtu; int tx_queue_len; int watchdog_timeo; int * netdev_ops; int features; int flags; scalar_t__ hard_header_len; int dev_addr; } ;
struct TYPE_10__ {int restart_ts; int threshold; int max; } ;
struct i1480u {TYPE_5__* usb_dev; TYPE_4__ tx_inflight; int notif_buffer; int * notif_urb; struct usb_interface* usb_iface; struct net_device* net_dev; struct wlp wlp; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_9__ {TYPE_2__* endpoint; } ;
struct TYPE_8__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int VAR_18 ;
 int FUNC_3 (int ,int ,int) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,struct usb_device*,int ,int ,int,int ,struct i1480u*,int ) ;
 TYPE_5__* FUNC_6 (struct usb_device*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (struct usb_device*,int ) ;
 int FUNC_9 (struct usb_interface*,struct i1480u*) ;
 struct uwb_rc* FUNC_10 (int *) ;
 int FUNC_11 (struct uwb_rc*) ;
 int FUNC_12 (struct wlp*) ;
 int FUNC_13 (struct wlp*,struct uwb_rc*,struct net_device*) ;

__attribute__((used)) static
int FUNC_14(struct i1480u *VAR_19, struct usb_interface *VAR_20)
{
 int VAR_21 = -VAR_0;
 struct wlp *VAR_22 = &VAR_19->wlp;
 struct usb_device *VAR_23 = FUNC_2(VAR_20);
 struct net_device *VAR_24 = VAR_19->net_dev;
 struct uwb_rc *VAR_25;
 struct uwb_dev *VAR_26;




 VAR_19->usb_dev = FUNC_6(VAR_23);
 VAR_19->usb_iface = VAR_20;
 VAR_25 = FUNC_10(&VAR_19->usb_dev->dev);
 if (VAR_25 == ((void*)0)) {
  FUNC_0(&VAR_20->dev, "Cannot get associated UWB Radio "
   "Controller\n");
  goto out;
 }
 VAR_22->xmit_frame = VAR_17;
 VAR_22->fill_device_info = VAR_12;
 VAR_22->stop_queue = VAR_16;
 VAR_22->start_queue = VAR_15;
 VAR_21 = FUNC_13(VAR_22, VAR_25, VAR_24);
 if (VAR_21 < 0) {
  FUNC_0(&VAR_20->dev, "Cannot setup WLP\n");
  goto error_wlp_setup;
 }
 VAR_21 = 0;
 FUNC_1(VAR_24);
 VAR_26 = &VAR_25->uwb_dev;


 FUNC_3(VAR_24->dev_addr, VAR_26->mac_addr.data,
        sizeof(VAR_24->dev_addr));

 VAR_24->hard_header_len = sizeof(struct untd_hdr_cmp)
  + sizeof(struct wlp_tx_hdr)
  + VAR_9
  + VAR_2;
 VAR_24->mtu = 3500;
 VAR_24->tx_queue_len = 20;



 VAR_24->flags &= ~VAR_5;
 VAR_24->features &= ~VAR_8;
 VAR_24->features &= ~VAR_6;

 VAR_24->features |= VAR_7;
 VAR_24->watchdog_timeo = 5*VAR_4;

 VAR_24->netdev_ops = &VAR_13;
 VAR_19->tx_inflight.max = VAR_10;
 VAR_19->tx_inflight.threshold = VAR_11;
 VAR_19->tx_inflight.restart_ts = VAR_18;
 FUNC_9(VAR_20, VAR_19);
 return VAR_21;




 FUNC_12(VAR_22);
error_wlp_setup:
 FUNC_11(VAR_25);
out:
 FUNC_7(VAR_19->usb_dev);
 return VAR_21;
}
