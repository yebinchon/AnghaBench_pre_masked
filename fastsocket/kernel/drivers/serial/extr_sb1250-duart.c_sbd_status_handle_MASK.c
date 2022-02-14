
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dsr; } ;
struct uart_port {int line; TYPE_3__* state; TYPE_1__ icount; } ;
struct sbd_port {struct uart_port port; } ;
struct TYPE_5__ {int delta_msr_wait; } ;
struct TYPE_6__ {TYPE_2__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned int VAR_2 ;
 unsigned int FUNC_1 (struct sbd_port*,int ) ;
 int FUNC_2 (struct uart_port*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sbd_port *VAR_3)
{
 struct uart_port *VAR_4 = &VAR_3->port;
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_3, FUNC_0((VAR_4->line) % 2));
 VAR_5 >>= (VAR_4->line) % 2;

 if (VAR_5 & (VAR_0 << VAR_2))
  FUNC_2(VAR_4, !(VAR_5 & VAR_0));

 if (VAR_5 & (VAR_1 << VAR_2))
  VAR_4->icount.dsr++;

 if (VAR_5 & ((VAR_1 | VAR_0) <<
       VAR_2))
  FUNC_3(&VAR_4->state->port.delta_msr_wait);
}
