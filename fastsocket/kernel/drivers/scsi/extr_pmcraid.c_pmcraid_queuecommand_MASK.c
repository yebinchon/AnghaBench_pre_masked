
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct scsi_cmnd {void (* scsi_done ) (struct scsi_cmnd*) ;int result; scalar_t__ underflow; int * cmnd; int cmd_len; TYPE_3__* device; } ;
struct TYPE_13__ {int unique_flags1; int array_id; int resource_address; int resource_handle; } ;
struct pmcraid_resource_entry {TYPE_6__ cfg_entry; scalar_t__ sync_reqd; } ;
struct pmcraid_ioarcb {int hrrq_id; int response_handle; int request_flags1; int request_flags0; int request_type; int resource_handle; int cdb; } ;
struct pmcraid_instance {scalar_t__ ioa_state; int num_hrrq; TYPE_5__* host; int last_message_id; scalar_t__ ioa_reset_in_progress; TYPE_2__* inq_data; } ;
struct pmcraid_cmd {int cmd_done; TYPE_4__* ioa_cb; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_12__ {int unique_id; } ;
struct TYPE_11__ {struct pmcraid_ioarcb ioarcb; } ;
struct TYPE_10__ {struct pmcraid_resource_entry* hostdata; TYPE_1__* host; } ;
struct TYPE_9__ {int fw_version; } ;
struct TYPE_8__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_6__) ;
 scalar_t__ FUNC_1 (TYPE_6__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct pmcraid_cmd*) ;
 int FUNC_5 (int,int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,int *,int ) ;
 int FUNC_10 (struct pmcraid_instance*,struct pmcraid_cmd*) ;
 int FUNC_11 (char*) ;
 struct pmcraid_cmd* FUNC_12 (struct pmcraid_instance*) ;
 int FUNC_13 (char*,...) ;
 int VAR_13 ;
 int FUNC_14 (struct pmcraid_cmd*) ;
 int FUNC_15 (struct scsi_cmnd*) ;
 void FUNC_16 (struct scsi_cmnd*) ;
 void FUNC_17 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_18(
 struct scsi_cmnd *VAR_14,
 void (*VAR_15) (struct scsi_cmnd *)
)
{
 struct pmcraid_instance *VAR_16;
 struct pmcraid_resource_entry *VAR_17;
 struct pmcraid_ioarcb *VAR_18;
 struct pmcraid_cmd *VAR_19;
 u32 VAR_20;
 int VAR_21 = 0;

 VAR_16 =
  (struct pmcraid_instance *)VAR_14->device->host->hostdata;
 VAR_20 = FUNC_6(VAR_16->inq_data->fw_version);
 VAR_14->scsi_done = VAR_15;
 VAR_17 = VAR_14->device->hostdata;
 VAR_14->result = (VAR_2 << 16);




 if (VAR_16->ioa_state == VAR_4) {
  FUNC_13("IOA is dead, but queuecommand is scheduled\n");
  VAR_14->result = (VAR_1 << 16);
  VAR_14->scsi_done(VAR_14);
  return 0;
 }


 if (VAR_16->ioa_reset_in_progress)
  return VAR_10;




 if (VAR_14->cmnd[0] == VAR_11) {
  FUNC_13("SYNC_CACHE(0x35), completing in driver itself\n");
  VAR_14->scsi_done(VAR_14);
  return 0;
 }


 VAR_19 = FUNC_12(VAR_16);

 if (VAR_19 == ((void*)0)) {
  FUNC_11("free command block is not available\n");
  return VAR_10;
 }

 VAR_19->scsi_cmd = VAR_14;
 VAR_18 = &(VAR_19->ioa_cb->ioarcb);
 FUNC_9(VAR_18->cdb, VAR_14->cmnd, VAR_14->cmd_len);
 VAR_18->resource_handle = VAR_17->cfg_entry.resource_handle;
 VAR_18->request_type = VAR_9;






 VAR_18->hrrq_id = FUNC_5(1, &(VAR_16->last_message_id)) %
     VAR_16->num_hrrq;
 VAR_19->cmd_done = VAR_13;

 if (FUNC_0(VAR_17->cfg_entry) || FUNC_1(VAR_17->cfg_entry)) {
  if (VAR_14->underflow == 0)
   VAR_18->request_flags0 |= VAR_3;

  if (VAR_17->sync_reqd) {
   VAR_18->request_flags0 |= VAR_12;
   VAR_17->sync_reqd = 0;
  }

  VAR_18->request_flags0 |= VAR_5;
  VAR_18->request_flags1 |= FUNC_15(VAR_14);

  if (FUNC_0(VAR_17->cfg_entry))
   VAR_18->request_flags1 |= VAR_0;
 }

 VAR_21 = FUNC_10(VAR_16, VAR_19);

 FUNC_13("command (%d) CDB[0] = %x for %x:%x:%x:%x\n",
       FUNC_7(VAR_18->response_handle) >> 2,
       VAR_14->cmnd[0], VAR_16->host->unique_id,
       FUNC_1(VAR_17->cfg_entry) ? VAR_8 :
   VAR_7,
       FUNC_1(VAR_17->cfg_entry) ?
   (VAR_20 <= VAR_6 ?
    VAR_17->cfg_entry.unique_flags1 :
     VAR_17->cfg_entry.array_id & 0xFF) :
   FUNC_3(VAR_17->cfg_entry.resource_address),
       FUNC_2(VAR_17->cfg_entry.resource_address));

 if (FUNC_8(VAR_21 == 0)) {
  FUNC_4(VAR_19);
 } else {
  FUNC_11("queuecommand could not build ioadl\n");
  FUNC_14(VAR_19);
  VAR_21 = VAR_10;
 }

 return VAR_21;
}
