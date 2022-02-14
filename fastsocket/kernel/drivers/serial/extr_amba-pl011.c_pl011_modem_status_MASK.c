
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dsr; } ;
struct TYPE_9__ {TYPE_3__* state; TYPE_1__ icount; scalar_t__ membase; } ;
struct uart_amba_port {unsigned int old_status; TYPE_4__ port; } ;
struct TYPE_7__ {int delta_msr_wait; } ;
struct TYPE_8__ {TYPE_2__ port; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_4__*,unsigned int) ;
 int FUNC_2 (TYPE_4__*,unsigned int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct uart_amba_port *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_5->port.membase + VAR_0) & VAR_4;

 VAR_7 = VAR_6 ^ VAR_5->old_status;
 VAR_5->old_status = VAR_6;

 if (!VAR_7)
  return;

 if (VAR_7 & VAR_2)
  FUNC_2(&VAR_5->port, VAR_6 & VAR_2);

 if (VAR_7 & VAR_3)
  VAR_5->port.icount.dsr++;

 if (VAR_7 & VAR_1)
  FUNC_1(&VAR_5->port, VAR_6 & VAR_1);

 FUNC_3(&VAR_5->port.state->port.delta_msr_wait);
}
