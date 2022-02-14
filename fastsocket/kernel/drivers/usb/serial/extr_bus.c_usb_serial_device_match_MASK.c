
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; } ;
struct usb_serial_driver {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct usb_serial_driver* type; } ;


 struct usb_serial_driver* FUNC_0 (struct device_driver*) ;
 struct usb_serial_port* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0,
      struct device_driver *VAR_1)
{
 struct usb_serial_driver *VAR_2;
 const struct usb_serial_port *VAR_3;





 VAR_3 = FUNC_1(VAR_0);
 if (!VAR_3)
  return 0;

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == VAR_3->serial->type)
  return 1;

 return 0;
}
