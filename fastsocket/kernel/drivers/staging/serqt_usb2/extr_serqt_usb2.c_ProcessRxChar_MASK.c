
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {struct urb* read_urb; } ;
struct urb {scalar_t__ actual_length; } ;
struct tty_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*,unsigned char,int ) ;

__attribute__((used)) static void FUNC_1(struct tty_struct *VAR_1, struct usb_serial_port *VAR_2,
      unsigned char VAR_3)
{
 struct urb *VAR_4 = VAR_2->read_urb;
 if (VAR_4->actual_length)
  FUNC_0(VAR_1, VAR_3, VAR_0);
}
