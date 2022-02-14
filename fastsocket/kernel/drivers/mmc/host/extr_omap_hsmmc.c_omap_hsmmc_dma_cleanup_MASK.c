
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int dma_ch; TYPE_1__* data; int sem; int dma_len; int mmc; scalar_t__ use_dma; } ;
struct TYPE_2__ {int error; int sg; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct omap_hsmmc_host*,TYPE_1__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct omap_hsmmc_host *VAR_0, int VAR_1)
{
 VAR_0->data->error = VAR_1;

 if (VAR_0->use_dma && VAR_0->dma_ch != -1) {
  FUNC_0(FUNC_1(VAR_0->mmc), VAR_0->data->sg, VAR_0->dma_len,
   FUNC_3(VAR_0, VAR_0->data));
  FUNC_2(VAR_0->dma_ch);
  VAR_0->dma_ch = -1;
  FUNC_4(&VAR_0->sem);
 }
 VAR_0->data = ((void*)0);
}
