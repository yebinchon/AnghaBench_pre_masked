
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hpsa_scsi_dev_t {unsigned char target; scalar_t__ lun; int bus; } ;
struct ctlr_info {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct hpsa_scsi_dev_t*,int ,unsigned char,int ) ;
 scalar_t__ FUNC_2 (struct ctlr_info*,unsigned char*,struct hpsa_scsi_dev_t*,int *) ;
 int FUNC_3 (struct ctlr_info*,struct hpsa_scsi_dev_t*) ;
 scalar_t__ FUNC_4 (unsigned char*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct ctlr_info*) ;
 int FUNC_7 (unsigned char*,int ,int) ;
 int FUNC_8 (unsigned char,unsigned long*) ;
 scalar_t__ FUNC_9 (unsigned char,unsigned long*) ;

__attribute__((used)) static int FUNC_10(struct ctlr_info *VAR_1,
 struct hpsa_scsi_dev_t *VAR_2,
 struct hpsa_scsi_dev_t *VAR_3, u8 *VAR_4,
 unsigned long VAR_5[], int *VAR_6)
{
 unsigned char VAR_7[8];

 if (FUNC_9(VAR_2->target, VAR_5))
  return 0;

 if (!FUNC_5(VAR_4))
  return 0;

 if (!FUNC_3(VAR_1, VAR_2))
  return 0;

 if (VAR_2->lun == 0)
  return 0;

 FUNC_7(VAR_7, 0, 8);
 VAR_7[3] = VAR_2->target;
 if (FUNC_4(VAR_7))
  return 0;

 if (FUNC_6(VAR_1))
  return 0;

 if (*VAR_6 >= VAR_0) {
  FUNC_0(&VAR_1->pdev->dev, "Maximum number of external "
   "target devices exceeded.  Check your hardware "
   "configuration.");
  return 0;
 }

 if (FUNC_2(VAR_1, VAR_7, VAR_3, ((void*)0)))
  return 0;
 (*VAR_6)++;
 FUNC_1(VAR_3,
    VAR_2->bus, VAR_2->target, 0);
 FUNC_8(VAR_2->target, VAR_5);
 return 1;
}
