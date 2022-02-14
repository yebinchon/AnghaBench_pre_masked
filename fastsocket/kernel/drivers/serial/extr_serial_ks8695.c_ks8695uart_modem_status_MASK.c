
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int rng; int dsr; } ;
struct uart_port {TYPE_2__* state; TYPE_3__ icount; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int delta_msr_wait; } ;
struct TYPE_5__ {TYPE_1__ port; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct uart_port*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct uart_port *VAR_7 = VAR_6;
 unsigned int VAR_8;




 VAR_8 = FUNC_0(VAR_7);

 if (VAR_8 & VAR_2)
  FUNC_2(VAR_7, VAR_8 & VAR_2);

 if (VAR_8 & VAR_3)
  VAR_7->icount.dsr++;

 if (VAR_8 & VAR_1)
  FUNC_1(VAR_7, VAR_8 & VAR_1);

 if (VAR_8 & VAR_4)
  VAR_7->icount.rng++;

 FUNC_3(&VAR_7->state->port.delta_msr_wait);

 return VAR_0;
}
