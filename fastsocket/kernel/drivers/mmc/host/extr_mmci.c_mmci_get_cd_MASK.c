
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmci_host {int gpio_cd; int mmc; TYPE_1__* plat; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {unsigned int (* status ) (int ) ;} ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mmci_host* FUNC_2 (struct mmc_host*) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_host *VAR_1)
{
 struct mmci_host *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3;

 if (VAR_2->gpio_cd == -VAR_0)
  VAR_3 = VAR_2->plat->status(FUNC_1(VAR_2->mmc));
 else
  VAR_3 = FUNC_0(VAR_2->gpio_cd);

 return !VAR_3;
}
