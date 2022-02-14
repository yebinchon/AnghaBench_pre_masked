
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int max_clk; unsigned int clock; scalar_t__ ioaddr; int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,char*,unsigned int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_7, unsigned int VAR_8)
{
 int VAR_9 = 2;
 int VAR_10 = 1;

 FUNC_0(VAR_7->ioaddr + VAR_6, VAR_1 |
    VAR_0 | VAR_3 | VAR_2);

 if (VAR_8 == 0)
  goto out;

 while (VAR_7->max_clk / VAR_9 / 16 > VAR_8 && VAR_9 < 256)
  VAR_9 *= 2;

 while (VAR_7->max_clk / VAR_9 / VAR_10 > VAR_8 && VAR_10 < 16)
  VAR_10++;

 FUNC_1(FUNC_3(VAR_7->mmc), "desired SD clock: %d, actual: %d\n",
  VAR_8, VAR_7->max_clk / VAR_9 / VAR_10);

 VAR_9 >>= 1;
 VAR_10--;

 FUNC_4(VAR_7->ioaddr + VAR_6, VAR_1 |
    VAR_0 | VAR_3 |
    VAR_10 << VAR_4 | VAR_9 << VAR_5);
 FUNC_2(100);
out:
 VAR_7->clock = VAR_8;
}
