
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct mxcmci_host {TYPE_2__* res; int clk; int dma; int base; int irq; TYPE_1__* pdata; } ;
struct mmc_host {int dummy; } ;
struct TYPE_5__ {int start; } ;
struct TYPE_4__ {int (* exit ) (int *,struct mmc_host*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct mxcmci_host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mmc_host*) ;
 struct mxcmci_host* FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*) ;
 struct mmc_host* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct platform_device*,int *) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,struct mmc_host*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_0)
{
 struct mmc_host *VAR_1 = FUNC_8(VAR_0);
 struct mxcmci_host *VAR_2 = FUNC_6(VAR_1);

 FUNC_9(VAR_0, ((void*)0));

 FUNC_7(VAR_1);

 if (VAR_2->pdata && VAR_2->pdata->exit)
  VAR_2->pdata->exit(&VAR_0->dev, VAR_1);

 FUNC_2(VAR_2->irq, VAR_2);
 FUNC_4(VAR_2->base);



 FUNC_0(VAR_2->clk);
 FUNC_1(VAR_2->clk);

 FUNC_10(VAR_2->res->start, FUNC_12(VAR_2->res));
 FUNC_11(VAR_2->res);

 FUNC_5(VAR_1);

 return 0;
}
