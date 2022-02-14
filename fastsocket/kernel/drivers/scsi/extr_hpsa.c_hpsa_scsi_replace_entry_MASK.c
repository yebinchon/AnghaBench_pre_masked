
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsa_scsi_dev_t {int target; int lun; int bus; int devtype; } ;
struct ctlr_info {TYPE_1__* pdev; struct hpsa_scsi_dev_t** dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ,int,int ,int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_1, int VAR_2,
 int VAR_3, struct hpsa_scsi_dev_t *VAR_4,
 struct hpsa_scsi_dev_t *VAR_5[], int *VAR_6,
 struct hpsa_scsi_dev_t *VAR_7[], int *VAR_8)
{

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0);
 VAR_7[*VAR_8] = VAR_1->dev[VAR_3];
 (*VAR_8)++;





 if (VAR_4->target == -1) {
  VAR_4->target = VAR_1->dev[VAR_3]->target;
  VAR_4->lun = VAR_1->dev[VAR_3]->lun;
 }

 VAR_1->dev[VAR_3] = VAR_4;
 VAR_5[*VAR_6] = VAR_4;
 (*VAR_6)++;
 FUNC_1(&VAR_1->pdev->dev, "%s device c%db%dt%dl%d changed.\n",
  FUNC_2(VAR_4->devtype), VAR_2, VAR_4->bus,
   VAR_4->target, VAR_4->lun);
}
