
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static void FUNC_2(struct tty_struct *VAR_1, int VAR_2)
{
 struct usb_serial_port *VAR_3 = VAR_1->driver_data;
 struct usb_serial *VAR_4 = VAR_3->serial;

 if (FUNC_0(VAR_0, VAR_2 ? 1 : 0) < 0)
  FUNC_1(&VAR_3->dev, "Set break_ctl %d\n", VAR_2);
}
