
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int dsr_down; int dsr_up; } ;
struct TYPE_7__ {int dsr; } ;
struct TYPE_9__ {int serial_signals; int pending_bh; int event_wait_q; int status_event_wait_q; TYPE_2__ input_signal_events; TYPE_1__ icount; int dsr_chkcount; } ;
typedef TYPE_3__ MGSLPC_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(MGSLPC_INFO *VAR_4)
{
 FUNC_0(VAR_4);
 if ((VAR_4->dsr_chkcount)++ >= VAR_1)
  FUNC_1(VAR_4, VAR_2);
 VAR_4->icount.dsr++;
 if (VAR_4->serial_signals & VAR_3)
  VAR_4->input_signal_events.dsr_up++;
 else
  VAR_4->input_signal_events.dsr_down++;
 FUNC_2(&VAR_4->status_event_wait_q);
 FUNC_2(&VAR_4->event_wait_q);
 VAR_4->pending_bh |= VAR_0;
}
