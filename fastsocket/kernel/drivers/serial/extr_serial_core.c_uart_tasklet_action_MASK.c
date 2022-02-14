
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tty; } ;
struct uart_state {TYPE_1__ port; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0)
{
 struct uart_state *VAR_1 = (struct uart_state *)VAR_0;
 FUNC_0(VAR_1->port.tty);
}
