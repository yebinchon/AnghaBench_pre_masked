
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_s3c {struct clk** clk_bus; } ;
struct sdhci_host {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct clk*) ;
 int FUNC_1 (struct sdhci_host*) ;
 struct sdhci_s3c* FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static unsigned int FUNC_3(struct sdhci_host *VAR_1)
{
 struct sdhci_s3c *VAR_2 = FUNC_2(VAR_1);
 struct clk *VAR_3;
 unsigned int VAR_4, VAR_5;
 int VAR_6;



 FUNC_1(VAR_1);

 for (VAR_5 = 0, VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_3 = VAR_2->clk_bus[VAR_6];
  if (!VAR_3)
   continue;

  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4 > VAR_5)
   VAR_5 = VAR_4;
 }

 return VAR_5;
}
