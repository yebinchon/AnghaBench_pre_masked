
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port_lh7a40x {unsigned int statusPrev; } ;
struct TYPE_4__ {int dsr; } ;
struct uart_port {TYPE_3__* state; TYPE_1__ icount; } ;
struct TYPE_5__ {int delta_msr_wait; } ;
struct TYPE_6__ {TYPE_2__ port; } ;


 int FUNC_0 (struct uart_port*,int ,int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (struct uart_port*,unsigned int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5 (struct uart_port* VAR_6)
{
 unsigned int VAR_7 = FUNC_1 (VAR_6, VAR_5);
 unsigned int VAR_8
  = VAR_7 ^ ((struct uart_port_lh7a40x*) VAR_6)->statusPrev;

 FUNC_0 (VAR_6, VAR_4, VAR_3);

 if (!VAR_8)
  return;

 ((struct uart_port_lh7a40x*) VAR_6)->statusPrev = VAR_7;

 if (VAR_8 & VAR_1)
  FUNC_3 (VAR_6, VAR_7 & VAR_1);

 if (VAR_8 & VAR_2)
  ++VAR_6->icount.dsr;

 if (VAR_8 & VAR_0)
  FUNC_2 (VAR_6, VAR_7 & VAR_0);

 FUNC_4 (&VAR_6->state->port.delta_msr_wait);
}
