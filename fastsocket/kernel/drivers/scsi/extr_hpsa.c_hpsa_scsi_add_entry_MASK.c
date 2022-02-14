
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hpsa_scsi_dev_t {int lun; int* scsi3addr; int target; int bus; int devtype; } ;
struct ctlr_info {int ndevices; TYPE_1__* pdev; struct hpsa_scsi_dev_t** dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int,int ,int ,int) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct ctlr_info*,int*,int ,int *,int*) ;
 scalar_t__ FUNC_4 (unsigned char*,unsigned char*,int) ;
 int FUNC_5 (unsigned char*,int*,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ctlr_info *VAR_1, int VAR_2,
  struct hpsa_scsi_dev_t *VAR_3,
  struct hpsa_scsi_dev_t *VAR_4[], int *VAR_5)
{

 int VAR_6 = VAR_1->ndevices;
 int VAR_7;
 unsigned char VAR_8[8], VAR_9[8];
 struct hpsa_scsi_dev_t *VAR_10;

 if (VAR_6 >= VAR_0) {
  FUNC_0(&VAR_1->pdev->dev, "too many devices, some will be "
   "inaccessible.\n");
  return -1;
 }


 if (VAR_3->lun != -1)

  goto lun_assigned;





 if (VAR_3->scsi3addr[4] == 0) {

  if (FUNC_3(VAR_1, VAR_3->scsi3addr,
   VAR_3->bus, &VAR_3->target, &VAR_3->lun) != 0)
   return -1;
  goto lun_assigned;
 }







 FUNC_5(VAR_8, VAR_3->scsi3addr, 8);
 VAR_8[4] = 0;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_10 = VAR_1->dev[VAR_7];
  FUNC_5(VAR_9, VAR_10->scsi3addr, 8);
  VAR_9[4] = 0;

  if (FUNC_4(VAR_8, VAR_9, 8) == 0) {
   VAR_3->bus = VAR_10->bus;
   VAR_3->target = VAR_10->target;
   VAR_3->lun = VAR_3->scsi3addr[4];
   break;
  }
 }
 if (VAR_3->lun == -1) {
  FUNC_2(&VAR_1->pdev->dev, "physical device with no LUN=0,"
   " suspect firmware bug or unsupported hardware "
   "configuration.\n");
   return -1;
 }

lun_assigned:

 VAR_1->dev[VAR_6] = VAR_3;
 VAR_1->ndevices++;
 VAR_4[*VAR_5] = VAR_3;
 (*VAR_5)++;






  FUNC_1(&VAR_1->pdev->dev, "%s device c%db%dt%dl%d added.\n",
   FUNC_6(VAR_3->devtype), VAR_2,
   VAR_3->bus, VAR_3->target, VAR_3->lun);
 return 0;
}
