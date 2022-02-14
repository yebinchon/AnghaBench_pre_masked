
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct file {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct usb_serial*,unsigned char*) ;
 int FUNC_1 (struct usb_serial*,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct tty_struct *VAR_2, struct file *VAR_3,
    unsigned int VAR_4, unsigned int VAR_5)
{
 struct usb_serial_port *VAR_6 = VAR_2->driver_data;
 struct usb_serial *VAR_7 = VAR_6->serial;
 int VAR_8;
 unsigned char VAR_9;

 VAR_8 = FUNC_0(VAR_7, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_4 & VAR_1)
  VAR_9 |= (1<<2);
 if (VAR_4 & VAR_0)
  VAR_9 |= (1<<7);

 if (VAR_5 & VAR_1)
  VAR_9 &= ~(1<<2);
 if (VAR_5 & VAR_0)
  VAR_9 &= ~(1<<7);
 VAR_8 = FUNC_1(VAR_7, VAR_9);
 return VAR_8;
}
