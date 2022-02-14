
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {unsigned int num_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_8__ {unsigned int bNumEndpoints; int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_4__ desc; TYPE_3__* endpoint; } ;
struct usb_endpoint_descriptor {unsigned int bEndpointAddress; } ;
struct usb_device {TYPE_2__* actconfig; } ;
struct TYPE_7__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_5__ {unsigned int bNumInterfaces; } ;
struct TYPE_6__ {struct usb_interface** interface; TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct usb_device *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 struct usb_interface *VAR_9;
 struct usb_host_interface *VAR_10;
 struct usb_endpoint_descriptor *VAR_11;

 if (VAR_5 & ~(VAR_3|0xf))
  return -VAR_0;
 if (!VAR_4->actconfig)
  return -VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_4->actconfig->desc.bNumInterfaces; VAR_6++) {
  VAR_9 = VAR_4->actconfig->interface[VAR_6];
  for (VAR_7 = 0; VAR_7 < VAR_9->num_altsetting; VAR_7++) {
   VAR_10 = &VAR_9->altsetting[VAR_7];
   for (VAR_8 = 0; VAR_8 < VAR_10->desc.bNumEndpoints; VAR_8++) {
    VAR_11 = &VAR_10->endpoint[VAR_8].desc;
    if (VAR_11->bEndpointAddress == VAR_5)
     return VAR_10->desc.bInterfaceNumber;
   }
  }
 }
 return -VAR_1;
}
