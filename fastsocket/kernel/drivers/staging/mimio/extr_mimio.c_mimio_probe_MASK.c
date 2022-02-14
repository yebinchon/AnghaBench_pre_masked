
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_18__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_8__* endpoint; TYPE_5__ desc; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_13__ {int * parent; } ;
struct TYPE_16__ {int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {TYPE_11__ dev; TYPE_3__ descriptor; } ;
struct TYPE_19__ {TYPE_9__* urb; int dma; TYPE_7__* desc; int * buf; } ;
struct TYPE_14__ {TYPE_9__* urb; int dma; TYPE_7__* desc; int * buf; } ;
struct TYPE_17__ {int buf; int q; int p; } ;
struct mimio {int present; int greeted; struct input_dev* idev; int rxhandler; TYPE_6__ in; struct usb_device* udev; int phys; TYPE_1__ out; int txlock; int waitq; TYPE_4__ pktbuf; struct usb_interface* uifc; } ;
struct TYPE_15__ {void* version; void* product; void* vendor; int bustype; } ;
struct input_dev {int* evbit; int* keybit; int* absbit; int* absmax; int* absfuzz; TYPE_11__ dev; int phys; int name; scalar_t__* absflat; scalar_t__* absmin; TYPE_2__ id; int close; int open; } ;
struct TYPE_22__ {struct usb_device* dev; int transfer_flags; int transfer_dma; } ;
struct TYPE_20__ {int bInterval; int bEndpointAddress; } ;
struct TYPE_21__ {TYPE_7__ desc; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 size_t FUNC_2 (size_t) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
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
 int FUNC_3 (TYPE_11__*,char*,...) ;
 int FUNC_4 (TYPE_11__*,char*,...) ;
 int FUNC_5 (int *) ;
 struct input_dev* FUNC_6 () ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*,size_t,int ,int ,int ,int ) ;
 int FUNC_9 (struct input_dev*,struct mimio*) ;
 struct usb_device* FUNC_10 (struct usb_interface*) ;
 struct mimio* FUNC_11 (int,int ) ;
 void* FUNC_12 (int ) ;
 int VAR_24 ;
 int FUNC_13 (struct mimio*) ;
 int FUNC_14 (struct mimio*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int,int*) ;
 int FUNC_17 (int ,int ,char*,char*) ;
 int FUNC_18 (int *) ;
 void* FUNC_19 (int ,int ) ;
 void* FUNC_20 (struct usb_device*,int,int ,int *) ;
 int FUNC_21 (TYPE_9__*,struct usb_device*,int,int *,int,int ,struct mimio*,int ) ;
 int FUNC_22 (struct usb_device*,char*,int) ;
 int FUNC_23 (struct usb_device*,int,int ) ;
 int FUNC_24 (int) ;
 int FUNC_25 (struct usb_device*,int ) ;
 int FUNC_26 (struct usb_interface*,struct mimio*) ;
 int FUNC_27 (struct usb_device*,int ) ;
 int FUNC_28 (TYPE_9__*,int ) ;

__attribute__((used)) static int FUNC_29(struct usb_interface *VAR_30,
         const struct usb_device_id *VAR_31)
{
 char VAR_32[64];
 int VAR_33, VAR_34;
 struct mimio *VAR_35;
 struct usb_device *VAR_36;
 struct usb_host_interface *VAR_37;
 struct input_dev *VAR_38;
 int VAR_39 = 0;
 int VAR_40;

 VAR_36 = FUNC_10(VAR_30);

 VAR_35 = FUNC_11(sizeof(struct mimio), VAR_17);
 if (!VAR_35)
  return -VAR_14;

 VAR_38 = FUNC_6();
 if (!VAR_38) {
  FUNC_13(VAR_35);
  return -VAR_14;
 }

 VAR_35->uifc = VAR_30;
 VAR_35->udev = VAR_36;
 VAR_35->pktbuf.p = VAR_35->pktbuf.buf;
 VAR_35->pktbuf.q = VAR_35->pktbuf.buf;

 VAR_35->idev = VAR_38;
 FUNC_5(&VAR_35->waitq);
 FUNC_18(&VAR_35->txlock);
 VAR_37 = VAR_30->cur_altsetting;

 if (VAR_37->desc.bNumEndpoints != 2) {
  FUNC_4(&VAR_36->dev, "Unexpected endpoint count: %d.\n",
   VAR_37->desc.bNumEndpoints);
  FUNC_13(VAR_35);
  return -VAR_13;
 }

 VAR_35->in.desc = &(VAR_37->endpoint[0].desc);
 VAR_35->out.desc = &(VAR_37->endpoint[1].desc);

 VAR_35->in.buf = FUNC_20(VAR_36, VAR_20, VAR_17,
      &VAR_35->in.dma);
 VAR_35->out.buf = FUNC_20(VAR_36, VAR_20, VAR_17,
       &VAR_35->out.dma);

 if (VAR_35->in.buf == ((void*)0) || VAR_35->out.buf == ((void*)0)) {
  FUNC_4(&VAR_36->dev, "usb_buffer_alloc failure.\n");
  FUNC_13(VAR_35);
  return -VAR_14;
 }

 VAR_35->in.urb = FUNC_19(0, VAR_17);
 VAR_35->out.urb = FUNC_19(0, VAR_17);

 if (VAR_35->in.urb == ((void*)0) || VAR_35->out.urb == ((void*)0)) {
  FUNC_4(&VAR_36->dev, "usb_alloc_urb failure.\n");
  FUNC_13(VAR_35);
  return -VAR_14;
 }




 VAR_33 = FUNC_25(VAR_36, VAR_35->in.desc->bEndpointAddress);
 VAR_34 = FUNC_23(VAR_36, VAR_33, FUNC_24(VAR_33));
 if (VAR_34 > VAR_20)
  VAR_34 = VAR_20;
 FUNC_21(VAR_35->in.urb, VAR_36, VAR_33, VAR_35->in.buf, VAR_34,
    VAR_25, VAR_35, VAR_35->in.desc->bInterval);
 VAR_35->in.urb->transfer_dma = VAR_35->in.dma;
 VAR_35->in.urb->transfer_flags |= VAR_23;




 VAR_33 = FUNC_27(VAR_36, VAR_35->out.desc->bEndpointAddress);
 VAR_34 = FUNC_23(VAR_36, VAR_33, FUNC_24(VAR_33));
 if (VAR_34 > VAR_20)
  VAR_34 = VAR_20;
 FUNC_21(VAR_35->out.urb, VAR_36, VAR_33, VAR_35->out.buf, VAR_34,
    VAR_26, VAR_35, VAR_35->out.desc->bInterval);
 VAR_35->out.urb->transfer_dma = VAR_35->out.dma;
 VAR_35->out.urb->transfer_flags |= VAR_23;




 FUNC_22(VAR_36, VAR_32, 64);
 FUNC_17(VAR_35->phys, VAR_19, "%s/input0", VAR_32);
 FUNC_9(VAR_38, VAR_35);

 VAR_38->open = VAR_28;
 VAR_38->close = VAR_24;
 VAR_38->name = VAR_27;
 VAR_38->phys = VAR_35->phys;
 VAR_38->dev.parent = &VAR_30->dev;

 VAR_38->id.bustype = VAR_11;
 VAR_38->id.vendor = FUNC_12(VAR_36->descriptor.idVendor);
 VAR_38->id.product = FUNC_12(VAR_36->descriptor.idProduct);
 VAR_38->id.version = FUNC_12(VAR_36->descriptor.bcdDevice);

 VAR_38->evbit[0] |= FUNC_0(VAR_16) | FUNC_0(VAR_15);
 for (VAR_40 = VAR_10; VAR_40 <= VAR_18; ++VAR_40)
  FUNC_16(VAR_40, VAR_38->keybit);

 VAR_38->keybit[FUNC_2(VAR_9)] |= FUNC_1(VAR_3) |
       FUNC_1(VAR_4) |
       FUNC_1(VAR_5) |
       FUNC_1(VAR_6) |
       FUNC_1(VAR_7) |
       FUNC_1(VAR_8);

 VAR_38->absbit[0] |= FUNC_1(VAR_1) | FUNC_1(VAR_2);
 FUNC_8(VAR_38, VAR_1, 0, VAR_21, 0, 0);
 FUNC_8(VAR_38, VAR_2, 0, VAR_22, 0, 0);
 VAR_38->absbit[FUNC_2(VAR_0)] |= FUNC_1(VAR_0);
 VAR_39 = FUNC_7(VAR_35->idev);
 if (VAR_39) {
  FUNC_4(&VAR_36->dev, "input_register_device failure (%d)\n",
   VAR_39);
  FUNC_13(VAR_35);
  return -VAR_12;
 }
 FUNC_3(&VAR_35->idev->dev, "input: %s on %s (res = %d).\n",
  VAR_38->name, VAR_38->phys, VAR_39);

 FUNC_26(VAR_30, VAR_35);
 VAR_35->present = 1;




 VAR_35->in.urb->dev = VAR_35->udev;
 VAR_39 = FUNC_28(VAR_35->in.urb, VAR_17);
 if (VAR_39) {
  FUNC_4(&VAR_35->idev->dev, "usb_submit_urb failure (%d)\n",
   VAR_39);
  FUNC_13(VAR_35);
  return -VAR_12;
 }
 FUNC_15(1024);

 VAR_39 = FUNC_14(VAR_35);
 if (VAR_39 == 0) {
  FUNC_3(&VAR_35->idev->dev, "Mimio greeted OK.\n");
  VAR_35->greeted = 1;
  VAR_35->rxhandler = VAR_29;
 } else {
  FUNC_3(&VAR_35->idev->dev, "Mimio greet Failure (%d)\n", VAR_39);
 }

 return 0;
}
