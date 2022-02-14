
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {TYPE_1__* endpoint; } ;
struct usb_endpoint_descriptor {int bInterval; int bEndpointAddress; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_4__ {int bRequestType; int wLength; scalar_t__ wIndex; } ;
struct iforce {void* ctrl; void* out; void* irq; int edata; TYPE_2__ cr; struct iforce* data; struct usb_device* usbdev; int bus; } ;
struct TYPE_3__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct iforce*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct usb_device* FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (struct iforce*) ;
 struct iforce* FUNC_4 (int,int ) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (void*,struct usb_device*,int ,void*,int ,int,int ,struct iforce*) ;
 int FUNC_7 (void*,struct usb_device*,int ,struct iforce*,int,int ,struct iforce*,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (struct usb_device*,int ) ;
 int FUNC_10 (struct usb_device*,int ) ;
 int FUNC_11 (struct usb_interface*,struct iforce*) ;
 int FUNC_12 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_13(struct usb_interface *VAR_9,
    const struct usb_device_id *VAR_10)
{
 struct usb_device *VAR_11 = FUNC_2(VAR_9);
 struct usb_host_interface *VAR_12;
 struct usb_endpoint_descriptor *VAR_13, *VAR_14;
 struct iforce *VAR_15;
 int VAR_16 = -VAR_0;

 VAR_12 = VAR_9->cur_altsetting;

 VAR_13 = &VAR_12->endpoint[0].desc;
 VAR_14 = &VAR_12->endpoint[1].desc;

 if (!(VAR_15 = FUNC_4(sizeof(struct iforce) + 32, VAR_1)))
  goto fail;

 if (!(VAR_15->irq = FUNC_5(0, VAR_1)))
  goto fail;

 if (!(VAR_15->out = FUNC_5(0, VAR_1)))
  goto fail;

 if (!(VAR_15->ctrl = FUNC_5(0, VAR_1)))
  goto fail;

 VAR_15->bus = VAR_2;
 VAR_15->usbdev = VAR_11;

 VAR_15->cr.bRequestType = VAR_5 | VAR_3 | VAR_4;
 VAR_15->cr.wIndex = 0;
 VAR_15->cr.wLength = FUNC_0(16);

 FUNC_7(VAR_15->irq, VAR_11, FUNC_10(VAR_11, VAR_13->bEndpointAddress),
   VAR_15->data, 16, VAR_7, VAR_15, VAR_13->bInterval);

 FUNC_7(VAR_15->out, VAR_11, FUNC_12(VAR_11, VAR_14->bEndpointAddress),
   VAR_15 + 1, 32, VAR_8, VAR_15, VAR_14->bInterval);

 FUNC_6(VAR_15->ctrl, VAR_11, FUNC_9(VAR_11, 0),
   (void*) &VAR_15->cr, VAR_15->edata, 16, VAR_6, VAR_15);

 VAR_16 = FUNC_1(VAR_15);
 if (VAR_16)
  goto fail;

 FUNC_11(VAR_9, VAR_15);
 return 0;

fail:
 if (VAR_15) {
  FUNC_8(VAR_15->irq);
  FUNC_8(VAR_15->out);
  FUNC_8(VAR_15->ctrl);
  FUNC_3(VAR_15);
 }

 return VAR_16;
}
