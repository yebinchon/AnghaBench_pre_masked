
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {scalar_t__ hw_stopped; scalar_t__ stopped; struct gs_port* driver_data; } ;
struct TYPE_3__ {int flags; } ;
struct gs_port {scalar_t__ xmit_cnt; TYPE_2__* rd; TYPE_1__ port; int xmit_buf; } ;
struct TYPE_4__ {int (* enable_tx_interrupts ) (struct gs_port*) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct gs_port*) ;

void FUNC_3(struct tty_struct * VAR_1)
{
 struct gs_port *VAR_2;

 FUNC_0 ();

 VAR_2 = VAR_1->driver_data;

 if (!VAR_2) return;

 if (VAR_2->xmit_cnt <= 0 || VAR_1->stopped || VAR_1->hw_stopped ||
     !VAR_2->xmit_buf) {
  FUNC_1 ();
  return;
 }


 VAR_2->port.flags |= VAR_0;
 VAR_2->rd->enable_tx_interrupts (VAR_2);
 FUNC_1 ();
}
