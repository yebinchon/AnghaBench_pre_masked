
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_s3c {int cur_clk; TYPE_2__* pdev; TYPE_1__* pdata; struct clk** clk_bus; } ;
struct sdhci_host {scalar_t__ ioaddr; int timeout_clk; int max_clk; } ;
struct mmc_ios {unsigned int clock; } ;
struct clk {int dummy; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* cfg_card ) (TYPE_2__*,scalar_t__,struct mmc_ios*,int *) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (int *,char*,int,unsigned int,unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (struct sdhci_s3c*,int,unsigned int) ;
 int FUNC_4 (struct sdhci_host*) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,struct mmc_ios*,int *) ;
 struct sdhci_s3c* FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct sdhci_host *VAR_6, unsigned int VAR_7)
{
 struct sdhci_s3c *VAR_8 = FUNC_6(VAR_6);
 unsigned int VAR_9 = VAR_5;
 unsigned int VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 u32 VAR_13;


 if (VAR_7 == 0)
  return;

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  VAR_10 = FUNC_3(VAR_8, VAR_12, VAR_7);
  if (VAR_10 < VAR_9) {
   VAR_9 = VAR_10;
   VAR_11 = VAR_12;
  }
 }

 FUNC_1(&VAR_8->pdev->dev,
  "selected source %d, clock %d, delta %d\n",
   VAR_11, VAR_7, VAR_9);



 if (VAR_8->cur_clk != VAR_11) {
  struct clk *VAR_14 = VAR_8->clk_bus[VAR_11];


  FUNC_8(0, VAR_6->ioaddr + VAR_4);

  VAR_8->cur_clk = VAR_11;
  VAR_6->max_clk = FUNC_0(VAR_14);
  VAR_6->timeout_clk = FUNC_4(VAR_6);

  VAR_13 = FUNC_2(VAR_6->ioaddr + VAR_1);
  VAR_13 &= ~VAR_2;
  VAR_13 |= VAR_11 << VAR_3;
  FUNC_7(VAR_13, VAR_6->ioaddr + VAR_1);
 }



 {
  struct mmc_ios VAR_15;

  VAR_15.clock = VAR_7;

  if (VAR_8->pdata->cfg_card)
   (VAR_8->pdata->cfg_card)(VAR_8->pdev, VAR_6->ioaddr,
         &VAR_15, ((void*)0));
 }
}
