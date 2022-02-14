
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int result; int* cmnd; scalar_t__ underflow; int sense_buffer; int cmd_len; TYPE_2__* device; } ;
struct ipr_resource_entry {scalar_t__ needs_sync_complete; int res_handle; TYPE_3__* sata_port; } ;
struct TYPE_10__ {int flags_hi; int request_type; int flags_lo; int cdb; } ;
struct ipr_ioarcb {TYPE_5__ cmd_pkt; int res_handle; } ;
struct ipr_ioa_cfg {scalar_t__ sis64; struct ipr_hrr_queue* hrrq; TYPE_4__* host; } ;
struct ipr_hrr_queue {int ioa_is_dead; int lock; int hrrq_pending_q; int hrrq_free_q; int allow_cmds; scalar_t__ removing_ioa; } ;
struct ipr_cmnd {int queue; int done; struct scsi_cmnd* scsi_cmd; struct ipr_ioarcb ioarcb; } ;
struct TYPE_9__ {int host_lock; } ;
struct TYPE_8__ {int ap; } ;
struct TYPE_7__ {struct ipr_resource_entry* hostdata; TYPE_1__* host; } ;
struct TYPE_6__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ipr_resource_entry*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ipr_cmnd* FUNC_1 (struct ipr_hrr_queue*) ;
 int FUNC_2 (struct scsi_cmnd*,void (*) (struct scsi_cmnd*),int ) ;
 int FUNC_3 (struct ipr_ioa_cfg*,struct ipr_cmnd*) ;
 int FUNC_4 (struct ipr_ioa_cfg*,struct ipr_cmnd*) ;
 int FUNC_5 (struct ipr_ioa_cfg*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct ipr_cmnd*,int ) ;
 scalar_t__ FUNC_8 (struct ipr_resource_entry*) ;
 scalar_t__ FUNC_9 (struct ipr_resource_entry*) ;
 scalar_t__ FUNC_10 (struct ipr_resource_entry*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_11 (struct ipr_cmnd*) ;
 int FUNC_12 (struct ipr_cmnd*,int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (int *,int *) ;
 int FUNC_15 (int ,int*,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (struct scsi_cmnd*) ;
 int FUNC_18 (int ,unsigned long) ;
 int FUNC_19 (int ,unsigned long) ;
 void FUNC_20 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct scsi_cmnd *VAR_14,
       void (*VAR_15) (struct scsi_cmnd *))
{
 struct ipr_ioa_cfg *VAR_16;
 struct ipr_resource_entry *VAR_17;
 struct ipr_ioarcb *VAR_18;
 struct ipr_cmnd *VAR_19;
 unsigned long VAR_20, VAR_21;
 int VAR_22 = 0;
 struct ipr_hrr_queue *VAR_23;
 int VAR_24;

 VAR_16 = (struct ipr_ioa_cfg *)VAR_14->device->host->hostdata;

 VAR_14->scsi_done = VAR_15;
 VAR_14->result = (VAR_1 << 16);
 VAR_17 = VAR_14->device->hostdata;

 if (FUNC_8(VAR_17) && VAR_17->sata_port) {
  FUNC_18(VAR_16->host->host_lock, VAR_21);
  VAR_22 = FUNC_2(VAR_14, VAR_15, VAR_17->sata_port->ap);
  FUNC_19(VAR_16->host->host_lock, VAR_21);
  return VAR_22;
 }

 VAR_24 = FUNC_5(VAR_16);
 VAR_23 = &VAR_16->hrrq[VAR_24];

 FUNC_18(VAR_23->lock, VAR_20);





 if (FUNC_21(!VAR_23->allow_cmds && !VAR_23->ioa_is_dead && !VAR_23->removing_ioa)) {
  FUNC_19(VAR_23->lock, VAR_20);
  return VAR_10;
 }





 if (FUNC_21(VAR_23->ioa_is_dead || VAR_23->removing_ioa || !VAR_17)) {
  FUNC_19(VAR_23->lock, VAR_20);
  goto err_nodev;
 }

 VAR_19 = FUNC_1(VAR_23);
 if (VAR_19 == ((void*)0)) {
  FUNC_19(VAR_23->lock, VAR_20);
  return VAR_10;
 }
 FUNC_19(VAR_23->lock, VAR_20);

 FUNC_7(VAR_19, VAR_12);
 VAR_18 = &VAR_19->ioarcb;

 FUNC_15(VAR_18->cmd_pkt.cdb, VAR_14->cmnd, VAR_14->cmd_len);
 VAR_19->scsi_cmd = VAR_14;
 VAR_19->done = VAR_13;

 if (FUNC_9(VAR_17) || FUNC_10(VAR_17)) {
  if (VAR_14->underflow == 0)
   VAR_18->cmd_pkt.flags_hi |= VAR_3;

  VAR_18->cmd_pkt.flags_hi |= VAR_2;
  if (FUNC_9(VAR_17))
   VAR_18->cmd_pkt.flags_lo |= VAR_6;
  VAR_18->cmd_pkt.flags_lo |= VAR_5;
  VAR_18->cmd_pkt.flags_lo |= FUNC_6(VAR_14);
 }

 if (VAR_14->cmnd[0] >= 0xC0 &&
     (!FUNC_9(VAR_17) || VAR_14->cmnd[0] == VAR_7)) {
  VAR_18->cmd_pkt.request_type = VAR_8;
 }

 if (FUNC_13(VAR_22 == 0)) {
  if (VAR_16->sis64)
   VAR_22 = FUNC_4(VAR_16, VAR_19);
  else
   VAR_22 = FUNC_3(VAR_16, VAR_19);
 }

 FUNC_18(VAR_23->lock, VAR_20);
 if (FUNC_21(VAR_22 || (!VAR_23->allow_cmds && !VAR_23->ioa_is_dead))) {
  FUNC_14(&VAR_19->queue, &VAR_23->hrrq_free_q);
  FUNC_19(VAR_23->lock, VAR_20);
  if (!VAR_22)
   FUNC_17(VAR_14);
  return VAR_10;
 }

 if (FUNC_21(VAR_23->ioa_is_dead)) {
  FUNC_14(&VAR_19->queue, &VAR_23->hrrq_free_q);
  FUNC_19(VAR_23->lock, VAR_20);
  FUNC_17(VAR_14);
  goto err_nodev;
 }

 VAR_18->res_handle = VAR_17->res_handle;
 if (VAR_17->needs_sync_complete) {
  VAR_18->cmd_pkt.flags_hi |= VAR_4;
  VAR_17->needs_sync_complete = 0;
 }
 FUNC_14(&VAR_19->queue, &VAR_23->hrrq_pending_q);
 FUNC_12(VAR_19, VAR_9, FUNC_0(VAR_17));
 FUNC_11(VAR_19);
 FUNC_19(VAR_23->lock, VAR_20);
 return 0;

err_nodev:
 FUNC_18(VAR_23->lock, VAR_20);
 FUNC_16(VAR_14->sense_buffer, 0, VAR_11);
 VAR_14->result = (VAR_0 << 16);
 VAR_14->scsi_done(VAR_14);
 FUNC_19(VAR_23->lock, VAR_20);
 return 0;
}
