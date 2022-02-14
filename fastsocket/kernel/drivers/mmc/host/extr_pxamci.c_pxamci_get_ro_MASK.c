
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pxamci_host {TYPE_1__* pdata; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int (* get_ro ) (int ) ;int gpio_card_ro; scalar_t__ gpio_card_ro_invert; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct mmc_host*) ;
 struct pxamci_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mmc_host *VAR_1)
{
 struct pxamci_host *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2->pdata && FUNC_1(VAR_2->pdata->gpio_card_ro)) {
  if (VAR_2->pdata->gpio_card_ro_invert)
   return !FUNC_0(VAR_2->pdata->gpio_card_ro);
  else
   return FUNC_0(VAR_2->pdata->gpio_card_ro);
 }
 if (VAR_2->pdata && VAR_2->pdata->get_ro)
  return !!VAR_2->pdata->get_ro(FUNC_2(VAR_1));




 return -VAR_0;
}
