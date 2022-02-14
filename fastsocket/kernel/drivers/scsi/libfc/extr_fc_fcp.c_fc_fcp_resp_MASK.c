
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct fcp_resp_rsp_info {scalar_t__ rsp_code; } ;
struct fcp_resp_ext {int fr_resid; int fr_sns_len; int fr_rsp_len; } ;
struct fcp_resp {scalar_t__ fr_status; int fr_flags; } ;
struct fc_frame_header {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_fcp_pkt {scalar_t__ cdb_status; int scsi_comp_flags; int data_len; scalar_t__ scsi_resid; int xfer_len; void* status_code; TYPE_1__* rport; int state; TYPE_2__* cmd; int tm_done; scalar_t__ wait_for_comp; } ;
struct TYPE_4__ {scalar_t__ underflow; int sense_buffer; } ;
struct TYPE_3__ {int port_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (struct fc_fcp_pkt*,char*,int,int,int,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*) ;
 int FUNC_4 (struct fc_fcp_pkt*,int) ;
 scalar_t__ FUNC_5 (struct fc_frame*) ;
 int FUNC_6 (struct fc_frame*) ;
 int FUNC_7 (int ,char*,int) ;
 void* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct fc_fcp_pkt *VAR_11, struct fc_frame *VAR_12)
{
 struct fc_frame_header *VAR_13;
 struct fcp_resp *VAR_14;
 struct fcp_resp_ext *VAR_15;
 struct fcp_resp_rsp_info *VAR_16;
 u32 VAR_17;
 u32 VAR_18;
 u32 VAR_19 = 0;
 u32 VAR_20 = 0;
 u8 VAR_21 = 0;

 VAR_17 = FUNC_6(VAR_12);
 VAR_13 = (struct fc_frame_header *)FUNC_5(VAR_12);
 if (FUNC_10(VAR_17 < sizeof(*VAR_13) + sizeof(*VAR_14)))
  goto len_err;
 VAR_17 -= sizeof(*VAR_13);
 VAR_14 = (struct fcp_resp *)(VAR_13 + 1);
 VAR_11->cdb_status = VAR_14->fr_status;
 VAR_21 = VAR_14->fr_flags;
 VAR_11->scsi_comp_flags = VAR_21;
 VAR_18 = VAR_11->data_len;


 FUNC_3(VAR_11);

 if (FUNC_10((VAR_21 & ~VAR_0) || VAR_14->fr_status)) {
  VAR_15 = (void *)(VAR_14 + 1);
  if (VAR_21 & (VAR_5 | VAR_6)) {
   if (VAR_17 < sizeof(*VAR_14) + sizeof(*VAR_15))
    goto len_err;
   VAR_16 = (struct fcp_resp_rsp_info *)(VAR_15 + 1);
   if (VAR_21 & VAR_5) {
    VAR_19 = FUNC_8(VAR_15->fr_rsp_len);
    if ((VAR_19 != VAR_3) &&
        (VAR_19 != VAR_4))
     goto len_err;
    if (VAR_11->wait_for_comp) {

     VAR_11->cdb_status = VAR_16->rsp_code;
     FUNC_1(&VAR_11->tm_done);




     return;
    }
   }
   if (VAR_21 & VAR_6) {
    VAR_20 = FUNC_8(VAR_15->fr_sns_len);
    if (VAR_20 > VAR_10)
     VAR_20 = VAR_10;
    FUNC_7(VAR_11->cmd->sense_buffer,
           (char *)VAR_16 + VAR_19, VAR_20);
   }
  }
  if (VAR_21 & (VAR_2 | VAR_1)) {
   if (VAR_17 < sizeof(*VAR_14) + sizeof(VAR_15->fr_resid))
    goto len_err;
   if (VAR_21 & VAR_2) {
    VAR_11->scsi_resid = FUNC_8(VAR_15->fr_resid);
    if (!(VAR_21 & VAR_6) &&
        (VAR_14->fr_status == 0) &&
        (FUNC_9(VAR_11->cmd) -
         VAR_11->scsi_resid) < VAR_11->cmd->underflow)
     goto err;
    VAR_18 -= VAR_11->scsi_resid;
   } else {
    VAR_11->status_code = VAR_8;
   }
  }
 }
 VAR_11->state |= VAR_9;




 if (FUNC_10(VAR_11->xfer_len != VAR_18)) {
  if (VAR_11->xfer_len < VAR_18) {





   FUNC_4(VAR_11, 2);
   return;
  }
  VAR_11->status_code = VAR_7;
  FUNC_0(VAR_11, "tgt %6.6x xfer len %zx greater than expected, "
      "len %x, data len %x\n",
      VAR_11->rport->port_id,
      VAR_11->xfer_len, VAR_18, VAR_11->data_len);
 }
 FUNC_2(VAR_11);
 return;

len_err:
 FUNC_0(VAR_11, "short FCP response. flags 0x%x len %u respl %u "
     "snsl %u\n", VAR_21, FUNC_6(VAR_12), VAR_19, VAR_20);
err:
 VAR_11->status_code = VAR_8;
 FUNC_2(VAR_11);
}
