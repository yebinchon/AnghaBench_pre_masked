
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_host {int dma_ch; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_0)
{
 struct mmc_omap_host *VAR_1 = (struct mmc_omap_host *) VAR_0;

 FUNC_0(VAR_1->dma_ch < 0);
 FUNC_1(VAR_1->dma_ch);
 VAR_1->dma_ch = -1;
}
