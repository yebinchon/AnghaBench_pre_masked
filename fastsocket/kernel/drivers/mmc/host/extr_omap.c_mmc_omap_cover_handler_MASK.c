
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_omap_slot {int cover_timer; TYPE_1__* mmc; } ;
struct TYPE_2__ {int * card; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct mmc_omap_slot*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct mmc_omap_slot *VAR_3 = (struct mmc_omap_slot *)VAR_2;
 int VAR_4 = FUNC_2(VAR_3);

 FUNC_1(VAR_3->mmc, 0);
 if (!VAR_4)
  return;





 if (VAR_3->mmc->card == ((void*)0) || !FUNC_0(VAR_3->mmc->card))
  return;

 FUNC_3(&VAR_3->cover_timer,
    VAR_1 + FUNC_4(VAR_0));
}
