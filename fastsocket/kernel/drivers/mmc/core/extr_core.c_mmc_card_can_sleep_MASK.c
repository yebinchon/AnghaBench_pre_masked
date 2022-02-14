
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {struct mmc_card* card; } ;
struct TYPE_2__ {int rev; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;


 scalar_t__ FUNC_0 (struct mmc_card*) ;

int FUNC_1(struct mmc_host *VAR_0)
{
 struct mmc_card *VAR_1 = VAR_0->card;

 if (VAR_1 && FUNC_0(VAR_1) && VAR_1->ext_csd.rev >= 3)
  return 1;
 return 0;
}
