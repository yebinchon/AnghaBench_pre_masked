
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct usb_serial*,int,int,int,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_4, struct file *VAR_5)
{
 struct usb_serial_port *VAR_6 = VAR_4->driver_data;
 struct usb_serial *VAR_7 = VAR_6->serial;
 char *VAR_8;
 char VAR_9;







 VAR_8 = FUNC_3(1, VAR_1);
 if (!VAR_8) {
  FUNC_1("error kmalloc");
  return -VAR_0;
 }


 FUNC_0(VAR_7, 0xFE, 0xC0, 0x0000, 0x0006, VAR_8);
 VAR_9 = VAR_8[0];
 FUNC_2(VAR_8);




 return (VAR_9 & (1<<4) ? VAR_2 : 0)
        | (VAR_9 & (1<<6) ? VAR_3 : 0);
}
