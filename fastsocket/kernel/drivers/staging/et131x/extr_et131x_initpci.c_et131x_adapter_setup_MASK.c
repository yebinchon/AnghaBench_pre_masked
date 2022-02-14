
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct et131x_adapter {TYPE_1__* pdev; TYPE_2__* regs; } ;
struct TYPE_6__ {int mmc_ctrl; } ;
struct TYPE_5__ {TYPE_3__ mmc; } ;
struct TYPE_4__ {scalar_t__ device; int dev; } ;


 int FUNC_0 (struct et131x_adapter*) ;
 int FUNC_1 (struct et131x_adapter*) ;
 int FUNC_2 (struct et131x_adapter*) ;
 int FUNC_3 (struct et131x_adapter*) ;
 int FUNC_4 (struct et131x_adapter*) ;
 int FUNC_5 (struct et131x_adapter*) ;
 int FUNC_6 (struct et131x_adapter*) ;
 int FUNC_7 (struct et131x_adapter*,int ) ;
 int FUNC_8 (struct et131x_adapter*) ;
 int FUNC_9 (struct et131x_adapter*,int) ;
 int FUNC_10 (struct et131x_adapter*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (struct et131x_adapter*) ;
 int FUNC_13 (struct et131x_adapter*) ;
 int FUNC_14 (int ,int *) ;

int FUNC_15(struct et131x_adapter *VAR_4)
{
 int VAR_5 = 0;


 FUNC_0(VAR_4);

 FUNC_1(VAR_4);



 FUNC_14(VAR_1, &VAR_4->regs->mmc.mmc_ctrl);

 FUNC_4(VAR_4);
 FUNC_6(VAR_4);

 FUNC_3(VAR_4);
 FUNC_5(VAR_4);

 FUNC_2(VAR_4);


 VAR_5 = FUNC_13(VAR_4);

 if (VAR_5 != 0)
  FUNC_11(&VAR_4->pdev->dev, "Could not find the xcvr\n");


 FUNC_8(VAR_4);


 FUNC_10(VAR_4);


 FUNC_9(VAR_4, 1);





 if (VAR_4->pdev->device != VAR_0)
  FUNC_7(VAR_4, VAR_2);
 else
  FUNC_7(VAR_4, VAR_3);


 FUNC_9(VAR_4, 0);

 FUNC_12(VAR_4);
; return VAR_5;
}
