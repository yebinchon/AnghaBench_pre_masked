
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {struct usb_interface* interface; struct usb_device* dev; } ;
struct usb_interface {TYPE_3__* cur_altsetting; } ;
struct usb_endpoint_descriptor {scalar_t__ wMaxPacketSize; } ;
struct usb_device {int dev; } ;
struct ftdi_private {scalar_t__ max_packet_size; } ;
struct TYPE_4__ {unsigned int bNumEndpoints; } ;
struct TYPE_6__ {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int,...) ;
 struct ftdi_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_3(struct usb_serial_port *VAR_0)
{
 struct ftdi_private *VAR_1 = FUNC_2(VAR_0);
 struct usb_serial *VAR_2 = VAR_0->serial;
 struct usb_device *VAR_3 = VAR_2->dev;

 struct usb_interface *VAR_4 = VAR_2->interface;
 struct usb_endpoint_descriptor *VAR_5 = &VAR_4->cur_altsetting->endpoint[1].desc;

 unsigned VAR_6;
 int VAR_7 = 0;

 VAR_6 = VAR_4->cur_altsetting->desc.bNumEndpoints;
 FUNC_1(&VAR_3->dev, "Number of endpoints %d\n", VAR_6);





 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_1(&VAR_3->dev, "Endpoint %d MaxPacketSize %d\n", VAR_7+1,
   VAR_4->cur_altsetting->endpoint[VAR_7].desc.wMaxPacketSize);
  VAR_5 = &VAR_4->cur_altsetting->endpoint[VAR_7].desc;
  if (VAR_5->wMaxPacketSize == 0) {
   VAR_5->wMaxPacketSize = FUNC_0(0x40);
   FUNC_1(&VAR_3->dev, "Overriding wMaxPacketSize on endpoint %d\n", VAR_7);
  }
 }


 VAR_1->max_packet_size = VAR_5->wMaxPacketSize;

 FUNC_1(&VAR_3->dev, "Setting MaxPacketSize %d\n", VAR_1->max_packet_size);
}
