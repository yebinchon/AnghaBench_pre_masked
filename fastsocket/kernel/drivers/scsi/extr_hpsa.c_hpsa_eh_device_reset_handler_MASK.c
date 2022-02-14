
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_cmnd {TYPE_3__* device; } ;
struct hpsa_scsi_dev_t {int scsi3addr; int lun; int target; int bus; } ;
struct ctlr_info {TYPE_2__* pdev; TYPE_1__* scsi_host; } ;
struct TYPE_6__ {struct hpsa_scsi_dev_t* hostdata; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct ctlr_info*,int ) ;
 struct ctlr_info* FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct ctlr_info*,int ) ;

__attribute__((used)) static int FUNC_5(struct scsi_cmnd *VAR_2)
{
 int VAR_3;
 struct ctlr_info *VAR_4;
 struct hpsa_scsi_dev_t *VAR_5;


 VAR_4 = FUNC_3(VAR_2->device);
 if (VAR_4 == ((void*)0))
  return VAR_0;
 VAR_5 = VAR_2->device->hostdata;
 if (!VAR_5) {
  FUNC_0(&VAR_4->pdev->dev, "hpsa_eh_device_reset_handler: "
   "device lookup failed.\n");
  return VAR_0;
 }
 FUNC_1(&VAR_4->pdev->dev, "resetting device %d:%d:%d:%d\n",
  VAR_4->scsi_host->host_no, VAR_5->bus, VAR_5->target, VAR_5->lun);

 VAR_3 = FUNC_2(VAR_4, VAR_5->scsi3addr);
 if (VAR_3 == 0 && FUNC_4(VAR_4, VAR_5->scsi3addr) == 0)
  return VAR_1;

 FUNC_1(&VAR_4->pdev->dev, "resetting device failed.\n");
 return VAR_0;
}
