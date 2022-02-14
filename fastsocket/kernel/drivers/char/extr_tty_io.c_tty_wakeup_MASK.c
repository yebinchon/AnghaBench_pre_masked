
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {int write_wait; int flags; } ;
struct tty_ldisc {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_wakeup ) (struct tty_struct*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_3 (struct tty_struct*) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(struct tty_struct *VAR_2)
{
 struct tty_ldisc *VAR_3;

 if (FUNC_1(VAR_1, &VAR_2->flags)) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3) {
   if (VAR_3->ops->write_wakeup)
    VAR_3->ops->write_wakeup(VAR_2);
   FUNC_2(VAR_3);
  }
 }
 FUNC_4(&VAR_2->write_wait, VAR_0);
}
