
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpsa_scsi_dev_t {int lun; int target; int bus; int devtype; int raid_level; } ;
struct ctlr_info {TYPE_2__* pdev; TYPE_1__** dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int raid_level; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ,int,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_1, int VAR_2,
 int VAR_3, struct hpsa_scsi_dev_t *VAR_4)
{

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0);


 VAR_1->dev[VAR_3]->raid_level = VAR_4->raid_level;
 FUNC_1(&VAR_1->pdev->dev, "%s device c%db%dt%dl%d updated.\n",
  FUNC_2(VAR_4->devtype), VAR_2, VAR_4->bus,
  VAR_4->target, VAR_4->lun);
}
