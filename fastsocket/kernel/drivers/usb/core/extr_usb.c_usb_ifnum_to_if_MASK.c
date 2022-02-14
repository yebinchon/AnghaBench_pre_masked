
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {TYPE_3__* altsetting; } ;
struct TYPE_4__ {int bNumInterfaces; } ;
struct usb_host_config {struct usb_interface** interface; TYPE_1__ desc; } ;
struct usb_device {struct usb_host_config* actconfig; } ;
struct TYPE_5__ {unsigned int bInterfaceNumber; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;



struct usb_interface *FUNC_0(const struct usb_device *VAR_0,
          unsigned VAR_1)
{
 struct usb_host_config *VAR_2 = VAR_0->actconfig;
 int VAR_3;

 if (!VAR_2)
  return ((void*)0);
 for (VAR_3 = 0; VAR_3 < VAR_2->desc.bNumInterfaces; VAR_3++)
  if (VAR_2->interface[VAR_3]->altsetting[0]
    .desc.bInterfaceNumber == VAR_1)
   return VAR_2->interface[VAR_3];

 return ((void*)0);
}
