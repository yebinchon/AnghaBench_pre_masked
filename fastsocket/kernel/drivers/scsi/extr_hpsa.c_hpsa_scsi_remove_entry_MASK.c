
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsa_scsi_dev_t {int lun; int target; int bus; int devtype; } ;
struct ctlr_info {int ndevices; TYPE_1__* pdev; struct hpsa_scsi_dev_t** dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ,int,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ctlr_info *VAR_1, int VAR_2, int VAR_3,
 struct hpsa_scsi_dev_t *VAR_4[], int *VAR_5)
{

 int VAR_6;
 struct hpsa_scsi_dev_t *VAR_7;

 FUNC_0(VAR_3 < 0 || VAR_3 >= VAR_0);

 VAR_7 = VAR_1->dev[VAR_3];
 VAR_4[*VAR_5] = VAR_1->dev[VAR_3];
 (*VAR_5)++;

 for (VAR_6 = VAR_3; VAR_6 < VAR_1->ndevices-1; VAR_6++)
  VAR_1->dev[VAR_6] = VAR_1->dev[VAR_6+1];
 VAR_1->ndevices--;
 FUNC_1(&VAR_1->pdev->dev, "%s device c%db%dt%dl%d removed.\n",
  FUNC_2(VAR_7->devtype), VAR_2, VAR_7->bus, VAR_7->target,
  VAR_7->lun);
}
