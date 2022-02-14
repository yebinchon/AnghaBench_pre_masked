
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct omap_hsmmc_host {int dma_ch; scalar_t__ dma_sg_idx; scalar_t__ dma_len; int sem; TYPE_1__* data; int mmc; } ;
struct TYPE_2__ {scalar_t__ sg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct omap_hsmmc_host*,TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(int VAR_1, u16 VAR_2, void *VAR_3)
{
 struct omap_hsmmc_host *VAR_4 = VAR_3;

 if (VAR_2 & VAR_0)
  FUNC_0(FUNC_1(VAR_4->mmc), "MISALIGNED_ADRS_ERR\n");

 if (VAR_4->dma_ch < 0)
  return;

 VAR_4->dma_sg_idx++;
 if (VAR_4->dma_sg_idx < VAR_4->dma_len) {

  FUNC_3(VAR_4, VAR_4->data,
        VAR_4->data->sg + VAR_4->dma_sg_idx);
  return;
 }

 FUNC_2(VAR_4->dma_ch);
 VAR_4->dma_ch = -1;




 FUNC_4(&VAR_4->sem);
}
