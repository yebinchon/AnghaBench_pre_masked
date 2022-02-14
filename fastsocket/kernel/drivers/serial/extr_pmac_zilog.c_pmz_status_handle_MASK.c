
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dsr; } ;
struct TYPE_9__ {TYPE_3__* state; TYPE_1__ icount; } ;
struct uart_pmac_port {unsigned char prev_status; int flags; TYPE_4__ port; } ;
struct TYPE_7__ {int delta_msr_wait; } ;
struct TYPE_8__ {TYPE_2__ port; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 scalar_t__ FUNC_0 (struct uart_pmac_port*) ;
 scalar_t__ FUNC_1 (struct uart_pmac_port*) ;
 unsigned char FUNC_2 (struct uart_pmac_port*,int ) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,unsigned char) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct uart_pmac_port*,int ,int ) ;
 int FUNC_7 (struct uart_pmac_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_pmac_port *VAR_7)
{
 unsigned char VAR_8;

 VAR_8 = FUNC_2(VAR_7, VAR_4);
 FUNC_6(VAR_7, VAR_4, VAR_5);
 FUNC_7(VAR_7);

 if (FUNC_0(VAR_7) && FUNC_1(VAR_7)) {
  if (VAR_8 & VAR_6)
   VAR_7->port.icount.dsr++;






  if ((VAR_8 ^ VAR_7->prev_status) & VAR_2)
   FUNC_4(&VAR_7->port,
            (VAR_8 & VAR_2));
  if ((VAR_8 ^ VAR_7->prev_status) & VAR_1)
   FUNC_3(&VAR_7->port,
            !(VAR_8 & VAR_1));

  FUNC_5(&VAR_7->port.state->port.delta_msr_wait);
 }

 if (VAR_8 & VAR_0)
  VAR_7->flags |= VAR_3;

 VAR_7->prev_status = VAR_8;
}
