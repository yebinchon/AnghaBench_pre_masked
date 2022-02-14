
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_omap_host {int abort; int slot_lock; int cmd_abort_work; int irq; int * cmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_omap_host*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_5(unsigned long VAR_1)
{
 struct mmc_omap_host *VAR_2 = (struct mmc_omap_host *) VAR_1;
 unsigned long VAR_3;

 FUNC_3(&VAR_2->slot_lock, VAR_3);
 if (VAR_2->cmd != ((void*)0) && !VAR_2->abort) {
  FUNC_0(VAR_2, VAR_0, 0);
  FUNC_1(VAR_2->irq);
  VAR_2->abort = 1;
  FUNC_2(&VAR_2->cmd_abort_work);
 }
 FUNC_4(&VAR_2->slot_lock, VAR_3);
}
