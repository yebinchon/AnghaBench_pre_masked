
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;
struct TYPE_5__ {int bEndpointAddress; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 int FUNC_0 (struct usb_device*,int ,int) ;

void FUNC_1(struct usb_device *VAR_0, struct usb_interface *VAR_1,
  bool VAR_2)
{
 struct usb_host_interface *VAR_3 = VAR_1->cur_altsetting;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->desc.bNumEndpoints; ++VAR_4) {
  FUNC_0(VAR_0,
    VAR_3->endpoint[VAR_4].desc.bEndpointAddress,
    VAR_2);
 }
}
