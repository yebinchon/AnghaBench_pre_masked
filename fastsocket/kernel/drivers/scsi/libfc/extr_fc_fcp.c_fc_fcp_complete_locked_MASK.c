
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fc_seq {int dummy; } ;
struct TYPE_2__ {int (* exch_done ) (struct fc_seq*) ;int (* seq_send ) (struct fc_lport*,struct fc_seq*,struct fc_frame*) ;struct fc_seq* (* seq_start_next ) (struct fc_seq*) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int state; scalar_t__ xfer_len; scalar_t__ data_len; int scsi_comp_flags; scalar_t__ scsi_resid; scalar_t__ cmd; struct fc_lport* lp; struct fc_seq* seq_ptr; scalar_t__ io_status; scalar_t__ status_code; } ;
struct fc_exch {int sid; int did; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct fc_frame* FUNC_0 (struct fc_lport*,int ) ;
 int FUNC_1 (struct fc_frame*,int ,int ,int ,int ,int,int ) ;
 int FUNC_2 (struct fc_fcp_pkt*) ;
 struct fc_exch* FUNC_3 (struct fc_seq*) ;
 struct fc_seq* FUNC_4 (struct fc_seq*) ;
 int FUNC_5 (struct fc_lport*,struct fc_seq*,struct fc_frame*) ;
 int FUNC_6 (struct fc_seq*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct fc_fcp_pkt *VAR_11)
{
 struct fc_lport *VAR_12 = VAR_11->lp;
 struct fc_seq *VAR_13;
 struct fc_exch *VAR_14;
 u32 VAR_15;

 if (VAR_11->state & VAR_9)
  return;

 if (VAR_11->state & VAR_8) {
  if (!VAR_11->status_code)
   VAR_11->status_code = VAR_2;
 } else {




  if (VAR_11->xfer_len < VAR_11->data_len && !VAR_11->io_status &&
      (!(VAR_11->scsi_comp_flags & VAR_1) ||
       VAR_11->xfer_len < VAR_11->data_len - VAR_11->scsi_resid)) {
   VAR_11->status_code = VAR_3;
   VAR_11->io_status = 0;
  }
 }

 VAR_13 = VAR_11->seq_ptr;
 if (VAR_13) {
  VAR_11->seq_ptr = ((void*)0);
  if (FUNC_7(VAR_11->scsi_comp_flags & VAR_0)) {
   struct fc_frame *VAR_16;
   struct fc_seq *VAR_17;

   VAR_17 = VAR_12->tt.seq_start_next(VAR_13);
   VAR_16 = FUNC_0(VAR_11->lp, 0);
   if (VAR_16) {
    VAR_15 = VAR_6;
    VAR_15 |= VAR_5 | VAR_4;
    VAR_14 = FUNC_3(VAR_13);
    FUNC_1(VAR_16, VAR_7,
            VAR_14->did, VAR_14->sid,
            VAR_10, VAR_15, 0);
    VAR_12->tt.seq_send(VAR_12, VAR_17, VAR_16);
   }
  }
  VAR_12->tt.exch_done(VAR_13);
 }





 if (VAR_11->cmd)
  FUNC_2(VAR_11);
}
