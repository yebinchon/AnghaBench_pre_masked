
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; scalar_t__ driver_data; } ;
struct TYPE_2__ {scalar_t__ head; scalar_t__ tail; int buf; } ;
struct e100_serial {TYPE_1__ xmit; scalar_t__ tr_running; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct e100_serial*) ;

__attribute__((used)) static void
FUNC_4(struct tty_struct *VAR_0)
{
 struct e100_serial *VAR_1 = (struct e100_serial *)VAR_0->driver_data;
 unsigned long VAR_2;

 if (VAR_1->tr_running ||
     VAR_1->xmit.head == VAR_1->xmit.tail ||
     VAR_0->stopped ||
     VAR_0->hw_stopped ||
     !VAR_1->xmit.buf)
  return;







 FUNC_1(VAR_2);
 FUNC_3(VAR_1);
 FUNC_0(VAR_2);
}
