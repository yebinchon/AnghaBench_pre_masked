
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct fcp_srr {int srr_r_ctl; int srr_rel_off; void* srr_rx_id; void* srr_ox_id; int srr_op; } ;
struct fc_seq {int dummy; } ;
struct fc_rport_libfc_priv {int flags; scalar_t__ rp_state; TYPE_1__* local_port; } ;
struct fc_rport {int port_id; struct fc_rport_libfc_priv* dd_data; } ;
struct TYPE_4__ {struct fc_seq* (* exch_seq_send ) (struct fc_lport*,struct fc_frame*,int ,int ,struct fc_fcp_pkt*,int ) ;} ;
struct fc_lport {TYPE_2__ tt; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int state; void* xfer_contig_end; void* xfer_len; struct fc_seq* recov_seq; struct fc_rport* rport; int seq_ptr; struct fc_lport* lp; } ;
struct fc_exch {int rxid; int oxid; } ;
typedef enum fc_rctl { ____Placeholder_fc_rctl } fc_rctl ;
struct TYPE_3__ {int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct fc_frame* FUNC_0 (struct fc_lport*,int) ;
 int VAR_7 ;
 int FUNC_1 (struct fc_fcp_pkt*) ;
 int FUNC_2 (struct fc_fcp_pkt*) ;
 int VAR_8 ;
 int FUNC_3 (struct fc_frame*,int ,int ,int ,int ,int ,int ) ;
 struct fcp_srr* FUNC_4 (struct fc_frame*,int) ;
 struct fc_exch* FUNC_5 (int ) ;
 unsigned int FUNC_6 (struct fc_fcp_pkt*) ;
 int FUNC_7 (void*) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (struct fcp_srr*,int ,int) ;
 struct fc_seq* FUNC_11 (struct fc_lport*,struct fc_frame*,int ,int ,struct fc_fcp_pkt*,int ) ;

__attribute__((used)) static void FUNC_12(struct fc_fcp_pkt *VAR_9, enum fc_rctl VAR_10, u32 VAR_11)
{
 struct fc_lport *VAR_12 = VAR_9->lp;
 struct fc_rport *VAR_13;
 struct fc_rport_libfc_priv *VAR_14;
 struct fc_exch *VAR_15 = FUNC_5(VAR_9->seq_ptr);
 struct fc_seq *VAR_16;
 struct fcp_srr *VAR_17;
 struct fc_frame *VAR_18;
 unsigned int VAR_19;

 VAR_13 = VAR_9->rport;
 VAR_14 = VAR_13->dd_data;

 if (!(VAR_14->flags & VAR_3) ||
     VAR_14->rp_state != VAR_6)
  goto retry;
 VAR_18 = FUNC_0(VAR_12, sizeof(*VAR_17));
 if (!VAR_18)
  goto retry;

 VAR_17 = FUNC_4(VAR_18, sizeof(*VAR_17));
 FUNC_10(VAR_17, 0, sizeof(*VAR_17));
 VAR_17->srr_op = VAR_0;
 VAR_17->srr_ox_id = FUNC_8(VAR_15->oxid);
 VAR_17->srr_rx_id = FUNC_8(VAR_15->rxid);
 VAR_17->srr_r_ctl = VAR_10;
 VAR_17->srr_rel_off = FUNC_7(VAR_11);

 FUNC_3(VAR_18, VAR_2, VAR_13->port_id,
         VAR_14->local_port->port_id, VAR_5,
         VAR_1, 0);

 VAR_19 = FUNC_6(VAR_9);
 VAR_16 = VAR_12->tt.exch_seq_send(VAR_12, VAR_18, VAR_8,
          VAR_7,
          VAR_9, FUNC_9(VAR_19));
 if (!VAR_16)
  goto retry;

 VAR_9->recov_seq = VAR_16;
 VAR_9->xfer_len = VAR_11;
 VAR_9->xfer_contig_end = VAR_11;
 VAR_9->state &= ~VAR_4;
 FUNC_1(VAR_9);
 return;
retry:
 FUNC_2(VAR_9);
}
