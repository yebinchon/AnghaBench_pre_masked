
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cts; } ;
struct uart_port {TYPE_3__* state; TYPE_1__ icount; } ;
struct TYPE_5__ {int delta_msr_wait; } ;
struct TYPE_6__ {TYPE_2__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_port*,int ,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2)
{
 FUNC_0(VAR_2, VAR_1, VAR_0);
 VAR_2->icount.cts++;
 FUNC_1(&VAR_2->state->port.delta_msr_wait);
}
