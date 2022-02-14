
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u8 ;
struct usbnet {unsigned long* data; TYPE_10__* udev; int rx_urb_size; int * status; int out; int in; TYPE_7__* net; int hard_mtu; } ;
struct usb_interface {TYPE_8__* cur_altsetting; int dev; TYPE_9__* intf_assoc; } ;
struct usb_driver {int dummy; } ;
struct usb_cdc_union_desc {int bMasterInterface0; int bSlaveInterface0; } ;
struct usb_cdc_ncm_desc {int dummy; } ;
struct usb_cdc_mbim_desc {int dummy; } ;
struct usb_cdc_ether_desc {int iMACAddress; int wMaxSegmentSize; } ;
struct TYPE_22__ {unsigned long data; int func; } ;
struct TYPE_16__ {int * function; } ;
struct cdc_ncm_ctx {struct usb_interface* data; struct usb_interface* control; scalar_t__ rx_speed; scalar_t__ tx_speed; int rx_max; int * status_ep; TYPE_5__* out_ep; TYPE_3__* in_ep; struct usb_cdc_ether_desc const* ether_desc; struct usb_interface* intf; struct usb_cdc_mbim_desc const* mbim_desc; struct usb_cdc_union_desc const* union_desc; struct usb_cdc_ncm_desc const* func_desc; TYPE_10__* udev; TYPE_7__* netdev; int mtx; int stop; TYPE_6__ bh; TYPE_14__ tx_timer; } ;
struct TYPE_25__ {int bInterfaceCount; } ;
struct TYPE_17__ {int bInterfaceNumber; } ;
struct TYPE_24__ {int* extra; int extralen; TYPE_1__ desc; } ;
struct TYPE_23__ {int dev_addr; int * ethtool_ops; } ;
struct TYPE_20__ {int bEndpointAddress; } ;
struct TYPE_21__ {TYPE_4__ desc; } ;
struct TYPE_18__ {int bEndpointAddress; } ;
struct TYPE_19__ {TYPE_2__ desc; } ;
struct TYPE_15__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int VAR_9 ;
 int FUNC_1 (struct cdc_ncm_ctx*,struct usb_interface*) ;
 int FUNC_2 (struct cdc_ncm_ctx*) ;
 scalar_t__ FUNC_3 (struct cdc_ncm_ctx*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 struct usb_driver* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (TYPE_14__*,int ,int ) ;
 struct cdc_ncm_ctx* FUNC_8 (int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct usb_driver*,struct usb_interface*,struct usbnet*) ;
 int FUNC_12 (struct usb_driver*,struct usb_interface*) ;
 void* FUNC_13 (TYPE_10__*,int) ;
 int FUNC_14 (TYPE_10__*,int) ;
 int FUNC_15 (TYPE_10__*,int,int) ;
 int FUNC_16 (struct usb_interface*,struct usbnet*) ;
 int FUNC_17 (TYPE_10__*,int) ;
 int FUNC_18 (struct usbnet*,int ) ;

int FUNC_19(struct usbnet *VAR_12, struct usb_interface *VAR_13, u8 VAR_14)
{
 struct cdc_ncm_ctx *VAR_15;
 struct usb_driver *VAR_16;
 u8 *VAR_17;
 int VAR_18;
 int VAR_19;
 u8 VAR_20;

 VAR_15 = FUNC_8(sizeof(*VAR_15), VAR_5);
 if (!VAR_15)
  return -VAR_4;

 FUNC_7(&VAR_15->tx_timer, VAR_2, VAR_6);
 VAR_15->tx_timer.function = &VAR_10;
 VAR_15->bh.data = (unsigned long)VAR_15;
 VAR_15->bh.func = VAR_11;
 FUNC_0(&VAR_15->stop, 0);
 FUNC_10(&VAR_15->mtx);
 VAR_15->netdev = VAR_12->net;


 VAR_12->data[0] = (unsigned long)VAR_15;


 VAR_16 = FUNC_6(VAR_13);
 VAR_17 = VAR_13->cur_altsetting->extra;
 VAR_18 = VAR_13->cur_altsetting->extralen;

 VAR_15->udev = VAR_12->udev;
 VAR_15->intf = VAR_13;


 while ((VAR_18 > 0) && (VAR_17[0] > 2) && (VAR_17[0] <= VAR_18)) {

  if (VAR_17[1] != VAR_7)
   goto advance;

  switch (VAR_17[2]) {
  case 128:
   if (VAR_17[0] < sizeof(*(VAR_15->union_desc)))
    break;

   VAR_15->union_desc =
     (const struct usb_cdc_union_desc *)VAR_17;

   VAR_15->control = FUNC_13(VAR_12->udev,
     VAR_15->union_desc->bMasterInterface0);
   VAR_15->data = FUNC_13(VAR_12->udev,
     VAR_15->union_desc->bSlaveInterface0);
   break;

  case 131:
   if (VAR_17[0] < sizeof(*(VAR_15->ether_desc)))
    break;

   VAR_15->ether_desc =
     (const struct usb_cdc_ether_desc *)VAR_17;
   VAR_12->hard_mtu =
    FUNC_9(VAR_15->ether_desc->wMaxSegmentSize);

   if (VAR_12->hard_mtu < VAR_1)
    VAR_12->hard_mtu = VAR_1;
   else if (VAR_12->hard_mtu > VAR_0)
    VAR_12->hard_mtu = VAR_0;
   break;

  case 129:
   if (VAR_17[0] < sizeof(*(VAR_15->func_desc)))
    break;

   VAR_15->func_desc = (const struct usb_cdc_ncm_desc *)VAR_17;
   break;

  case 130:
   if (VAR_17[0] < sizeof(*(VAR_15->mbim_desc)))
    break;

   VAR_15->mbim_desc = (const struct usb_cdc_mbim_desc *)VAR_17;
   break;

  default:
   break;
  }
advance:

  VAR_19 = VAR_17[0];
  VAR_17 += VAR_19;
  VAR_18 -= VAR_19;
 }


 if (!VAR_15->union_desc && VAR_13->intf_assoc && VAR_13->intf_assoc->bInterfaceCount == 2) {
  VAR_15->control = VAR_13;
  VAR_15->data = FUNC_13(VAR_12->udev, VAR_13->cur_altsetting->desc.bInterfaceNumber + 1);
  FUNC_4(&VAR_13->dev, "CDC Union missing - got slave from IAD\n");
 }


 if ((VAR_15->control == ((void*)0)) || (VAR_15->data == ((void*)0)) ||
     ((!VAR_15->mbim_desc) && ((VAR_15->ether_desc == ((void*)0)) || (VAR_15->control != VAR_13))))
  goto error;


 if (VAR_15->data != VAR_15->control) {
  VAR_19 = FUNC_11(VAR_16, VAR_15->data, VAR_12);
  if (VAR_19)
   goto error;
 }

 VAR_20 = VAR_15->data->cur_altsetting->desc.bInterfaceNumber;


 VAR_19 = FUNC_15(VAR_12->udev, VAR_20, 0);
 if (VAR_19)
  goto error2;


 if (FUNC_3(VAR_15))
  goto error2;


 VAR_19 = FUNC_15(VAR_12->udev, VAR_20, VAR_14);
 if (VAR_19)
  goto error2;

 FUNC_1(VAR_15, VAR_15->data);
 FUNC_1(VAR_15, VAR_15->control);

 if ((VAR_15->in_ep == ((void*)0)) || (VAR_15->out_ep == ((void*)0)) ||
     (VAR_15->status_ep == ((void*)0)))
  goto error2;

 VAR_12->net->ethtool_ops = &VAR_9;

 FUNC_16(VAR_15->data, VAR_12);
 FUNC_16(VAR_15->control, VAR_12);
 FUNC_16(VAR_15->intf, VAR_12);

 if (VAR_15->ether_desc) {
  VAR_19 = FUNC_18(VAR_12, VAR_15->ether_desc->iMACAddress);
  if (VAR_19)
   goto error2;
  FUNC_5(&VAR_12->udev->dev, "MAC-Address: %pM\n", VAR_12->net->dev_addr);
 }


 VAR_12->in = FUNC_14(VAR_12->udev,
  VAR_15->in_ep->desc.bEndpointAddress & VAR_8);
 VAR_12->out = FUNC_17(VAR_12->udev,
  VAR_15->out_ep->desc.bEndpointAddress & VAR_8);
 VAR_12->status = VAR_15->status_ep;
 VAR_12->rx_urb_size = VAR_15->rx_max;

 VAR_15->tx_speed = VAR_15->rx_speed = 0;
 return 0;

error2:
 FUNC_16(VAR_15->control, ((void*)0));
 FUNC_16(VAR_15->data, ((void*)0));
 if (VAR_15->data != VAR_15->control)
  FUNC_12(VAR_16, VAR_15->data);
error:
 FUNC_2((struct cdc_ncm_ctx *)VAR_12->data[0]);
 VAR_12->data[0] = 0;
 FUNC_5(&VAR_12->udev->dev, "bind() failure\n");
 return -VAR_3;
}
