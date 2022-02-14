
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {TYPE_2__* serial; int port; } ;
struct urb {scalar_t__ actual_length; } ;
struct tty_struct {int dummy; } ;
struct TYPE_4__ {TYPE_1__** port; } ;
struct TYPE_3__ {struct urb* read_urb; } ;


 int FUNC_0 (struct tty_struct*,int) ;
 int FUNC_1 (struct tty_struct*,unsigned char*,int) ;
 struct tty_struct* FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct usb_serial_port *VAR_0,
 unsigned char VAR_1)
{

 struct tty_struct *VAR_2 = FUNC_2(&(VAR_0->port));

 struct urb *VAR_3 = VAR_0->serial->port[0]->read_urb;

 if (VAR_2 && VAR_3->actual_length) {
  FUNC_0(VAR_2, 1);
  FUNC_1(VAR_2, &VAR_1, 1);


 }
}
