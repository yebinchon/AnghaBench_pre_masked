
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial {TYPE_1__* interface; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_4__ {struct usb_host_interface* cur_altsetting; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_1,
     const struct usb_device_id *VAR_2)
{
 struct usb_host_interface *VAR_3 = VAR_1->interface->
        cur_altsetting;
 struct usb_endpoint_descriptor *VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->desc.bNumEndpoints; VAR_6++) {
  VAR_4 = &VAR_3->endpoint[VAR_6].desc;
  if (FUNC_1(VAR_4)) {
   FUNC_0("found bulk out on endpoint %d", VAR_6);
   ++VAR_5;
  }
 }

 if (VAR_5 == 0) {
  FUNC_0("Invalid interface, discarding");
  return -VAR_0;
 }

 return 0;
}
