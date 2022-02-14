
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_device {scalar_t__ type; int allow_restart; TYPE_1__* host; int queue_depth; scalar_t__ tagged_supported; int request_queue; int lun; int id; int channel; struct pmcraid_resource_entry* hostdata; } ;
struct pmcraid_resource_entry {int cfg_entry; } ;
struct TYPE_2__ {int cmd_per_lun; int unique_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 int FUNC_5 (struct scsi_device*,int ) ;
 int FUNC_6 (struct scsi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct scsi_device *VAR_5)
{
 struct pmcraid_resource_entry *VAR_6 = VAR_5->hostdata;

 if (!VAR_6)
  return 0;


 if (FUNC_0(VAR_6->cfg_entry) &&
     VAR_5->type != VAR_4)
  return -VAR_0;

 FUNC_4("configuring %x:%x:%x:%x\n",
       VAR_5->host->unique_id,
       VAR_5->channel,
       VAR_5->id,
       VAR_5->lun);

 if (FUNC_0(VAR_6->cfg_entry)) {
  VAR_5->allow_restart = 1;
 } else if (FUNC_1(VAR_6->cfg_entry)) {
  VAR_5->allow_restart = 1;
  FUNC_3(VAR_5->request_queue,
         VAR_2);
  FUNC_2(VAR_5->request_queue,
          VAR_3);
 }

 if (VAR_5->tagged_supported &&
     (FUNC_0(VAR_6->cfg_entry) || FUNC_1(VAR_6->cfg_entry))) {
  FUNC_5(VAR_5, VAR_5->queue_depth);
  FUNC_6(VAR_5, VAR_1,
     VAR_5->host->cmd_per_lun);
 } else {
  FUNC_6(VAR_5, 0,
     VAR_5->host->cmd_per_lun);
 }

 return 0;
}
