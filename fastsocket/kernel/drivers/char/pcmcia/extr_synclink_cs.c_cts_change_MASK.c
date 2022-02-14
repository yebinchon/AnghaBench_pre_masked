
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct tty_struct {int hw_stopped; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_11__ {int cts_down; int cts_up; } ;
struct TYPE_10__ {int cts; } ;
struct TYPE_13__ {int serial_signals; int pending_bh; TYPE_3__ port; int event_wait_q; int status_event_wait_q; TYPE_2__ input_signal_events; TYPE_1__ icount; int cts_chkcount; } ;
typedef TYPE_4__ MGSLPC_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_4__*,struct tty_struct*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(MGSLPC_INFO *VAR_9, struct tty_struct *VAR_10)
{
 FUNC_0(VAR_9);
 if ((VAR_9->cts_chkcount)++ >= VAR_5)
  FUNC_1(VAR_9, VAR_3, VAR_6);
 VAR_9->icount.cts++;
 if (VAR_9->serial_signals & VAR_7)
  VAR_9->input_signal_events.cts_up++;
 else
  VAR_9->input_signal_events.cts_down++;
 FUNC_5(&VAR_9->status_event_wait_q);
 FUNC_5(&VAR_9->event_wait_q);

 if (VAR_9->port.flags & VAR_0) {
  if (VAR_10->hw_stopped) {
   if (VAR_9->serial_signals & VAR_7) {
    if (VAR_8 >= VAR_4)
     FUNC_2("CTS tx start...");
    if (VAR_10)
     VAR_10->hw_stopped = 0;
    FUNC_3(VAR_9, VAR_10);
    VAR_9->pending_bh |= VAR_2;
    return;
   }
  } else {
   if (!(VAR_9->serial_signals & VAR_7)) {
    if (VAR_8 >= VAR_4)
     FUNC_2("CTS tx stop...");
    if (VAR_10)
     VAR_10->hw_stopped = 1;
    FUNC_4(VAR_9);
   }
  }
 }
 VAR_9->pending_bh |= VAR_1;
}
