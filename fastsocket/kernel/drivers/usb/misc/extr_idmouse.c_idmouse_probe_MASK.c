
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* altsetting; } ;
struct usb_idmouse {int bulk_in_size; int present; scalar_t__ bulk_in_endpointAddr; int bulk_in_buffer; int orig_bi_size; struct usb_interface* interface; struct usb_device* udev; int lock; } ;
struct TYPE_3__ {int bInterfaceClass; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; int wMaxPacketSize; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int FUNC_2 (struct usb_idmouse*) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (scalar_t__,int ) ;
 struct usb_idmouse* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct usb_endpoint_descriptor*) ;
 int FUNC_9 (struct usb_interface*,int *) ;
 int FUNC_10 (struct usb_interface*,struct usb_idmouse*) ;

__attribute__((used)) static int FUNC_11(struct usb_interface *VAR_6,
    const struct usb_device_id *VAR_7)
{
 struct usb_device *VAR_8 = FUNC_3(VAR_6);
 struct usb_idmouse *VAR_9;
 struct usb_host_interface *VAR_10;
 struct usb_endpoint_descriptor *VAR_11;
 int VAR_12;


 VAR_10 = &VAR_6->altsetting[0];
 if (VAR_10->desc.bInterfaceClass != 0x0A)
  return -VAR_1;


 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_3);
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 FUNC_7(&VAR_9->lock);
 VAR_9->udev = VAR_8;
 VAR_9->interface = VAR_6;


 VAR_11 = &VAR_10->endpoint[0].desc;
 if (!VAR_9->bulk_in_endpointAddr && FUNC_8(VAR_11)) {

  VAR_9->orig_bi_size = FUNC_6(VAR_11->wMaxPacketSize);
  VAR_9->bulk_in_size = 0x200;
  VAR_9->bulk_in_endpointAddr = VAR_11->bEndpointAddress;
  VAR_9->bulk_in_buffer =
   FUNC_4(VAR_4 + VAR_9->bulk_in_size, VAR_3);

  if (!VAR_9->bulk_in_buffer) {
   FUNC_1("Unable to allocate input buffer.");
   FUNC_2(VAR_9);
   return -VAR_2;
  }
 }

 if (!(VAR_9->bulk_in_endpointAddr)) {
  FUNC_1("Unable to find bulk-in endpoint.");
  FUNC_2(VAR_9);
  return -VAR_1;
 }

 VAR_9->present = 1;


 FUNC_10(VAR_6, VAR_9);
 VAR_12 = FUNC_9(VAR_6, &VAR_5);
 if (VAR_12) {

  FUNC_1("Unble to allocate minor number.");
  FUNC_10(VAR_6, ((void*)0));
  FUNC_2(VAR_9);
  return VAR_12;
 }


 FUNC_0(&VAR_6->dev,"%s now attached\n",VAR_0);

 return 0;
}
