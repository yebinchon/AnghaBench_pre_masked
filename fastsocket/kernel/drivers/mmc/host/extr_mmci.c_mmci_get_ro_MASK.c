
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {int gpio_wp; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct mmci_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_1)
{
 struct mmci_host *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->gpio_wp == -VAR_0)
  return -VAR_0;

 return FUNC_0(VAR_2->gpio_wp);
}
