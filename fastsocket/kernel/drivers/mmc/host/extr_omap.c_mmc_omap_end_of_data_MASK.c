
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_host {int brs_received; int dma_lock; scalar_t__ dma_done; int dma_in_use; } ;
struct mmc_data {int dummy; } ;


 int FUNC_0 (struct mmc_omap_host*,struct mmc_data*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct mmc_omap_host *VAR_0, struct mmc_data *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 if (!VAR_0->dma_in_use) {
  FUNC_0(VAR_0, VAR_1);
  return;
 }
 VAR_3 = 0;
 FUNC_1(&VAR_0->dma_lock, VAR_2);
 if (VAR_0->dma_done)
  VAR_3 = 1;
 else
  VAR_0->brs_received = 1;
 FUNC_2(&VAR_0->dma_lock, VAR_2);
 if (VAR_3)
  FUNC_0(VAR_0, VAR_1);
}
