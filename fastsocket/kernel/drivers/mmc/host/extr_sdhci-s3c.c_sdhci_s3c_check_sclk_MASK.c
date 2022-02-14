
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_s3c {int cur_clk; TYPE_1__* pdev; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 struct sdhci_s3c* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_3)
{
 struct sdhci_s3c *VAR_4 = FUNC_3(VAR_3);
 u32 VAR_5 = FUNC_2(VAR_3->ioaddr + VAR_0);

 if (FUNC_1(VAR_5) != VAR_4->cur_clk) {
  FUNC_0(&VAR_4->pdev->dev, "restored ctrl2 clock setting\n");

  VAR_5 &= ~VAR_1;
  VAR_5 |= VAR_4->cur_clk << VAR_2;
  FUNC_4(VAR_5, VAR_3->ioaddr + 0x80);
 }
}
