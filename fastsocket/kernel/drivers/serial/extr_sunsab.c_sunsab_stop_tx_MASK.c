
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_sunsab_port {TYPE_2__* regs; int interrupt_mask1; } ;
struct uart_port {int dummy; } ;
struct TYPE_3__ {int imr1; } ;
struct TYPE_4__ {TYPE_1__ w; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct uart_port *VAR_1)
{
 struct uart_sunsab_port *VAR_2 = (struct uart_sunsab_port *) VAR_1;

 VAR_2->interrupt_mask1 |= VAR_0;
 FUNC_0(VAR_2->interrupt_mask1, &VAR_2->regs->w.imr1);
}
