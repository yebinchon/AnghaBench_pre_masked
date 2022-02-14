
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_qla_host {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct scsi_qla_host *VAR_0)
{
 int VAR_1;


 if (FUNC_3(VAR_0->pdev, FUNC_0(64)) == 0) {
  if (FUNC_2(VAR_0->pdev, FUNC_0(64))) {
   FUNC_1(&VAR_0->pdev->dev,
      "Failed to set 64 bit PCI consistent mask; "
       "using 32 bit.\n");
   VAR_1 = FUNC_2(VAR_0->pdev,
            FUNC_0(32));
  }
 } else
  VAR_1 = FUNC_3(VAR_0->pdev, FUNC_0(32));
}
