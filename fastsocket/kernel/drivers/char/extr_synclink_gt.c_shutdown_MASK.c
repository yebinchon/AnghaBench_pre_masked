
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; TYPE_2__* tty; } ;
struct slgt_info {TYPE_3__ port; int lock; int gpio_wait_q; int signals; int * tx_buf; int rx_timer; int tx_timer; int event_wait_q; int status_event_wait_q; int device_name; } ;
struct TYPE_5__ {int flags; TYPE_1__* termios; } ;
struct TYPE_4__ {int c_cflag; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct slgt_info*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct slgt_info*) ;
 int FUNC_7 (struct slgt_info*,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct slgt_info*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct slgt_info *VAR_7)
{
 unsigned long VAR_8;

 if (!(VAR_7->port.flags & VAR_0))
  return;

 FUNC_0(("%s shutdown\n", VAR_7->device_name));



 FUNC_11(&VAR_7->status_event_wait_q);
 FUNC_11(&VAR_7->event_wait_q);

 FUNC_1(&VAR_7->tx_timer);
 FUNC_1(&VAR_7->rx_timer);

 FUNC_3(VAR_7->tx_buf);
 VAR_7->tx_buf = ((void*)0);

 FUNC_8(&VAR_7->lock,VAR_8);

 FUNC_10(VAR_7);
 FUNC_4(VAR_7);

 FUNC_7(VAR_7, VAR_2 | VAR_3);

  if (!VAR_7->port.tty || VAR_7->port.tty->termios->c_cflag & VAR_1) {
   VAR_7->signals &= ~(VAR_4 + VAR_5);
  FUNC_6(VAR_7);
 }

 FUNC_2(&VAR_7->gpio_wait_q);

 FUNC_9(&VAR_7->lock,VAR_8);

 if (VAR_7->port.tty)
  FUNC_5(VAR_6, &VAR_7->port.tty->flags);

 VAR_7->port.flags &= ~VAR_0;
}
