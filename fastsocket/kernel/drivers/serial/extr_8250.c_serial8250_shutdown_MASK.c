
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_3__ {int flags; int iobase; int irq; int lock; int mctrl; } ;
struct TYPE_4__ {int function; } ;
struct uart_8250_port {TYPE_1__ port; TYPE_2__ timer; scalar_t__ ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct uart_8250_port*) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct uart_8250_port*,int ) ;
 int FUNC_7 (struct uart_8250_port*,int ) ;
 int FUNC_8 (struct uart_8250_port*,int ,int) ;
 int FUNC_9 (struct uart_8250_port*,int ,int ) ;
 int FUNC_10 (struct uart_8250_port*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_13(struct uart_port *VAR_8)
{
 struct uart_8250_port *VAR_9 = (struct uart_8250_port *)VAR_8;
 unsigned long VAR_10;




 VAR_9->ier = 0;
 FUNC_9(VAR_9, VAR_2, 0);

 FUNC_11(&VAR_9->port.lock, VAR_10);
 if (VAR_9->port.flags & VAR_6) {

  FUNC_2((VAR_9->port.iobase & 0xfe0) | 0x1f);
  VAR_9->port.mctrl |= VAR_0;
 } else
  VAR_9->port.mctrl &= ~VAR_1;

 FUNC_5(&VAR_9->port, VAR_9->port.mctrl);
 FUNC_12(&VAR_9->port.lock, VAR_10);




 FUNC_8(VAR_9, VAR_3, FUNC_7(VAR_9, VAR_3) & ~VAR_4);
 FUNC_4(VAR_9);
 (void) FUNC_6(VAR_9, VAR_5);

 FUNC_0(&VAR_9->timer);
 VAR_9->timer.function = VAR_7;
 if (FUNC_3(VAR_9->port.irq))
  FUNC_10(VAR_9);
}
