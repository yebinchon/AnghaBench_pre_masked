
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_request {int dummy; } ;
struct mmc_omap_slot {struct mmc_request* mrq; struct mmc_omap_host* host; } ;
struct mmc_omap_host {int slot_lock; struct mmc_host* mmc; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_omap_slot*,int) ;
 int FUNC_2 (struct mmc_omap_host*,struct mmc_request*) ;
 struct mmc_omap_slot* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_0, struct mmc_request *VAR_1)
{
 struct mmc_omap_slot *VAR_2 = FUNC_3(VAR_0);
 struct mmc_omap_host *VAR_3 = VAR_2->host;
 unsigned long VAR_4;

 FUNC_4(&VAR_3->slot_lock, VAR_4);
 if (VAR_3->mmc != ((void*)0)) {
  FUNC_0(VAR_2->mrq != ((void*)0));
  VAR_2->mrq = VAR_1;
  FUNC_5(&VAR_3->slot_lock, VAR_4);
  return;
 } else
  VAR_3->mmc = VAR_0;
 FUNC_5(&VAR_3->slot_lock, VAR_4);
 FUNC_1(VAR_2, 1);
 FUNC_2(VAR_3, VAR_1);
}
