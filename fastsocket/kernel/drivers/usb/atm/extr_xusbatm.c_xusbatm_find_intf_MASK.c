
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct usb_interface {int dummy; } ;
struct TYPE_6__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_1__ desc; } ;
struct usb_device {TYPE_5__* actconfig; } ;
struct TYPE_9__ {int bNumInterfaces; } ;
struct TYPE_10__ {struct usb_interface** interface; TYPE_4__ desc; } ;
struct TYPE_7__ {scalar_t__ bEndpointAddress; } ;
struct TYPE_8__ {TYPE_2__ desc; } ;


 struct usb_host_interface* FUNC_0 (struct usb_interface*,int) ;

__attribute__((used)) static struct usb_interface *FUNC_1 (struct usb_device *VAR_0, int VAR_1, u8 VAR_2)
{
 struct usb_host_interface *VAR_3;
 struct usb_interface *VAR_4;
 int VAR_5, VAR_6;

 for(VAR_5 = 0; VAR_5 < VAR_0->actconfig->desc.bNumInterfaces; VAR_5++)
  if ((VAR_4 = VAR_0->actconfig->interface[VAR_5]) && (VAR_3 = FUNC_0(VAR_4, VAR_1)))
   for (VAR_6 = 0; VAR_6 < VAR_3->desc.bNumEndpoints; VAR_6++)
    if (VAR_3->endpoint[VAR_6].desc.bEndpointAddress == VAR_2)
     return VAR_4;
 return ((void*)0);
}
