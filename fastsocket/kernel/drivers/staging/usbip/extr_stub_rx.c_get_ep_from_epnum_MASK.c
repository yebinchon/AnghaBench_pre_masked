
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int bNumEndpoints; } ;
struct usb_host_interface {struct usb_host_endpoint* endpoint; TYPE_3__ desc; } ;
struct TYPE_8__ {int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_4__ desc; } ;
struct TYPE_5__ {int bNumInterfaces; } ;
struct usb_host_config {TYPE_2__** interface; TYPE_1__ desc; } ;
struct usb_device {struct usb_host_config* actconfig; struct usb_host_endpoint ep0; } ;
struct TYPE_6__ {struct usb_host_interface* cur_altsetting; } ;



__attribute__((used)) static struct usb_host_endpoint *FUNC_0(struct usb_device *VAR_0,
  int VAR_1)
{
 struct usb_host_config *VAR_2;
 int VAR_3 = 0, VAR_4 = 0;
 struct usb_host_endpoint *VAR_5 = ((void*)0);
 int VAR_6;
 int VAR_7 = 0;

 if (VAR_1 == 0)
  return &VAR_0->ep0;

 VAR_2 = VAR_0->actconfig;
 if (!VAR_2)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_2->desc.bNumInterfaces; VAR_3++) {
  struct usb_host_interface *VAR_8;

  VAR_8 = VAR_2->interface[VAR_3]->cur_altsetting;

  for (VAR_4 = 0; VAR_4 < VAR_8->desc.bNumEndpoints; VAR_4++) {
   VAR_5 = &VAR_8->endpoint[VAR_4];
   VAR_6 = (VAR_5->desc.bEndpointAddress & 0x7f);

   if (VAR_6 == VAR_1) {

    VAR_7 = 1;
    break;
   }
  }
 }

 if (VAR_7)
  return VAR_5;
 else
  return ((void*)0);
}
