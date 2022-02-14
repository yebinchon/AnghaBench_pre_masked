
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct gs_port* driver_data; } ;
struct TYPE_2__ {int flags; int open_wait; int lock; scalar_t__ count; struct tty_struct* tty; } ;
struct gs_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct gs_port*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct tty_struct *VAR_2)
{
 struct gs_port *VAR_3;
 unsigned long VAR_4;

 FUNC_0 ();

 VAR_3 = VAR_2->driver_data;
 VAR_2 = VAR_3->port.tty;
 if (!VAR_2)
  return;

 FUNC_2 (VAR_3);
 FUNC_3(&VAR_3->port.lock, VAR_4);
 VAR_3->port.flags &= ~(VAR_0|VAR_1);
 VAR_3->port.tty = ((void*)0);
 VAR_3->port.count = 0;
 FUNC_4(&VAR_3->port.lock, VAR_4);

 FUNC_5(&VAR_3->port.open_wait);
 FUNC_1 ();
}
