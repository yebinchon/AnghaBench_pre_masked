
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int dma_line_tx; int dma_line_rx; } ;
struct mmc_data {int flags; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct omap_hsmmc_host *VAR_1,
         struct mmc_data *VAR_2)
{
 int VAR_3;

 if (VAR_2->flags & VAR_0)
  VAR_3 = VAR_1->dma_line_tx;
 else
  VAR_3 = VAR_1->dma_line_rx;
 return VAR_3;
}
