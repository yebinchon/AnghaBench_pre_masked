
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scsi_cmnd {int* cmnd; int serial_number; scalar_t__ host_scribble; TYPE_6__* device; } ;
struct hpsa_scsi_dev_t {int lun; int target; int bus; int scsi3addr; } ;
struct ctlr_info {int TMFSupportFlags; TYPE_5__* pdev; int cmpQ; TYPE_4__* scsi_host; int reqQ; } ;
struct TYPE_7__ {int upper; int lower; } ;
struct TYPE_8__ {TYPE_1__ Tag; } ;
struct CommandList {TYPE_3__* err_info; scalar_t__ scsi_cmd; TYPE_2__ Header; } ;
typedef int msg ;
struct TYPE_12__ {int channel; int id; int lun; struct hpsa_scsi_dev_t* hostdata; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_10__ {int host_no; } ;
struct TYPE_9__ {int CommandStatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (struct CommandList*) ;
 struct CommandList* FUNC_6 (struct ctlr_info*,struct scsi_cmnd*,int *) ;
 int FUNC_7 (struct ctlr_info*,int ,struct CommandList*) ;
 int FUNC_8 (char*,int ,int) ;
 int FUNC_9 (int) ;
 struct ctlr_info* FUNC_10 (TYPE_6__*) ;
 scalar_t__ FUNC_11 (char*,char*,int,int,...) ;

__attribute__((used)) static int FUNC_12(struct scsi_cmnd *VAR_6)
{

 int VAR_7, VAR_8;
 struct ctlr_info *VAR_9;
 struct hpsa_scsi_dev_t *VAR_10;
 struct CommandList *VAR_11;
 struct CommandList *VAR_12;
 struct scsi_cmnd *VAR_13;
 char VAR_14[256];
 int VAR_15 = 0;


 VAR_9 = FUNC_10(VAR_6->device);
 if (FUNC_0(VAR_9 == ((void*)0),
   "ABORT REQUEST FAILED, Controller lookup failed.\n"))
  return VAR_2;


 if (!(VAR_4 & VAR_9->TMFSupportFlags) &&
  !(VAR_3 & VAR_9->TMFSupportFlags))
  return VAR_2;

 FUNC_8(VAR_14, 0, sizeof(VAR_14));
 VAR_15 += FUNC_11(VAR_14+VAR_15, "ABORT REQUEST on C%d:B%d:T%d:L%d ",
  VAR_9->scsi_host->host_no, VAR_6->device->channel,
  VAR_6->device->id, VAR_6->device->lun);


 VAR_10 = VAR_6->device->hostdata;
 if (!VAR_10) {
  FUNC_2(&VAR_9->pdev->dev, "%s FAILED, Device lookup failed.\n",
    VAR_14);
  return VAR_2;
 }


 VAR_11 = (struct CommandList *) VAR_6->host_scribble;
 if (VAR_11 == ((void*)0)) {
  FUNC_2(&VAR_9->pdev->dev, "%s FAILED, Command to abort is NULL.\n",
    VAR_14);
  return VAR_2;
 }

 VAR_15 += FUNC_11(VAR_14+VAR_15, "Tag:0x%08x:%08x ",
  VAR_11->Header.Tag.upper, VAR_11->Header.Tag.lower);
 VAR_13 = (struct scsi_cmnd *) VAR_11->scsi_cmd;
 if (VAR_13 != ((void*)0))
  VAR_15 += FUNC_11(VAR_14+VAR_15, "Command:0x%x SN:0x%lx ",
   VAR_13->cmnd[0], VAR_13->serial_number);
 FUNC_1(&VAR_9->pdev->dev, "%s\n", VAR_14);
 FUNC_4(&VAR_9->pdev->dev, "Abort request on C%d:B%d:T%d:L%d\n",
  VAR_9->scsi_host->host_no, VAR_10->bus, VAR_10->target, VAR_10->lun);





 VAR_12 = FUNC_6(VAR_9, VAR_6, &VAR_9->reqQ);
 if (VAR_12) {
  VAR_12->err_info->CommandStatus = VAR_1;
  FUNC_5(VAR_12);
  FUNC_3(&VAR_9->pdev->dev, "%s Request SUCCEEDED (driver queue).\n",
    VAR_14);
  return VAR_5;
 }


 VAR_12 = FUNC_6(VAR_9, VAR_6, &VAR_9->cmpQ);
 if (!VAR_12) {
  FUNC_1(&VAR_9->pdev->dev, "%s Request FAILED (not known to driver).\n",
    VAR_14);
  return VAR_5;
 }






 VAR_8 = FUNC_7(VAR_9, VAR_10->scsi3addr, VAR_11);
 if (VAR_8 != 0) {
  FUNC_1(&VAR_9->pdev->dev, "%s Request FAILED.\n", VAR_14);
  FUNC_4(&VAR_9->pdev->dev, "FAILED abort on device C%d:B%d:T%d:L%d\n",
   VAR_9->scsi_host->host_no,
   VAR_10->bus, VAR_10->target, VAR_10->lun);
  return VAR_2;
 }
 FUNC_3(&VAR_9->pdev->dev, "%s REQUEST SUCCEEDED.\n", VAR_14);







 for (VAR_7 = 0; VAR_7 < 30 * 10; VAR_7++) {
  VAR_12 = FUNC_6(VAR_9, VAR_6, &VAR_9->cmpQ);
  if (!VAR_12)
   return VAR_5;
  FUNC_9(100);
 }
 FUNC_4(&VAR_9->pdev->dev, "%s FAILED. Aborted command has not completed after %d seconds.\n",
  VAR_14, 30);
 return VAR_2;
}
