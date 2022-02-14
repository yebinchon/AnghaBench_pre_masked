
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3cmci_host {struct s3c24xx_mci_pdata* pdata; } ;
struct s3c24xx_mci_pdata {scalar_t__ gpio_detect; int detect_invert; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct s3cmci_host* FUNC_1 (struct mmc_host*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_1)
{
 struct s3cmci_host *VAR_2 = FUNC_1(VAR_1);
 struct s3c24xx_mci_pdata *VAR_3 = VAR_2->pdata;
 int VAR_4;

 if (VAR_3->gpio_detect == 0)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3->gpio_detect) ? 0 : 1;
 return VAR_4 ^ VAR_3->detect_invert;
}
