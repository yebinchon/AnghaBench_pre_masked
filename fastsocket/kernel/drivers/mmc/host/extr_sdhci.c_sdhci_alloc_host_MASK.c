
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {struct mmc_host* mmc; } ;
struct mmc_host {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct sdhci_host* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mmc_host* FUNC_2 (int,struct device*) ;
 struct sdhci_host* FUNC_3 (struct mmc_host*) ;

struct sdhci_host *FUNC_4(struct device *VAR_1,
 size_t VAR_2)
{
 struct mmc_host *VAR_3;
 struct sdhci_host *VAR_4;

 FUNC_1(VAR_1 == ((void*)0));

 VAR_3 = FUNC_2(sizeof(struct sdhci_host) + VAR_2, VAR_1);
 if (!VAR_3)
  return FUNC_0(-VAR_0);

 VAR_4 = FUNC_3(VAR_3);
 VAR_4->mmc = VAR_3;

 return VAR_4;
}
