
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbnet {struct usb_host_endpoint* status; int udev; int out; int in; TYPE_1__* driver_info; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_5__ {unsigned int bNumEndpoints; scalar_t__ bAlternateSetting; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_2__ desc; struct usb_host_endpoint* endpoint; } ;
struct TYPE_6__ {int bmAttributes; int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct usbnet *VAR_3, struct usb_interface *VAR_4)
{
 int VAR_5;
 struct usb_host_interface *VAR_6 = ((void*)0);
 struct usb_host_endpoint *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 struct usb_host_endpoint *VAR_9 = ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_4->num_altsetting; VAR_5++) {
  unsigned VAR_10;

  VAR_7 = VAR_8 = VAR_9 = ((void*)0);
  VAR_6 = VAR_4->altsetting + VAR_5;





  for (VAR_10 = 0; VAR_10 < VAR_6->desc.bNumEndpoints; VAR_10++) {
   struct usb_host_endpoint *VAR_11;
   int VAR_12 = 0;

   VAR_11 = VAR_6->endpoint + VAR_10;
   switch (VAR_11->desc.bmAttributes) {
   case 128:
    if (!FUNC_0(&VAR_11->desc))
     continue;
    VAR_12 = 1;

   case 129:
    break;
   default:
    continue;
   }
   if (FUNC_0(&VAR_11->desc)) {
    if (!VAR_12 && !VAR_7)
     VAR_7 = VAR_11;
    else if (VAR_12 && !VAR_9)
     VAR_9 = VAR_11;
   } else {
    if (!VAR_8)
     VAR_8 = VAR_11;
   }
  }
  if (VAR_7 && VAR_8)
   break;
 }
 if (!VAR_6 || !VAR_7 || !VAR_8)
  return -VAR_0;

 if (VAR_6->desc.bAlternateSetting != 0 ||
     !(VAR_3->driver_info->flags & VAR_1)) {
  VAR_5 = FUNC_2 (VAR_3->udev, VAR_6->desc.bInterfaceNumber,
    VAR_6->desc.bAlternateSetting);
  if (VAR_5 < 0)
   return VAR_5;
 }

 VAR_3->in = FUNC_1 (VAR_3->udev,
   VAR_7->desc.bEndpointAddress & VAR_2);
 VAR_3->out = FUNC_3 (VAR_3->udev,
   VAR_8->desc.bEndpointAddress & VAR_2);
 VAR_3->status = VAR_9;
 return 0;
}
