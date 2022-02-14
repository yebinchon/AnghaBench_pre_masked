
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ count; } ;
struct TYPE_4__ {scalar_t__ (* chars_in_buffer ) (struct tty_struct*) ;} ;
struct tty_struct {TYPE_3__* termios; TYPE_2__ flip; TYPE_1__ ldisc; scalar_t__ driver_data; } ;
struct e100_serial {scalar_t__ x_char; int line; } ;
struct TYPE_6__ {int c_cflag; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (struct e100_serial*,int) ;
 int FUNC_5 (char*,int ,unsigned long) ;
 int FUNC_6 (struct tty_struct*,int ) ;
 scalar_t__ FUNC_7 (struct tty_struct*) ;
 scalar_t__ FUNC_8 (struct tty_struct*) ;
 int FUNC_9 (struct tty_struct*,char*) ;

__attribute__((used)) static void
FUNC_10(struct tty_struct * VAR_1)
{
 struct e100_serial *VAR_2 = (struct e100_serial *)VAR_1->driver_data;






 FUNC_1(FUNC_0(VAR_2->line,"rs_unthrottle ldisc %d\n", VAR_1->ldisc.chars_in_buffer(VAR_1)));
 FUNC_1(FUNC_0(VAR_2->line,"rs_unthrottle flip.count: %i\n", VAR_1->flip.count));

 if (VAR_1->termios->c_cflag & VAR_0) {

  FUNC_4(VAR_2, 1);
 }

 if (FUNC_2(VAR_1)) {
  if (VAR_2->x_char)
   VAR_2->x_char = 0;
  else
   FUNC_6(VAR_1, FUNC_3(VAR_1));
 }

}
