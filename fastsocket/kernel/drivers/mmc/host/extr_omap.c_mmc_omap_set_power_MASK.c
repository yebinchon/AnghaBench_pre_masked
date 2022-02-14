
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mmc_omap_slot {int id; int mmc; TYPE_1__* pdata; struct mmc_omap_host* host; } ;
struct mmc_omap_host {int dummy; } ;
struct TYPE_2__ {int (* set_power ) (int ,int ,int,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_omap_host*,int ) ;
 int FUNC_1 (struct mmc_omap_host*,int ,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct mmc_omap_slot *VAR_1, int VAR_2,
    int VAR_3)
{
 struct mmc_omap_host *VAR_4;

 VAR_4 = VAR_1->host;

 if (VAR_1->pdata->set_power != ((void*)0))
  VAR_1->pdata->set_power(FUNC_3(VAR_1->mmc), VAR_1->id, VAR_2,
     VAR_3);

 if (FUNC_2()) {
  u16 VAR_5;

  if (VAR_2) {
   VAR_5 = FUNC_0(VAR_4, VAR_0);
   FUNC_1(VAR_4, VAR_0, VAR_5 | (1 << 11));
  } else {
   VAR_5 = FUNC_0(VAR_4, VAR_0);
   FUNC_1(VAR_4, VAR_0, VAR_5 & ~(1 << 11));
  }
 }
}
