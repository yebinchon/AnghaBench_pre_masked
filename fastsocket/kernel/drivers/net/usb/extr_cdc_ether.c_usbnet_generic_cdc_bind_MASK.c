
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {int hard_mtu; TYPE_6__* udev; struct usb_host_endpoint* status; int data; } ;
struct usb_interface_descriptor {int bNumEndpoints; int bInterfaceClass; } ;
struct usb_interface {int dev; TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {int bInterval; int wMaxPacketSize; } ;
struct usb_host_endpoint {int* extra; int extralen; struct usb_endpoint_descriptor desc; } ;
struct usb_driver {int dummy; } ;
struct usb_cdc_notification {int dummy; } ;
struct usb_cdc_acm_descriptor {int bmCapabilities; } ;
struct cdc_state {struct usb_interface* data; struct usb_interface* control; TYPE_1__* ether; TYPE_5__* u; TYPE_4__* header; } ;
struct TYPE_12__ {int dev; TYPE_2__* actconfig; } ;
struct TYPE_11__ {int bLength; int bMasterInterface0; int bSlaveInterface0; } ;
struct TYPE_10__ {int bLength; } ;
struct TYPE_9__ {int* extra; int extralen; struct usb_host_endpoint* endpoint; struct usb_interface_descriptor desc; } ;
struct TYPE_8__ {int extralen; int* extra; } ;
struct TYPE_7__ {int bLength; int wMaxSegmentSize; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*) ;
 struct usb_driver* FUNC_2 (struct usb_interface*) ;
 scalar_t__ FUNC_3 (struct usb_interface_descriptor*) ;
 scalar_t__ FUNC_4 (struct usb_interface_descriptor*) ;
 scalar_t__ FUNC_5 (struct usb_interface_descriptor*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct cdc_state*,int ,int) ;
 int FUNC_8 (struct usb_driver*,struct usb_interface*,struct usbnet*) ;
 int FUNC_9 (struct usb_driver*,struct usb_interface*) ;
 int FUNC_10 (struct usb_endpoint_descriptor*) ;
 void* FUNC_11 (TYPE_6__*,int) ;
 int FUNC_12 (struct usb_interface*,int *) ;
 int FUNC_13 (struct usbnet*,struct usb_interface*) ;

int FUNC_14(struct usbnet *VAR_4, struct usb_interface *VAR_5)
{
 u8 *VAR_6 = VAR_5->cur_altsetting->extra;
 int VAR_7 = VAR_5->cur_altsetting->extralen;
 struct usb_interface_descriptor *VAR_8;
 struct cdc_state *VAR_9 = (void *) &VAR_4->data;
 int VAR_10;
 int VAR_11;
 struct usb_driver *VAR_12 = FUNC_2(VAR_5);

 if (sizeof VAR_4->data < sizeof *VAR_9)
  return -VAR_0;




 if (VAR_7 == 0 && VAR_4->udev->actconfig->extralen) {



  VAR_6 = VAR_4->udev->actconfig->extra;
  VAR_7 = VAR_4->udev->actconfig->extralen;
  if (VAR_7)
   FUNC_0(&VAR_5->dev,
    "CDC descriptors on config\n");
 }




 if (VAR_7 == 0) {
  struct usb_host_endpoint *VAR_13;

  VAR_13 = VAR_5->cur_altsetting->endpoint;
  if (VAR_13) {
   VAR_6 = VAR_13->extra;
   VAR_7 = VAR_13->extralen;
  }
  if (VAR_7)
   FUNC_0(&VAR_5->dev,
    "CDC descriptors on endpoint\n");
 }




 VAR_11 = FUNC_4(&VAR_5->cur_altsetting->desc)
  || FUNC_3(&VAR_5->cur_altsetting->desc)
  || FUNC_5(&VAR_5->cur_altsetting->desc);

 FUNC_7(VAR_9, 0, sizeof *VAR_9);
 VAR_9->control = VAR_5;
 while (VAR_7 > 3) {
  if (VAR_6 [1] != VAR_3)
   goto next_desc;
  switch (VAR_6 [2]) {
  case 129:
   if (VAR_9->header) {
    FUNC_0(&VAR_5->dev, "extra CDC header\n");
    goto bad_desc;
   }
   VAR_9->header = (void *) VAR_6;
   if (VAR_9->header->bLength != sizeof *VAR_9->header) {
    FUNC_0(&VAR_5->dev, "CDC header len %u\n",
     VAR_9->header->bLength);
    goto bad_desc;
   }
   break;
  case 131:



   if (VAR_11) {
    struct usb_cdc_acm_descriptor *VAR_14;

    VAR_14 = (void *) VAR_6;
    if (VAR_14->bmCapabilities) {
     FUNC_0(&VAR_5->dev,
      "ACM capabilities %02x, "
      "not really RNDIS?\n",
      VAR_14->bmCapabilities);
     goto bad_desc;
    }
   }
   break;
  case 128:
   if (VAR_9->u) {
    FUNC_0(&VAR_5->dev, "extra CDC union\n");
    goto bad_desc;
   }
   VAR_9->u = (void *) VAR_6;
   if (VAR_9->u->bLength != sizeof *VAR_9->u) {
    FUNC_0(&VAR_5->dev, "CDC union len %u\n",
     VAR_9->u->bLength);
    goto bad_desc;
   }





   VAR_9->control = FUNC_11(VAR_4->udev,
      VAR_9->u->bMasterInterface0);
   VAR_9->data = FUNC_11(VAR_4->udev,
      VAR_9->u->bSlaveInterface0);
   if (!VAR_9->control || !VAR_9->data) {
    FUNC_0(&VAR_5->dev,
     "master #%u/%p slave #%u/%p\n",
     VAR_9->u->bMasterInterface0,
     VAR_9->control,
     VAR_9->u->bSlaveInterface0,
     VAR_9->data);
    goto bad_desc;
   }
   if (VAR_9->control != VAR_5) {
    FUNC_0(&VAR_5->dev, "bogus CDC Union\n");



    if (VAR_9->data == VAR_5) {
     VAR_9->data = VAR_9->control;
     VAR_9->control = VAR_5;
    } else
     goto bad_desc;
   }


   VAR_8 = &VAR_9->data->cur_altsetting->desc;
   if (VAR_8->bInterfaceClass != VAR_2) {
    FUNC_0(&VAR_5->dev, "slave class %u\n",
     VAR_8->bInterfaceClass);
    goto bad_desc;
   }
   break;
  case 130:
   if (VAR_9->ether) {
    FUNC_0(&VAR_5->dev, "extra CDC ether\n");
    goto bad_desc;
   }
   VAR_9->ether = (void *) VAR_6;
   if (VAR_9->ether->bLength != sizeof *VAR_9->ether) {
    FUNC_0(&VAR_5->dev, "CDC ether len %u\n",
     VAR_9->ether->bLength);
    goto bad_desc;
   }
   VAR_4->hard_mtu = FUNC_6(
      VAR_9->ether->wMaxSegmentSize);



   break;
  }
next_desc:
  VAR_7 -= VAR_6 [0];
  VAR_6 += VAR_6 [0];
 }





 if (VAR_11 && !VAR_9->u) {
  VAR_9->control = FUNC_11(VAR_4->udev, 0);
  VAR_9->data = FUNC_11(VAR_4->udev, 1);
  if (!VAR_9->control || !VAR_9->data) {
   FUNC_0(&VAR_5->dev,
    "rndis: master #0/%p slave #1/%p\n",
    VAR_9->control,
    VAR_9->data);
   goto bad_desc;
  }

 } else if (!VAR_9->header || !VAR_9->u || (!VAR_11 && !VAR_9->ether)) {
  FUNC_0(&VAR_5->dev, "missing cdc %s%s%sdescriptor\n",
   VAR_9->header ? "" : "header ",
   VAR_9->u ? "" : "union ",
   VAR_9->ether ? "" : "ether ");
  goto bad_desc;
 }




 VAR_10 = FUNC_8(VAR_12, VAR_9->data, VAR_4);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_13(VAR_4, VAR_9->data);
 if (VAR_10 < 0) {

  FUNC_12(VAR_9->data, ((void*)0));
  FUNC_9(VAR_12, VAR_9->data);
  return VAR_10;
 }


 VAR_4->status = ((void*)0);
 if (VAR_9->control->cur_altsetting->desc.bNumEndpoints == 1) {
  struct usb_endpoint_descriptor *VAR_15;

  VAR_4->status = &VAR_9->control->cur_altsetting->endpoint [0];
  VAR_15 = &VAR_4->status->desc;
  if (!FUNC_10(VAR_15)
    || (FUNC_6(VAR_15->wMaxPacketSize)
     < sizeof(struct usb_cdc_notification))
    || !VAR_15->bInterval) {
   FUNC_0(&VAR_5->dev, "bad notification endpoint\n");
   VAR_4->status = ((void*)0);
  }
 }
 if (VAR_11 && !VAR_4->status) {
  FUNC_0(&VAR_5->dev, "missing RNDIS status endpoint\n");
  FUNC_12(VAR_9->data, ((void*)0));
  FUNC_9(VAR_12, VAR_9->data);
  return -VAR_1;
 }
 return 0;

bad_desc:
 FUNC_1(&VAR_4->udev->dev, "bad CDC descriptors\n");
 return -VAR_1;
}
