
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;
struct TYPE_4__ {int bmAttributes; scalar_t__ wMaxPacketSize; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;


 int VAR_0 ;

__attribute__((used)) static struct usb_host_endpoint *FUNC_0(struct usb_host_interface *VAR_1,
       int VAR_2)
{
 struct usb_host_endpoint *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_1->desc.bNumEndpoints; VAR_4++) {
  VAR_3 = &VAR_1->endpoint[VAR_4];
  VAR_5 = VAR_3->desc.bmAttributes & VAR_0;
  if (VAR_5 == VAR_2
      && VAR_3->desc.wMaxPacketSize != 0)
   return VAR_3;
 }
 return ((void*)0);
}
