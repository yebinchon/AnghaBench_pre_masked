
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct uart_8250_port {unsigned int lsr_saved_flags; TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct uart_8250_port*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_4)
{
 struct uart_8250_port *VAR_5 = (struct uart_8250_port *)VAR_4;
 unsigned long VAR_6;
 unsigned int VAR_7;

 FUNC_1(&VAR_5->port.lock, VAR_6);
 VAR_7 = FUNC_0(VAR_5, VAR_3);
 VAR_5->lsr_saved_flags |= VAR_7 & VAR_1;
 FUNC_2(&VAR_5->port.lock, VAR_6);

 return (VAR_7 & VAR_0) == VAR_0 ? VAR_2 : 0;
}
