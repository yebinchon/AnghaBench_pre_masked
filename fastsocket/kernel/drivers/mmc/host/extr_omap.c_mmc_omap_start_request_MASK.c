
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int cmd; } ;
struct mmc_omap_host {int dma_ch; scalar_t__ dma_in_use; struct mmc_request* mrq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mmc_omap_host*,struct mmc_request*) ;
 int FUNC_3 (struct mmc_omap_host*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct mmc_omap_host *VAR_0,
       struct mmc_request *VAR_1)
{
 FUNC_0(VAR_0->mrq != ((void*)0));

 VAR_0->mrq = VAR_1;


 FUNC_2(VAR_0, VAR_1);
 FUNC_3(VAR_0, VAR_1->cmd);
 if (VAR_0->dma_in_use)
  FUNC_4(VAR_0->dma_ch);
 FUNC_0(FUNC_1());
}
