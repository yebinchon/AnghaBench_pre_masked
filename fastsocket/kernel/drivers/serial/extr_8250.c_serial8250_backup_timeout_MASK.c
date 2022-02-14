
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int timeout; int irq; scalar_t__ x_char; TYPE_1__* state; int lock; } ;
struct uart_8250_port {unsigned int lsr_saved_flags; int ier; TYPE_2__ port; int timer; } ;
struct TYPE_3__ {int xmit; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct uart_8250_port*) ;
 unsigned int FUNC_4 (struct uart_8250_port*,int ) ;
 int FUNC_5 (struct uart_8250_port*,int ,unsigned int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_11)
{
 struct uart_8250_port *VAR_12 = (struct uart_8250_port *)VAR_11;
 unsigned int VAR_13, VAR_14 = 0, VAR_15;
 unsigned long VAR_16;





 if (FUNC_0(VAR_12->port.irq)) {
  VAR_14 = FUNC_4(VAR_12, VAR_2);
  FUNC_5(VAR_12, VAR_2, 0);
 }

 VAR_13 = FUNC_4(VAR_12, VAR_4);







 FUNC_6(&VAR_12->port.lock, VAR_16);
 VAR_15 = FUNC_4(VAR_12, VAR_8);
 VAR_12->lsr_saved_flags |= VAR_15 & VAR_1;
 FUNC_7(&VAR_12->port.lock, VAR_16);
 if ((VAR_13 & VAR_6) && (VAR_12->ier & VAR_3) &&
     (!FUNC_8(&VAR_12->port.state->xmit) || VAR_12->port.x_char) &&
     (VAR_15 & VAR_9)) {
  VAR_13 &= ~(VAR_5 | VAR_6);
  VAR_13 |= VAR_7;
 }

 if (!(VAR_13 & VAR_6))
  FUNC_3(VAR_12);

 if (FUNC_0(VAR_12->port.irq))
  FUNC_5(VAR_12, VAR_2, VAR_14);


 FUNC_1(&VAR_12->timer,
  VAR_10 + FUNC_2(VAR_12->port.timeout) + VAR_0 / 5);
}
