
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct msmsdcc_host {scalar_t__ clks_on; int pclk; int clk; scalar_t__ base; scalar_t__ stat_irq; } ;
struct mmc_host {TYPE_1__* card; } ;
typedef int pm_message_t ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct mmc_host* FUNC_2 (struct platform_device*) ;
 struct msmsdcc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int ) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct platform_device *VAR_2, pm_message_t VAR_3)
{
 struct mmc_host *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = 0;

 if (VAR_4) {
  struct msmsdcc_host *VAR_6 = FUNC_3(VAR_4);

  if (VAR_6->stat_irq)
   FUNC_1(VAR_6->stat_irq);

  if (VAR_4->card && VAR_4->card->type != VAR_1)
   VAR_5 = FUNC_4(VAR_4, VAR_3);
  if (!VAR_5) {
   FUNC_5(0, VAR_6->base + VAR_0);

   if (VAR_6->clks_on) {
    FUNC_0(VAR_6->clk);
    FUNC_0(VAR_6->pclk);
    VAR_6->clks_on = 0;
   }
  }
 }
 return VAR_5;
}
