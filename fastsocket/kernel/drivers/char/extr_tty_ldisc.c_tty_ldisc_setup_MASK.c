
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty_ldisc* ldisc; } ;
struct tty_ldisc {int dummy; } ;


 int FUNC_0 (struct tty_struct*,struct tty_ldisc*) ;
 int FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*,struct tty_ldisc*) ;

int FUNC_3(struct tty_struct *VAR_0, struct tty_struct *VAR_1)
{
 struct tty_ldisc *VAR_2 = VAR_0->ldisc;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_2);
 if (VAR_3)
  return VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_2(VAR_1, VAR_1->ldisc);
  if (VAR_3) {
   FUNC_0(VAR_0, VAR_2);
   return VAR_3;
  }
  FUNC_1(VAR_1);
 }
 FUNC_1(VAR_0);
 return 0;
}
