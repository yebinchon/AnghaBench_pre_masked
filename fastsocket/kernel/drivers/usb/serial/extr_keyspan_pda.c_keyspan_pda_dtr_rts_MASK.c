
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {scalar_t__ dev; } ;


 int FUNC_0 (struct usb_serial*,int) ;

__attribute__((used)) static void FUNC_1(struct usb_serial_port *VAR_0, int VAR_1)
{
 struct usb_serial *VAR_2 = VAR_0->serial;

 if (VAR_2->dev) {
  if (VAR_1)
   FUNC_0(VAR_2, (1<<7) | (1<< 2));
  else
   FUNC_0(VAR_2, 0);
 }
}
