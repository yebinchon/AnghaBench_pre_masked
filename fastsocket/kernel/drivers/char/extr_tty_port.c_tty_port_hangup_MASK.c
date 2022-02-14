
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_port {int delta_msr_wait; int open_wait; int lock; int * tty; int flags; scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct tty_port *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 VAR_1->count = 0;
 VAR_1->flags &= ~VAR_0;
 if (VAR_1->tty)
  FUNC_2(VAR_1->tty);
 VAR_1->tty = ((void*)0);
 FUNC_1(&VAR_1->lock, VAR_2);
 FUNC_4(&VAR_1->open_wait);
 FUNC_4(&VAR_1->delta_msr_wait);
 FUNC_3(VAR_1);
}
