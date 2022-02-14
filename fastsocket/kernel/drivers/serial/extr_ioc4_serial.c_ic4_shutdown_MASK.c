
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* tty; int delta_msr_wait; } ;
struct uart_state {TYPE_2__ port; } ;
struct uart_port {int lock; struct uart_state* state; } ;
struct ioc4_port {int ip_flags; int * ip_port; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ioc4_port* FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ioc4_port*,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_3)
{
 unsigned long VAR_4;
 struct ioc4_port *VAR_5;
 struct uart_state *VAR_6;

 VAR_5 = FUNC_0(VAR_3, 0);
 if (!VAR_5)
  return;

 VAR_6 = VAR_3->state;
 VAR_5->ip_port = ((void*)0);

 FUNC_5(&VAR_6->port.delta_msr_wait);

 if (VAR_6->port.tty)
  FUNC_1(VAR_2, &VAR_6->port.tty->flags);

 FUNC_3(&VAR_3->lock, VAR_4);
 FUNC_2(VAR_5, VAR_0, 0);
 VAR_5->ip_flags = VAR_1;
 FUNC_4(&VAR_3->lock, VAR_4);
}
