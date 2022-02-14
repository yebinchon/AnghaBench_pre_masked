
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tty_port {int delta_msr_wait; } ;
struct uart_state {struct tty_port port; struct uart_port* uart_port; } ;
struct uart_port {int lock; int icount; TYPE_1__* ops; } ;
struct uart_icount {scalar_t__ rng; scalar_t__ dsr; scalar_t__ dcd; scalar_t__ cts; } ;
struct TYPE_6__ {int state; } ;
struct TYPE_5__ {int (* enable_ms ) (struct uart_port*) ;} ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (int *,int *) ;
 TYPE_2__* VAR_7 ;
 int FUNC_2 (struct uart_icount*,int *,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct uart_port*) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_10(struct uart_state *VAR_9, unsigned long VAR_10)
{
 struct uart_port *VAR_11 = VAR_9->uart_port;
 struct tty_port *VAR_12 = &VAR_9->port;
 FUNC_0(VAR_8, VAR_7);
 struct uart_icount VAR_13, VAR_14;
 int VAR_15;




 FUNC_7(&VAR_11->lock);
 FUNC_2(&VAR_13, &VAR_11->icount, sizeof(struct uart_icount));




 VAR_11->ops->enable_ms(VAR_11);
 FUNC_8(&VAR_11->lock);

 FUNC_1(&VAR_12->delta_msr_wait, &VAR_8);
 for (;;) {
  FUNC_7(&VAR_11->lock);
  FUNC_2(&VAR_14, &VAR_11->icount, sizeof(struct uart_icount));
  FUNC_8(&VAR_11->lock);

  FUNC_5(VAR_1);

  if (((VAR_10 & VAR_6) && (VAR_14.rng != VAR_13.rng)) ||
      ((VAR_10 & VAR_5) && (VAR_14.dsr != VAR_13.dsr)) ||
      ((VAR_10 & VAR_3) && (VAR_14.dcd != VAR_13.dcd)) ||
      ((VAR_10 & VAR_4) && (VAR_14.cts != VAR_13.cts))) {
   VAR_15 = 0;
   break;
  }

  FUNC_4();


  if (FUNC_6(VAR_7)) {
   VAR_15 = -VAR_0;
   break;
  }

  VAR_13 = VAR_14;
 }

 VAR_7->state = VAR_2;
 FUNC_3(&VAR_12->delta_msr_wait, &VAR_8);

 return VAR_15;
}
