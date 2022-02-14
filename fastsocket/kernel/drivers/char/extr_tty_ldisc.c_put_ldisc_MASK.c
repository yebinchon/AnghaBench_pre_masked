
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_ldisc_ops {int owner; int refcount; } ;
struct tty_ldisc {struct tty_ldisc_ops* ops; int users; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (struct tty_ldisc*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_7(struct tty_ldisc *VAR_1)
{
 unsigned long VAR_2;

 if (FUNC_0(!VAR_1))
  return;
 FUNC_4(VAR_2);
 if (FUNC_1(&VAR_1->users, &VAR_0)) {
  struct tty_ldisc_ops *VAR_3 = VAR_1->ops;

  VAR_3->refcount--;
  FUNC_5(VAR_3->owner);
  FUNC_6(&VAR_0, VAR_2);

  FUNC_2(VAR_1);
  return;
 }
 FUNC_3(VAR_2);
}
