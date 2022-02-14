
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial {TYPE_1__* dev; } ;
struct usb_endpoint_descriptor {scalar_t__ wMaxPacketSize; } ;
struct usb_host_endpoint {scalar_t__ enabled; struct usb_endpoint_descriptor desc; } ;
struct TYPE_2__ {int dev; struct usb_host_endpoint** ep_in; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_0)
{
 struct usb_host_endpoint *VAR_1 = VAR_0->dev->ep_in[1];
 struct usb_endpoint_descriptor *VAR_2 = &VAR_1->desc;

 if (VAR_1->enabled && VAR_2->wMaxPacketSize == 0) {
  VAR_2->wMaxPacketSize = FUNC_0(0x40);
  FUNC_1(&VAR_0->dev->dev,
    "Fixing invalid wMaxPacketSize on read pipe\n");
 }

 return 0;
}
