
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_slot {int * mmc; int * mrq; struct mmc_omap_host* host; } ;
struct mmc_omap_host {int nr_slots; int slot_lock; int slot_wq; int * mmc; int slot_release_work; struct mmc_omap_slot* next_slot; struct mmc_omap_slot* current_slot; struct mmc_omap_slot** slots; int clk_timer; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct mmc_omap_host*,int ) ;
 int FUNC_3 (struct mmc_omap_slot*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct mmc_omap_slot *VAR_2, int VAR_3)
{
 struct mmc_omap_host *VAR_4 = VAR_2->host;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_0(VAR_2 == ((void*)0) || VAR_4->mmc == ((void*)0));

 if (VAR_3)

  FUNC_4(&VAR_4->clk_timer, VAR_1 + VAR_0/10);
 else {
  FUNC_1(&VAR_4->clk_timer);
  FUNC_3(VAR_2);
  FUNC_2(VAR_4, 0);
 }

 FUNC_6(&VAR_4->slot_lock, VAR_5);

 for (VAR_6 = 0; VAR_6 < VAR_4->nr_slots; VAR_6++) {
  struct mmc_omap_slot *VAR_7;

  if (VAR_4->slots[VAR_6] == ((void*)0) || VAR_4->slots[VAR_6]->mrq == ((void*)0))
   continue;

  FUNC_0(VAR_4->next_slot != ((void*)0));
  VAR_7 = VAR_4->slots[VAR_6];

  FUNC_0(VAR_7 == VAR_4->current_slot);

  VAR_4->next_slot = VAR_7;
  VAR_4->mmc = VAR_7->mmc;
  FUNC_7(&VAR_4->slot_lock, VAR_5);
  FUNC_5(&VAR_4->slot_release_work);
  return;
 }

 VAR_4->mmc = ((void*)0);
 FUNC_8(&VAR_4->slot_wq);
 FUNC_7(&VAR_4->slot_lock, VAR_5);
}
