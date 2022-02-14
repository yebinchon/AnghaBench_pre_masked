
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ tty; int open_wait; } ;
struct TYPE_5__ {int dcd; } ;
struct TYPE_4__ {int dcd_down; int dcd_up; } ;
struct slgt_info {int signals; TYPE_3__ port; int pending_bh; int event_wait_q; int status_event_wait_q; int netdev; scalar_t__ netcount; TYPE_2__ icount; int dcd_chkcount; int device_name; TYPE_1__ input_signal_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct slgt_info*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct slgt_info *VAR_6, unsigned short VAR_7)
{
 if (VAR_7 & VAR_2) {
  VAR_6->signals |= VAR_5;
  VAR_6->input_signal_events.dcd_up++;
 } else {
  VAR_6->signals &= ~VAR_5;
  VAR_6->input_signal_events.dcd_down++;
 }
 FUNC_0(("dcd_change %s signals=%04X\n", VAR_6->device_name, VAR_6->signals));
 if ((VAR_6->dcd_chkcount)++ == VAR_3) {
  FUNC_3(VAR_6, VAR_4);
  return;
 }
 VAR_6->icount.dcd++;
 FUNC_5(&VAR_6->status_event_wait_q);
 FUNC_5(&VAR_6->event_wait_q);
 VAR_6->pending_bh |= VAR_1;

 if (VAR_6->port.flags & VAR_0) {
  if (VAR_6->signals & VAR_5)
   FUNC_5(&VAR_6->port.open_wait);
  else {
   if (VAR_6->port.tty)
    FUNC_4(VAR_6->port.tty);
  }
 }
}
