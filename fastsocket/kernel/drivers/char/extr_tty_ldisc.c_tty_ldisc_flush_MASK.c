
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* flush_buffer ) (struct tty_struct*) ;} ;


 int FUNC_0 (struct tty_struct*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_3 (struct tty_struct*) ;

void FUNC_4(struct tty_struct *VAR_0)
{
 struct tty_ldisc *VAR_1 = FUNC_3(VAR_0);
 if (VAR_1) {
  if (VAR_1->ops->flush_buffer)
   VAR_1->ops->flush_buffer(VAR_0);
  FUNC_2(VAR_1);
 }
 FUNC_1(VAR_0);
}
