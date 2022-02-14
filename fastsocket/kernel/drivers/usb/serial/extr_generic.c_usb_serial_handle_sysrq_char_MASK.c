
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {scalar_t__ sysrq; scalar_t__ console; } ;
struct tty_struct {int dummy; } ;


 int FUNC_0 (unsigned int,struct tty_struct*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;

int FUNC_2(struct tty_struct *VAR_1,
   struct usb_serial_port *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->sysrq && VAR_2->console) {
  if (VAR_3 && FUNC_1(VAR_0, VAR_2->sysrq)) {
   FUNC_0(VAR_3, VAR_1);
   VAR_2->sysrq = 0;
   return 1;
  }
  VAR_2->sysrq = 0;
 }
 return 0;
}
