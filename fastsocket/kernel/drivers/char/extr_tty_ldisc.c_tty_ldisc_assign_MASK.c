
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {struct tty_ldisc* ldisc; } ;
struct tty_ldisc {int dummy; } ;



__attribute__((used)) static void FUNC_0(struct tty_struct *VAR_0, struct tty_ldisc *VAR_1)
{
 VAR_0->ldisc = VAR_1;
}
