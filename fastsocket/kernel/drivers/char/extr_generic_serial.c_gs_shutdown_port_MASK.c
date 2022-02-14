
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_1__* tty; } ;
struct gs_port {int driver_lock; TYPE_3__ port; TYPE_2__* rd; int * xmit_buf; } ;
struct TYPE_5__ {int (* shutdown_port ) (struct gs_port*) ;} ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct gs_port*) ;

__attribute__((used)) static void FUNC_7 (struct gs_port *VAR_2)
{
 unsigned long VAR_3;

 FUNC_1();

 if (!VAR_2) return;

 if (!(VAR_2->port.flags & VAR_0))
  return;

 FUNC_4(&VAR_2->driver_lock, VAR_3);

 if (VAR_2->xmit_buf) {
  FUNC_0((unsigned long) VAR_2->xmit_buf);
  VAR_2->xmit_buf = ((void*)0);
 }

 if (VAR_2->port.tty)
  FUNC_3(VAR_1, &VAR_2->port.tty->flags);

 VAR_2->rd->shutdown_port (VAR_2);

 VAR_2->port.flags &= ~VAR_0;
 FUNC_5(&VAR_2->driver_lock, VAR_3);

 FUNC_2();
}
