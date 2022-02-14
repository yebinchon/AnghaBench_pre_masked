
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* chars_in_buffer ) (struct tty_struct*) ;} ;
struct tty_struct {TYPE_1__* termios; int name; TYPE_2__ ldisc; scalar_t__ driver_data; } ;
struct TYPE_8__ {int MCR; scalar_t__ x_char; } ;
typedef TYPE_3__ ser_info_t ;
struct TYPE_6__ {int c_cflag; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct tty_struct*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (struct tty_struct*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ,char*) ;
 int FUNC_9 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_10(struct tty_struct * VAR_3)
{
 ser_info_t *VAR_4 = (ser_info_t *)VAR_3->driver_data;







 if (FUNC_8(VAR_4, VAR_3->name, "rs_unthrottle"))
  return;

 if (FUNC_0(VAR_3)) {
  if (VAR_4->x_char)
   VAR_4->x_char = 0;
  else
   FUNC_6(VAR_3, FUNC_1(VAR_3));
 }







}
