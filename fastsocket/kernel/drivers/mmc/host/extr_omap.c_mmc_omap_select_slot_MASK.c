
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_omap_slot {int saved_con; int id; int * mmc; struct mmc_omap_host* host; } ;
struct mmc_omap_host {struct mmc_omap_slot* current_slot; TYPE_1__* pdata; int clk_timer; int slot_lock; int * mmc; int slot_wq; } ;
struct TYPE_2__ {int (* switch_slot ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_omap_host*,int ) ;
 int FUNC_1 (struct mmc_omap_host*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mmc_omap_host*,int) ;
 int FUNC_5 (struct mmc_omap_slot*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static void FUNC_10(struct mmc_omap_slot *VAR_1, int VAR_2)
{
 struct mmc_omap_host *VAR_3 = VAR_1->host;
 unsigned long VAR_4;

 if (VAR_2)
  goto no_claim;
 FUNC_6(&VAR_3->slot_lock, VAR_4);
 while (VAR_3->mmc != ((void*)0)) {
  FUNC_7(&VAR_3->slot_lock, VAR_4);
  FUNC_9(VAR_3->slot_wq, VAR_3->mmc == ((void*)0));
  FUNC_6(&VAR_3->slot_lock, VAR_4);
 }
 VAR_3->mmc = VAR_1->mmc;
 FUNC_7(&VAR_3->slot_lock, VAR_4);
no_claim:
 FUNC_2(&VAR_3->clk_timer);
 if (VAR_3->current_slot != VAR_1 || !VAR_2)
  FUNC_5(VAR_3->current_slot);

 if (VAR_3->current_slot != VAR_1) {
  FUNC_1(VAR_3, VAR_0, VAR_1->saved_con & 0xFC00);
  if (VAR_3->pdata->switch_slot != ((void*)0))
   VAR_3->pdata->switch_slot(FUNC_3(VAR_1->mmc), VAR_1->id);
  VAR_3->current_slot = VAR_1;
 }

 if (VAR_2) {
  FUNC_4(VAR_3, 1);




  FUNC_0(VAR_3, VAR_0);

  FUNC_1(VAR_3, VAR_0, VAR_1->saved_con);
 } else
  FUNC_4(VAR_3, 0);
}
