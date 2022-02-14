
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dsr; int rng; } ;
struct TYPE_9__ {TYPE_2__* state; TYPE_3__ icount; } ;
struct uart_sunsu_port {TYPE_4__ port; } ;
struct TYPE_6__ {int delta_msr_wait; } ;
struct TYPE_7__ {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct uart_sunsu_port*,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct uart_sunsu_port *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_0);

 if ((VAR_9 & VAR_1) == 0)
  return;

 if (VAR_9 & VAR_7)
  VAR_8->port.icount.rng++;
 if (VAR_9 & VAR_6)
  VAR_8->port.icount.dsr++;
 if (VAR_9 & VAR_5)
  FUNC_2(&VAR_8->port, VAR_9 & VAR_3);
 if (VAR_9 & VAR_4)
  FUNC_1(&VAR_8->port, VAR_9 & VAR_2);

 FUNC_3(&VAR_8->port.state->port.delta_msr_wait);
}
