
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ seq_release; scalar_t__ seq_assign; scalar_t__ seq_exch_abort; scalar_t__ exch_mgr_reset; scalar_t__ exch_done; scalar_t__ seq_els_rsp_send; scalar_t__ seq_send; scalar_t__ exch_seq_send; scalar_t__ seq_set_resp; scalar_t__ seq_start_next; } ;
struct fc_lport {TYPE_1__ tt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

int FUNC_0(struct fc_lport *VAR_10)
{
 if (!VAR_10->tt.seq_start_next)
  VAR_10->tt.seq_start_next = VAR_9;

 if (!VAR_10->tt.seq_set_resp)
  VAR_10->tt.seq_set_resp = VAR_8;

 if (!VAR_10->tt.exch_seq_send)
  VAR_10->tt.exch_seq_send = VAR_2;

 if (!VAR_10->tt.seq_send)
  VAR_10->tt.seq_send = VAR_7;

 if (!VAR_10->tt.seq_els_rsp_send)
  VAR_10->tt.seq_els_rsp_send = VAR_4;

 if (!VAR_10->tt.exch_done)
  VAR_10->tt.exch_done = VAR_0;

 if (!VAR_10->tt.exch_mgr_reset)
  VAR_10->tt.exch_mgr_reset = VAR_1;

 if (!VAR_10->tt.seq_exch_abort)
  VAR_10->tt.seq_exch_abort = VAR_5;

 if (!VAR_10->tt.seq_assign)
  VAR_10->tt.seq_assign = VAR_3;

 if (!VAR_10->tt.seq_release)
  VAR_10->tt.seq_release = VAR_6;

 return 0;
}
