
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; TYPE_2__* tty; } ;
struct gs_port {unsigned char* xmit_buf; int driver_lock; TYPE_1__ port; scalar_t__ xmit_tail; scalar_t__ xmit_head; scalar_t__ xmit_cnt; int port_write_mutex; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

int FUNC_9(struct gs_port *VAR_5)
{
 unsigned long VAR_6;

 FUNC_2 ();

 if (VAR_5->port.flags & VAR_0) {
  FUNC_3 ();
  return 0;
 }
 if (!VAR_5->xmit_buf) {

  unsigned long VAR_7;

  VAR_7 = FUNC_4(VAR_2);
  FUNC_7 (&VAR_5->driver_lock, VAR_6);
  if (VAR_5->xmit_buf)
   FUNC_1 (VAR_7);
  else
   VAR_5->xmit_buf = (unsigned char *) VAR_7;
  FUNC_8(&VAR_5->driver_lock, VAR_6);
  if (!VAR_5->xmit_buf) {
   FUNC_3 ();
   return -VAR_1;
  }
 }

 FUNC_7 (&VAR_5->driver_lock, VAR_6);
 if (VAR_5->port.tty)
  FUNC_0(VAR_4, &VAR_5->port.tty->flags);
 FUNC_6(&VAR_5->port_write_mutex);
 VAR_5->xmit_cnt = VAR_5->xmit_head = VAR_5->xmit_tail = 0;
 FUNC_8(&VAR_5->driver_lock, VAR_6);
 FUNC_5(VAR_5->port.tty, ((void*)0));
 FUNC_7 (&VAR_5->driver_lock, VAR_6);
 VAR_5->port.flags |= VAR_0;
 VAR_5->port.flags &= ~VAR_3;

 FUNC_8(&VAR_5->driver_lock, VAR_6);
 FUNC_3 ();
 return 0;
}
