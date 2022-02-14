
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int dma_ch; int mmc; struct mmc_request* mrq; int dma_len; scalar_t__ use_dma; int * data; scalar_t__ response_busy; TYPE_1__* cmd; } ;
struct mmc_request {int dummy; } ;
struct mmc_data {int blocks; int blksz; int stop; struct mmc_request* mrq; scalar_t__ bytes_xfered; int error; int sg; } ;
struct TYPE_2__ {int opcode; } ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct mmc_request*) ;
 int FUNC_3 (struct omap_hsmmc_host*,struct mmc_data*) ;
 int FUNC_4 (struct omap_hsmmc_host*,int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct omap_hsmmc_host *VAR_0, struct mmc_data *VAR_1)
{
 if (!VAR_1) {
  struct mmc_request *VAR_2 = VAR_0->mrq;


  if (VAR_0->cmd && VAR_0->cmd->opcode == 6 &&
      VAR_0->response_busy) {
   VAR_0->response_busy = 0;
   return;
  }

  VAR_0->mrq = ((void*)0);
  FUNC_2(VAR_0->mmc, VAR_2);
  return;
 }

 VAR_0->data = ((void*)0);

 if (VAR_0->use_dma && VAR_0->dma_ch != -1)
  FUNC_0(FUNC_1(VAR_0->mmc), VAR_1->sg, VAR_0->dma_len,
   FUNC_3(VAR_0, VAR_1));

 if (!VAR_1->error)
  VAR_1->bytes_xfered += VAR_1->blocks * (VAR_1->blksz);
 else
  VAR_1->bytes_xfered = 0;

 if (!VAR_1->stop) {
  VAR_0->mrq = ((void*)0);
  FUNC_2(VAR_0->mmc, VAR_1->mrq);
  return;
 }
 FUNC_4(VAR_0, VAR_1->stop, ((void*)0));
}
