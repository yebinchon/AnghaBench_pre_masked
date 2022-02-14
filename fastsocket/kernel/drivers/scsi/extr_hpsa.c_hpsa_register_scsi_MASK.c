
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctlr_info {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ctlr_info*) ;

__attribute__((used)) static int FUNC_2(struct ctlr_info *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 != 0)
  FUNC_0(&VAR_0->pdev->dev, "hpsa_register_scsi: failed"
   " hpsa_scsi_detect(), rc is %d\n", VAR_1);
 return VAR_1;
}
