
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usbtest_dev {int out_iso_pipe; TYPE_3__* iso_out; int in_iso_pipe; TYPE_3__* iso_in; int out_pipe; int in_pipe; TYPE_1__* info; } ;
struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_5__ {unsigned int bNumEndpoints; scalar_t__ bAlternateSetting; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_2__ desc; struct usb_host_endpoint* endpoint; } ;
struct TYPE_6__ {int bmAttributes; int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_3__ desc; } ;
struct usb_device {int dummy; } ;
struct TYPE_4__ {int iso; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct usb_device* FUNC_0 (struct usbtest_dev*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct usb_device*,int) ;
 int FUNC_3 (struct usb_device*,int) ;
 int FUNC_4 (struct usb_device*,int ,scalar_t__) ;
 int FUNC_5 (struct usb_device*,int) ;
 int FUNC_6 (struct usb_device*,int) ;

__attribute__((used)) static int
FUNC_7 (struct usbtest_dev *VAR_2, struct usb_interface *VAR_3)
{
 int VAR_4;
 struct usb_host_interface *VAR_5;
 struct usb_host_endpoint *VAR_6, *VAR_7;
 struct usb_host_endpoint *VAR_8, *VAR_9;
 struct usb_device *VAR_10;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_altsetting; VAR_4++) {
  unsigned VAR_11;

  VAR_6 = VAR_7 = ((void*)0);
  VAR_8 = VAR_9 = ((void*)0);
  VAR_5 = VAR_3->altsetting + VAR_4;




  for (VAR_11 = 0; VAR_11 < VAR_5->desc.bNumEndpoints; VAR_11++) {
   struct usb_host_endpoint *VAR_12;

   VAR_12 = VAR_5->endpoint + VAR_11;
   switch (VAR_12->desc.bmAttributes) {
   case 129:
    break;
   case 128:
    if (VAR_2->info->iso)
     goto try_iso;

   default:
    continue;
   }
   if (FUNC_1(&VAR_12->desc)) {
    if (!VAR_6)
     VAR_6 = VAR_12;
   } else {
    if (!VAR_7)
     VAR_7 = VAR_12;
   }
   continue;
try_iso:
   if (FUNC_1(&VAR_12->desc)) {
    if (!VAR_8)
     VAR_8 = VAR_12;
   } else {
    if (!VAR_9)
     VAR_9 = VAR_12;
   }
  }
  if ((VAR_6 && VAR_7) || (VAR_8 && VAR_9))
   goto found;
 }
 return -VAR_0;

found:
 VAR_10 = FUNC_0 (VAR_2);
 if (VAR_5->desc.bAlternateSetting != 0) {
  VAR_4 = FUNC_4 (VAR_10,
    VAR_5->desc.bInterfaceNumber,
    VAR_5->desc.bAlternateSetting);
  if (VAR_4 < 0)
   return VAR_4;
 }

 if (VAR_6) {
  VAR_2->in_pipe = FUNC_2 (VAR_10,
   VAR_6->desc.bEndpointAddress & VAR_1);
  VAR_2->out_pipe = FUNC_5 (VAR_10,
   VAR_7->desc.bEndpointAddress & VAR_1);
 }
 if (VAR_8) {
  VAR_2->iso_in = &VAR_8->desc;
  VAR_2->in_iso_pipe = FUNC_3 (VAR_10,
    VAR_8->desc.bEndpointAddress
     & VAR_1);
  VAR_2->iso_out = &VAR_9->desc;
  VAR_2->out_iso_pipe = FUNC_6 (VAR_10,
    VAR_9->desc.bEndpointAddress
     & VAR_1);
 }
 return 0;
}
