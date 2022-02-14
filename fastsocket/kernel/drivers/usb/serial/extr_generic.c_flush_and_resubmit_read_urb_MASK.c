
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int sysrq; int console; int port; struct urb* read_urb; } ;
struct urb {int actual_length; scalar_t__ transfer_buffer; } ;
struct tty_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*,char,int ) ;
 int FUNC_2 (struct tty_struct*,char*,int) ;
 int FUNC_3 (struct tty_struct*) ;
 struct tty_struct* FUNC_4 (int *) ;
 int FUNC_5 (struct usb_serial_port*,int ) ;
 int FUNC_6 (struct tty_struct*,struct usb_serial_port*,char) ;

__attribute__((used)) static void FUNC_7(struct usb_serial_port *VAR_2)
{
 struct urb *VAR_3 = VAR_2->read_urb;
 struct tty_struct *VAR_4 = FUNC_4(&VAR_2->port);
 char *VAR_5 = (char *)VAR_3->transfer_buffer;
 int VAR_6;

 if (!VAR_4)
  goto done;




 if (!VAR_2->console || !VAR_2->sysrq)
  FUNC_2(VAR_4, VAR_5, VAR_3->actual_length);
 else {

  for (VAR_6 = 0; VAR_6 < VAR_3->actual_length; VAR_6++, VAR_5++) {
   if (!FUNC_6(VAR_4, VAR_2, *VAR_5))
    FUNC_1(VAR_4, *VAR_5, VAR_1);
  }
 }
 FUNC_0(VAR_4);
 FUNC_3(VAR_4);
done:
 FUNC_5(VAR_2, VAR_0);
}
