
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct fc_seq {int dummy; } ;
struct fc_rport_libfc_priv {int flags; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {int state; int xfer_contig_end; int data_len; TYPE_2__* cmd; int xfer_len; TYPE_1__* rport; scalar_t__ recov_retry; } ;
struct fc_els_rec_acc {int reca_e_stat; int reca_fc4value; } ;
struct fc_els_ls_rjt {int er_reason; int er_explan; } ;
typedef enum fc_rctl { ____Placeholder_fc_rctl } fc_rctl ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_4__ {int sc_data_direction; } ;
struct TYPE_3__ {struct fc_rport_libfc_priv* dd_data; int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct fc_fcp_pkt*,char*,...) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 scalar_t__ FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*) ;
 int FUNC_4 (struct fc_fcp_pkt*,struct fc_frame*) ;
 int FUNC_5 (struct fc_fcp_pkt*,int ) ;
 int FUNC_6 (struct fc_fcp_pkt*) ;
 int FUNC_7 (struct fc_fcp_pkt*,int,int) ;
 int FUNC_8 (struct fc_fcp_pkt*,int ) ;
 int FUNC_9 (struct fc_fcp_pkt*) ;
 int FUNC_10 (struct fc_frame*) ;
 void* FUNC_11 (struct fc_frame*,int) ;
 scalar_t__ FUNC_12 (struct fc_frame*) ;
 int FUNC_13 (struct fc_fcp_pkt*) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct fc_seq *VAR_12, struct fc_frame *VAR_13, void *VAR_14)
{
 struct fc_fcp_pkt *VAR_15 = (struct fc_fcp_pkt *)VAR_14;
 struct fc_els_rec_acc *VAR_16;
 struct fc_els_ls_rjt *VAR_17;
 u32 VAR_18;
 u8 VAR_19;
 u32 VAR_20;
 enum dma_data_direction VAR_21;
 enum fc_rctl VAR_22;
 struct fc_rport_libfc_priv *VAR_23;

 if (FUNC_1(VAR_13)) {
  FUNC_4(VAR_15, VAR_13);
  return;
 }

 if (FUNC_2(VAR_15))
  goto out;

 VAR_15->recov_retry = 0;
 VAR_19 = FUNC_12(VAR_13);
 if (VAR_19 == VAR_3) {
  VAR_17 = FUNC_11(VAR_13, sizeof(*VAR_17));
  switch (VAR_17->er_reason) {
  default:
   FUNC_0(VAR_15, "device %x unexpected REC reject "
       "reason %d expl %d\n",
       VAR_15->rport->port_id, VAR_17->er_reason,
       VAR_17->er_explan);

  case 128:
   FUNC_0(VAR_15, "device does not support REC\n");
   VAR_23 = VAR_15->rport->dd_data;





   VAR_23->flags &= ~VAR_10;
   break;
  case 130:
  case 129:






   if (VAR_17->er_explan == VAR_1 &&
       VAR_15->xfer_len == 0) {
    FUNC_6(VAR_15);
    break;
   }
   FUNC_5(VAR_15, VAR_6);
   break;
  }
 } else if (VAR_19 == VAR_2) {
  if (VAR_15->state & VAR_11)
   goto unlock_out;

  VAR_21 = VAR_15->cmd->sc_data_direction;
  VAR_16 = FUNC_11(VAR_13, sizeof(*VAR_16));
  VAR_20 = FUNC_14(VAR_16->reca_fc4value);
  VAR_18 = FUNC_14(VAR_16->reca_e_stat);

  if (VAR_18 & VAR_4) {
   if (VAR_21 == VAR_0) {
    VAR_22 = VAR_7;
   } else if (VAR_15->xfer_contig_end == VAR_20) {
    VAR_22 = VAR_7;
   } else {
    VAR_20 = VAR_15->xfer_contig_end;
    VAR_22 = VAR_9;
   }
   FUNC_7(VAR_15, VAR_22, VAR_20);
  } else if (VAR_18 & VAR_5) {




   FUNC_8(VAR_15, FUNC_13(VAR_15));
  } else {
   VAR_22 = VAR_9;
   if (VAR_21 == VAR_0) {
    VAR_22 = VAR_7;
    if (VAR_20 < VAR_15->data_len)
     VAR_22 = VAR_8;
   } else if (VAR_20 == VAR_15->xfer_contig_end) {
    VAR_22 = VAR_7;
   } else if (VAR_15->xfer_contig_end < VAR_20) {
    VAR_20 = VAR_15->xfer_contig_end;
   }
   FUNC_7(VAR_15, VAR_22, VAR_20);
  }
 }
unlock_out:
 FUNC_9(VAR_15);
out:
 FUNC_3(VAR_15);
 FUNC_10(VAR_13);
}
