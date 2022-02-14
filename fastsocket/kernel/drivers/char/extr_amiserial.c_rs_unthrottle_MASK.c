
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* chars_in_buffer ) (struct tty_struct*) ;} ;
struct tty_struct {TYPE_1__* termios; int name; TYPE_2__ ldisc; struct async_struct* driver_data; } ;
struct async_struct {int MCR; scalar_t__ x_char; } ;
struct TYPE_3__ {int c_cflag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int VAR_1 ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct tty_struct*,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct async_struct*,int ,char*) ;
 int FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_struct*,char*) ;

__attribute__((used)) static void FUNC_10(struct tty_struct * VAR_2)
{
 struct async_struct *VAR_3 = VAR_2->driver_data;
 unsigned long VAR_4;







 if (FUNC_7(VAR_3, VAR_2->name, "rs_unthrottle"))
  return;

 if (FUNC_0(VAR_2)) {
  if (VAR_3->x_char)
   VAR_3->x_char = 0;
  else
   FUNC_5(VAR_2, FUNC_1(VAR_2));
 }
 if (VAR_2->termios->c_cflag & VAR_0)
  VAR_3->MCR |= VAR_1;
 FUNC_3(VAR_4);
 FUNC_6(VAR_3->MCR);
 FUNC_2(VAR_4);
}
