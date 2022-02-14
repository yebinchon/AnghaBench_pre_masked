
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct garmin_data {int outsize; } ;


 int VAR_0 ;
 struct garmin_data* FUNC_0 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1)
{
 struct usb_serial_port *VAR_2 = VAR_1->driver_data;



 struct garmin_data *VAR_3 = FUNC_0(VAR_2);
 return VAR_0-VAR_3->outsize;
}
