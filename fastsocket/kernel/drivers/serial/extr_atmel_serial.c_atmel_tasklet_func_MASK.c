
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dsr; int rng; } ;
struct uart_port {int lock; TYPE_3__* state; TYPE_1__ icount; } ;
struct atmel_uart_port {unsigned int irq_status; unsigned int irq_status_prev; } ;
struct TYPE_5__ {int delta_msr_wait; } ;
struct TYPE_6__ {TYPE_2__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct atmel_uart_port* FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct uart_port*,int) ;
 int FUNC_10 (struct uart_port*,int) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_4)
{
 struct uart_port *VAR_5 = (struct uart_port *)VAR_4;
 struct atmel_uart_port *VAR_6 = FUNC_8(VAR_5);
 unsigned int VAR_7;
 unsigned int VAR_8;


 FUNC_6(&VAR_5->lock);

 if (FUNC_5(VAR_5))
  FUNC_3(VAR_5);
 else
  FUNC_2(VAR_5);

 VAR_7 = VAR_6->irq_status;
 VAR_8 = VAR_7 ^ VAR_6->irq_status_prev;

 if (VAR_8 & (VAR_3 | VAR_2
    | VAR_1 | VAR_0)) {

  if (VAR_8 & VAR_3)
   VAR_5->icount.rng++;
  if (VAR_8 & VAR_2)
   VAR_5->icount.dsr++;
  if (VAR_8 & VAR_1)
   FUNC_10(VAR_5, !(VAR_7 & VAR_1));
  if (VAR_8 & VAR_0)
   FUNC_9(VAR_5, !(VAR_7 & VAR_0));

  FUNC_11(&VAR_5->state->port.delta_msr_wait);

  VAR_6->irq_status_prev = VAR_7;
 }

 if (FUNC_4(VAR_5))
  FUNC_0(VAR_5);
 else
  FUNC_1(VAR_5);

 FUNC_7(&VAR_5->lock);
}
