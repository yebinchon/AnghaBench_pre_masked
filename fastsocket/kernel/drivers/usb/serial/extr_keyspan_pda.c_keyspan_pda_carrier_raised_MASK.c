
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;


 scalar_t__ FUNC_0 (struct usb_serial*,unsigned char*) ;

__attribute__((used)) static int FUNC_1(struct usb_serial_port *VAR_0)
{
 struct usb_serial *VAR_1 = VAR_0->serial;
 unsigned char VAR_2;



 if (FUNC_0(VAR_1, &VAR_2) >= 0) {
  if (!(VAR_2 & (1>>6)))
   return 0;
 }


 return 1;
}
