
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct scsi_cmnd {int result; int sense_buffer; TYPE_2__* device; int * cmnd; } ;
struct pmcraid_resource_entry {int sync_reqd; int cfg_entry; int reset_progress; int write_failures; int read_failures; } ;
struct pmcraid_ioasa {short auto_sense_length; int sense_data; int ioasc; } ;
struct pmcraid_instance {int host; } ;
struct pmcraid_cmd {TYPE_1__* ioa_cb; struct pmcraid_instance* drv_inst; struct scsi_cmnd* scsi_cmd; } ;
struct TYPE_4__ {int channel; struct pmcraid_resource_entry* hostdata; } ;
struct TYPE_3__ {struct pmcraid_ioasa ioasa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;







 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;


 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (short) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (struct pmcraid_cmd*,int) ;
 int FUNC_10 (struct pmcraid_cmd*) ;
 int FUNC_11 (struct pmcraid_cmd*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,struct pmcraid_cmd*) ;
 int FUNC_14 (struct pmcraid_cmd*) ;
 int FUNC_15 (int ,int ) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_16(struct pmcraid_cmd *VAR_13)
{
 struct scsi_cmnd *VAR_14 = VAR_13->scsi_cmd;
 struct pmcraid_resource_entry *VAR_15 = VAR_14->device->hostdata;
 struct pmcraid_instance *VAR_16 = VAR_13->drv_inst;
 struct pmcraid_ioasa *VAR_17 = &VAR_13->ioa_cb->ioasa;
 u32 VAR_18 = FUNC_6(VAR_17->ioasc);
 u32 VAR_19 = VAR_18 & VAR_5;
 u32 VAR_20 = 0;

 if (!VAR_15) {
  FUNC_12("resource pointer is NULL\n");
  return 0;
 }


 if (FUNC_3(VAR_14->cmnd[0]) == VAR_9)
  FUNC_4(&VAR_15->read_failures);
 else if (FUNC_3(VAR_14->cmnd[0]) == VAR_11)
  FUNC_4(&VAR_15->write_failures);

 if (!FUNC_2(VAR_15->cfg_entry) &&
  VAR_19 != 134) {
  FUNC_11(VAR_13);
 }


 FUNC_13(VAR_18, VAR_13);

 switch (VAR_19) {

 case 136:
  VAR_14->result |= (VAR_0 << 16);
  break;

 case 133:
 case 135:
  VAR_14->result |= (VAR_3 << 16);
  break;

 case 130:
  VAR_15->sync_reqd = 1;
  VAR_14->result |= (VAR_2 << 16);
  break;

 case 132:
  VAR_14->result |= (VAR_4 << 16);
  break;

 case 129:
 case 128:
  if (!VAR_15->reset_progress)
   FUNC_15(VAR_16->host,
           VAR_14->device->channel);
  VAR_14->result |= (VAR_1 << 16);
  break;

 case 134:
  VAR_14->result |= FUNC_1(VAR_18);
  VAR_15->sync_reqd = 1;




  if (FUNC_1(VAR_18) !=
      VAR_8 &&
      FUNC_1(VAR_18) != VAR_7)
   return 0;




  if (VAR_17->auto_sense_length != 0) {
   short VAR_21 = VAR_17->auto_sense_length;
   int VAR_22 = FUNC_8(VAR_12, FUNC_5(VAR_21),
           VAR_10);

   FUNC_7(VAR_14->sense_buffer,
          VAR_17->sense_data,
          VAR_22);
   VAR_20 = 1;
  }

  if (FUNC_2(VAR_15->cfg_entry))
   FUNC_9(VAR_13, VAR_20);
  else if (VAR_20)
   FUNC_10(VAR_13);
  else
   FUNC_14(VAR_13);

  return 1;

 case 131:
  break;

 default:
  if (FUNC_0(VAR_18) > VAR_6)
   VAR_14->result |= (VAR_1 << 16);
  break;
 }
 return 0;
}
