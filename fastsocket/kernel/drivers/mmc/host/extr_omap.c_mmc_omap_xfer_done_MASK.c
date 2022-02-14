
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_host {int send_stop_work; struct mmc_data* stop_data; int current_slot; struct mmc_host* mmc; int * mrq; scalar_t__ sg_len; int * data; scalar_t__ dma_in_use; } ;
struct mmc_host {int dummy; } ;
struct mmc_data {int mrq; int stop; int error; } ;


 int FUNC_0 (struct mmc_omap_host*,struct mmc_data*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct mmc_host*,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct mmc_omap_host *VAR_0, struct mmc_data *VAR_1)
{
 if (VAR_0->dma_in_use)
  FUNC_0(VAR_0, VAR_1, VAR_1->error);

 VAR_0->data = ((void*)0);
 VAR_0->sg_len = 0;






 if (!VAR_1->stop) {
  struct mmc_host *VAR_2;

  VAR_0->mrq = ((void*)0);
  VAR_2 = VAR_0->mmc;
  FUNC_1(VAR_0->current_slot, 1);
  FUNC_2(VAR_2, VAR_1->mrq);
  return;
 }

 VAR_0->stop_data = VAR_1;
 FUNC_3(&VAR_0->send_stop_work);
}
