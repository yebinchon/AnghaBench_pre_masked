
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct ati_remote {TYPE_3__* interface; TYPE_4__* out_urb; int outbuf_dma; TYPE_2__* endpoint_out; int outbuf; TYPE_4__* irq_urb; int inbuf_dma; TYPE_1__* endpoint_in; int inbuf; int wait; struct usb_device* udev; } ;
struct TYPE_8__ {int transfer_flags; int transfer_dma; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int bInterval; int bEndpointAddress; } ;
struct TYPE_5__ {int bInterval; int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ati_remote*,int,int ) ;
 int FUNC_1 (int *,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,struct usb_device*,int,int ,int,int ,struct ati_remote*,int ) ;
 int FUNC_4 (struct usb_device*,int,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct usb_device*,int ) ;
 int FUNC_7 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct ati_remote *VAR_7)
{
 struct usb_device *VAR_8 = VAR_7->udev;
 int VAR_9, VAR_10;

 FUNC_2(&VAR_7->wait);


 VAR_9 = FUNC_6(VAR_8, VAR_7->endpoint_in->bEndpointAddress);
 VAR_10 = FUNC_4(VAR_8, VAR_9, FUNC_5(VAR_9));
 VAR_10 = (VAR_10 > VAR_0) ? VAR_0 : VAR_10;

 FUNC_3(VAR_7->irq_urb, VAR_8, VAR_9, VAR_7->inbuf,
    VAR_10, VAR_3, VAR_7,
    VAR_7->endpoint_in->bInterval);
 VAR_7->irq_urb->transfer_dma = VAR_7->inbuf_dma;
 VAR_7->irq_urb->transfer_flags |= VAR_2;


 VAR_9 = FUNC_7(VAR_8, VAR_7->endpoint_out->bEndpointAddress);
 VAR_10 = FUNC_4(VAR_8, VAR_9, FUNC_5(VAR_9));
 VAR_10 = (VAR_10 > VAR_0) ? VAR_0 : VAR_10;

 FUNC_3(VAR_7->out_urb, VAR_8, VAR_9, VAR_7->outbuf,
    VAR_10, VAR_4, VAR_7,
    VAR_7->endpoint_out->bInterval);
 VAR_7->out_urb->transfer_dma = VAR_7->outbuf_dma;
 VAR_7->out_urb->transfer_flags |= VAR_2;


 if ((FUNC_0(VAR_7, 0x8004, VAR_5)) ||
     (FUNC_0(VAR_7, 0x8007, VAR_6))) {
  FUNC_1(&VAR_7->interface->dev,
    "Initializing ati_remote hardware failed.\n");
  return -VAR_1;
 }

 return 0;
}
