
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int dummy; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* card_detect ) (int ) ;int card_detect_irq; } ;


 int VAR_0 ;
 struct omap_hsmmc_host* FUNC_0 (struct mmc_host*) ;
 TYPE_1__ FUNC_1 (struct omap_hsmmc_host*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_1)
{
 struct omap_hsmmc_host *VAR_2 = FUNC_0(VAR_1);

 if (!FUNC_1(VAR_2).card_detect)
  return -VAR_0;
 return FUNC_1(VAR_2).card_detect(FUNC_1(VAR_2).card_detect_irq);
}
