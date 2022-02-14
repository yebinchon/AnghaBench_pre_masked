
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct ch341_private {int line_status; } ;


 int VAR_0 ;
 struct ch341_private* FUNC_0 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_1(struct usb_serial_port *VAR_1)
{
 struct ch341_private *VAR_2 = FUNC_0(VAR_1);
 if (VAR_2->line_status & VAR_0)
  return 1;
 return 0;
}
