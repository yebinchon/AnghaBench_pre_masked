
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;


 scalar_t__ FUNC_0 (struct usb_serial_port*,char const*) ;
 scalar_t__ FUNC_1 (struct usb_serial*,char const*) ;

__attribute__((used)) static struct usb_serial *FUNC_2(struct usb_serial_port *VAR_0,
      const char *VAR_1)
{

 if (!VAR_0 ||
     FUNC_0(VAR_0, VAR_1) ||
     FUNC_1(VAR_0->serial, VAR_1)) {




  return ((void*)0);
 }

 return VAR_0->serial;
}
