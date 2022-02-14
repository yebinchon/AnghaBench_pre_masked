
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_ldisc {int dummy; } ;


 scalar_t__ FUNC_0 (struct tty_ldisc*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct tty_struct*,struct tty_ldisc*) ;
 struct tty_ldisc* FUNC_3 (int ) ;

void FUNC_4(struct tty_struct *VAR_1)
{
 struct tty_ldisc *VAR_2 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_2))
  FUNC_1("n_tty: init_tty");
 FUNC_2(VAR_1, VAR_2);
}
