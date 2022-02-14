
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tty_struct {int dummy; } ;
struct TYPE_10__ {int flags; int open_wait; } ;
struct TYPE_9__ {int dcd_down; int dcd_up; } ;
struct TYPE_8__ {int dcd; } ;
struct TYPE_11__ {int serial_signals; int pending_bh; TYPE_3__ port; int device_name; int event_wait_q; int status_event_wait_q; int netdev; scalar_t__ netcount; TYPE_2__ input_signal_events; TYPE_1__ icount; int dcd_chkcount; } ;
typedef TYPE_4__ MGSLPC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (struct tty_struct*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(MGSLPC_INFO *VAR_8, struct tty_struct *VAR_9)
{
 FUNC_0(VAR_8);
 if ((VAR_8->dcd_chkcount)++ >= VAR_4)
  FUNC_1(VAR_8, VAR_2, VAR_5);
 VAR_8->icount.dcd++;
 if (VAR_8->serial_signals & VAR_6) {
  VAR_8->input_signal_events.dcd_up++;
 }
 else
  VAR_8->input_signal_events.dcd_down++;
 FUNC_6(&VAR_8->status_event_wait_q);
 FUNC_6(&VAR_8->event_wait_q);

 if (VAR_8->port.flags & VAR_0) {
  if (VAR_7 >= VAR_3)
   FUNC_4("%s CD now %s...", VAR_8->device_name,
          (VAR_8->serial_signals & VAR_6) ? "on" : "off");
  if (VAR_8->serial_signals & VAR_6)
   FUNC_6(&VAR_8->port.open_wait);
  else {
   if (VAR_7 >= VAR_3)
    FUNC_4("doing serial hangup...");
   if (VAR_9)
    FUNC_5(VAR_9);
  }
 }
 VAR_8->pending_bh |= VAR_1;
}
