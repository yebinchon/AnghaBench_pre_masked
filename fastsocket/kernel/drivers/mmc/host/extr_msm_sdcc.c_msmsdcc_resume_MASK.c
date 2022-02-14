
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct msmsdcc_host {int clks_on; scalar_t__ stat_irq; int lock; scalar_t__ base; int saved_irq0mask; int clk; int pclk; } ;
struct mmc_host {TYPE_1__* card; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct mmc_host* FUNC_2 (struct platform_device*) ;
 struct msmsdcc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_8(struct platform_device *VAR_2)
{
 struct mmc_host *VAR_3 = FUNC_2(VAR_2);
 unsigned long VAR_4;

 if (VAR_3) {
  struct msmsdcc_host *VAR_5 = FUNC_3(VAR_3);

  FUNC_5(&VAR_5->lock, VAR_4);

  if (!VAR_5->clks_on) {
   FUNC_0(VAR_5->pclk);
   FUNC_0(VAR_5->clk);
   VAR_5->clks_on = 1;
  }

  FUNC_7(VAR_5->saved_irq0mask, VAR_5->base + VAR_0);

  FUNC_6(&VAR_5->lock, VAR_4);

  if (VAR_3->card && VAR_3->card->type != VAR_1)
   FUNC_4(VAR_3);
   if (VAR_5->stat_irq)
    FUNC_1(VAR_5->stat_irq);
  else if (VAR_5->stat_irq)
   FUNC_1(VAR_5->stat_irq);
 }
 return 0;
}
