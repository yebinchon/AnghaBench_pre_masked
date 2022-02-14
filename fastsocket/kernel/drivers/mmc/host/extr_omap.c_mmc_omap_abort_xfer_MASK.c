
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_host {scalar_t__ sg_len; int * data; scalar_t__ dma_in_use; } ;
struct mmc_data {int dummy; } ;


 int FUNC_0 (struct mmc_omap_host*,struct mmc_data*,int) ;
 int FUNC_1 (struct mmc_omap_host*,int) ;

__attribute__((used)) static void
FUNC_2(struct mmc_omap_host *VAR_0, struct mmc_data *VAR_1)
{
 if (VAR_0->dma_in_use)
  FUNC_0(VAR_0, VAR_1, 1);

 VAR_0->data = ((void*)0);
 VAR_0->sg_len = 0;

 FUNC_1(VAR_0, 10000);
}
