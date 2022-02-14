
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; scalar_t__ membase; } ;
struct uart_amba_port {TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2, int VAR_3)
{
 struct uart_amba_port *VAR_4 = (struct uart_amba_port *)VAR_2;
 unsigned long VAR_5;
 unsigned int VAR_6;

 FUNC_1(&VAR_4->port.lock, VAR_5);
 VAR_6 = FUNC_0(VAR_4->port.membase + VAR_0);
 if (VAR_3 == -1)
  VAR_6 |= VAR_1;
 else
  VAR_6 &= ~VAR_1;
 FUNC_3(VAR_6, VAR_4->port.membase + VAR_0);
 FUNC_2(&VAR_4->port.lock, VAR_5);
}
