
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; TYPE_3__* tty; } ;
struct TYPE_6__ {int cts; } ;
struct TYPE_5__ {int cts_down; int cts_up; } ;
struct slgt_info {int signals; TYPE_4__ port; int pending_bh; int event_wait_q; int status_event_wait_q; TYPE_2__ icount; int cts_chkcount; int device_name; TYPE_1__ input_signal_events; } ;
struct TYPE_7__ {int hw_stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct slgt_info*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct slgt_info *VAR_7, unsigned short VAR_8)
{
 if (VAR_8 & VAR_3) {
  VAR_7->signals |= VAR_6;
  VAR_7->input_signal_events.cts_up++;
 } else {
  VAR_7->signals &= ~VAR_6;
  VAR_7->input_signal_events.cts_down++;
 }
 FUNC_0(("cts_change %s signals=%04X\n", VAR_7->device_name, VAR_7->signals));
 if ((VAR_7->cts_chkcount)++ == VAR_4) {
  FUNC_1(VAR_7, VAR_5);
  return;
 }
 VAR_7->icount.cts++;
 FUNC_2(&VAR_7->status_event_wait_q);
 FUNC_2(&VAR_7->event_wait_q);
 VAR_7->pending_bh |= VAR_1;

 if (VAR_7->port.flags & VAR_0) {
  if (VAR_7->port.tty) {
   if (VAR_7->port.tty->hw_stopped) {
    if (VAR_7->signals & VAR_6) {
      VAR_7->port.tty->hw_stopped = 0;
     VAR_7->pending_bh |= VAR_2;
     return;
    }
   } else {
    if (!(VAR_7->signals & VAR_6))
      VAR_7->port.tty->hw_stopped = 1;
   }
  }
 }
}
