
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3cmci_host {struct s3c24xx_mci_pdata* pdata; } ;
struct s3c24xx_mci_pdata {scalar_t__ wprotect_invert; int gpio_wprotect; scalar_t__ no_wprotect; } ;
struct mmc_host {int dummy; } ;


 struct s3cmci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_0)
{
 struct s3cmci_host *VAR_1 = FUNC_0(VAR_0);
 struct s3c24xx_mci_pdata *VAR_2 = VAR_1->pdata;
 int VAR_3;

 if (VAR_2->no_wprotect)
  return 0;

 VAR_3 = FUNC_1(VAR_2->gpio_wprotect);

 if (VAR_2->wprotect_invert)
  VAR_3 = !VAR_3;

 return VAR_3;
}
