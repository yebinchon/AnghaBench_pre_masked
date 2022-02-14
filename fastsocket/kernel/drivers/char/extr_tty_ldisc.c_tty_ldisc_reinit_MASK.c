
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int * ldisc; } ;
struct tty_ldisc {int dummy; } ;


 scalar_t__ FUNC_0 (struct tty_ldisc*) ;
 int FUNC_1 (struct tty_struct*,struct tty_ldisc*) ;
 int FUNC_2 (struct tty_struct*,int *) ;
 struct tty_ldisc* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tty_struct*,int) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_0, int VAR_1)
{
 struct tty_ldisc *VAR_2 = FUNC_3(VAR_1);

 if (FUNC_0(VAR_2))
  return -1;

 FUNC_2(VAR_0, VAR_0->ldisc);
 FUNC_4(VAR_0->ldisc);
 VAR_0->ldisc = ((void*)0);



 FUNC_1(VAR_0, VAR_2);
 FUNC_5(VAR_0, VAR_1);

 return 0;
}
