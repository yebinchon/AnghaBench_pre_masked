
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int interrupt_in_urb; int write_urb; struct usb_serial* serial; } ;
struct usb_serial {scalar_t__ dev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct usb_serial_port *VAR_0)
{
 struct usb_serial *VAR_1 = VAR_0->serial;

 if (VAR_1->dev) {

  FUNC_0(VAR_0->write_urb);
  FUNC_0(VAR_0->interrupt_in_urb);
 }
}
