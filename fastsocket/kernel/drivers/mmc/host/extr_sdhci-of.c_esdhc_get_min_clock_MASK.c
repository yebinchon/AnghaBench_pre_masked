
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_of_host {int clock; } ;
struct sdhci_host {int dummy; } ;


 struct sdhci_of_host* FUNC_0 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_1(struct sdhci_host *VAR_0)
{
 struct sdhci_of_host *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->clock / 256 / 16;
}
