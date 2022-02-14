
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int dummy; } ;
struct tty_port {int lock; scalar_t__ tty; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct tty_port *VAR_0, struct tty_struct *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->lock, VAR_2);
 if (VAR_0->tty)
  FUNC_3(VAR_0->tty);
 VAR_0->tty = FUNC_2(VAR_1);
 FUNC_1(&VAR_0->lock, VAR_2);
}
