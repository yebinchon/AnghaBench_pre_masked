
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int serial; } ;


 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static int FUNC_1(struct usb_serial_port *VAR_0,
          const char *VAR_1)
{
 if (!VAR_0) {
  FUNC_0("%s - port == NULL", VAR_1);
  return -1;
 }
 if (!VAR_0->serial) {
  FUNC_0("%s - port->serial == NULL\n", VAR_1);
  return -1;
 }
 return 0;
}
