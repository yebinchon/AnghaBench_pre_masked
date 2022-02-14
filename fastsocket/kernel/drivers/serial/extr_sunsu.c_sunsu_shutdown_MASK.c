
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int iobase; int irq; int lock; int mctrl; } ;
struct uart_sunsu_port {TYPE_1__ port; scalar_t__ ier; } ;
struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct uart_sunsu_port*) ;
 int FUNC_1 (int ,struct uart_sunsu_port*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct uart_sunsu_port*,int ) ;
 int FUNC_4 (struct uart_sunsu_port*,int ) ;
 int FUNC_5 (struct uart_sunsu_port*,int ,int) ;
 int FUNC_6 (struct uart_sunsu_port*,int ,int) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_10(struct uart_port *VAR_11)
{
 struct uart_sunsu_port *VAR_12 = (struct uart_sunsu_port *) VAR_11;
 unsigned long VAR_13;




 VAR_12->ier = 0;
 FUNC_6(VAR_12, VAR_6, 0);

 FUNC_7(&VAR_12->port.lock, VAR_13);
 if (VAR_12->port.flags & VAR_10) {

  FUNC_2((VAR_12->port.iobase & 0xfe0) | 0x1f);
  VAR_12->port.mctrl |= VAR_0;
 } else
  VAR_12->port.mctrl &= ~VAR_1;

 FUNC_9(&VAR_12->port, VAR_12->port.mctrl);
 FUNC_8(&VAR_12->port.lock, VAR_13);




 FUNC_5(VAR_12, VAR_7, FUNC_4(VAR_12, VAR_7) & ~VAR_8);
 FUNC_6(VAR_12, VAR_2, VAR_5 |
      VAR_3 |
      VAR_4);
 FUNC_6(VAR_12, VAR_2, 0);
 (void) FUNC_3(VAR_12, VAR_9);

 FUNC_1(VAR_12->port.irq, VAR_12);
}
