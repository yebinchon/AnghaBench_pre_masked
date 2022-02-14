
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int result; void (* scsi_done ) (struct scsi_cmnd*) ;scalar_t__ sc_data_direction; TYPE_1__* device; } ;
struct fc_stats {int ControlRequests; int OutputBytes; int OutputRequests; int InputBytes; int InputRequests; } ;
struct fc_rport_libfc_priv {int dummy; } ;
struct fc_rport {struct fc_rport_libfc_priv* dd_data; } ;
struct fc_remote_port {int dummy; } ;
struct fc_lport {int stats; scalar_t__ qfull; } ;
struct fc_fcp_pkt {int state; scalar_t__ req_flags; scalar_t__ data_len; scalar_t__ xfer_len; struct fc_rport* rport; struct scsi_cmnd* cmd; } ;
struct TYPE_2__ {int host; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fc_lport*) ;
 int FUNC_1 (struct fc_lport*) ;
 struct fc_fcp_pkt* FUNC_2 (struct fc_lport*,int ) ;
 int FUNC_3 (struct fc_fcp_pkt*) ;
 int FUNC_4 (struct fc_lport*,struct fc_fcp_pkt*) ;
 int FUNC_5 (struct fc_rport*) ;
 int FUNC_6 () ;
 struct fc_stats* FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (TYPE_1__*) ;
 struct fc_lport* FUNC_11 (int ) ;
 struct fc_rport* FUNC_12 (int ) ;

int FUNC_13(struct scsi_cmnd *VAR_8, void (*VAR_9)(struct scsi_cmnd *))
{
 struct fc_lport *VAR_10;
 struct fc_rport *VAR_11 = FUNC_12(FUNC_10(VAR_8->device));
 struct fc_fcp_pkt *VAR_12;
 struct fc_rport_libfc_priv *VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 struct fc_stats *VAR_16;

 VAR_10 = FUNC_11(VAR_8->device->host);

 VAR_14 = FUNC_5(VAR_11);
 if (VAR_14) {
  VAR_8->result = VAR_14;
  VAR_9(VAR_8);
  return 0;
 }

 if (!*(struct fc_remote_port **)VAR_11->dd_data) {




  VAR_8->result = VAR_0 << 16;
  VAR_9(VAR_8);
  goto out;
 }

 VAR_13 = VAR_11->dd_data;

 if (!FUNC_1(VAR_10)) {
  if (VAR_10->qfull)
   FUNC_0(VAR_10);
  VAR_15 = VAR_7;
  goto out;
 }

 VAR_12 = FUNC_2(VAR_10, VAR_6);
 if (VAR_12 == ((void*)0)) {
  VAR_15 = VAR_7;
  goto out;
 }




 VAR_12->cmd = VAR_8;
 VAR_12->rport = VAR_11;
 VAR_8->scsi_done = VAR_9;




 VAR_12->data_len = FUNC_9(VAR_8);
 VAR_12->xfer_len = 0;




 VAR_16 = FUNC_7(VAR_10->stats, FUNC_6());
 if (VAR_8->sc_data_direction == VAR_1) {
  VAR_12->req_flags = VAR_4;
  VAR_16->InputRequests++;
  VAR_16->InputBytes += VAR_12->data_len;
 } else if (VAR_8->sc_data_direction == VAR_2) {
  VAR_12->req_flags = VAR_5;
  VAR_16->OutputRequests++;
  VAR_16->OutputBytes += VAR_12->data_len;
 } else {
  VAR_12->req_flags = 0;
  VAR_16->ControlRequests++;
 }
 FUNC_8();






 VAR_14 = FUNC_4(VAR_10, VAR_12);
 if (VAR_14 != 0) {
  VAR_12->state = VAR_3;
  FUNC_3(VAR_12);
  VAR_15 = VAR_7;
 }
out:
 return VAR_15;
}
