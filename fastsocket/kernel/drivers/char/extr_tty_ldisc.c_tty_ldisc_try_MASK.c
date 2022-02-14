
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int ldisc; int flags; } ;
struct tty_ldisc {int dummy; } ;


 int VAR_0 ;
 struct tty_ldisc* FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static struct tty_ldisc *FUNC_4(struct tty_struct *VAR_2)
{
 unsigned long VAR_3;
 struct tty_ldisc *VAR_4;

 FUNC_1(&VAR_1, VAR_3);
 VAR_4 = ((void*)0);
 if (FUNC_3(VAR_0, &VAR_2->flags))
  VAR_4 = FUNC_0(VAR_2->ldisc);
 FUNC_2(&VAR_1, VAR_3);
 return VAR_4;
}
