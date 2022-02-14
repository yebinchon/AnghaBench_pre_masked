
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_omap_slot {int cover_open; int cover_tasklet; TYPE_2__* mmc; } ;
struct mmc_omap_host {int nr_slots; struct mmc_omap_slot** slots; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ class_dev; } ;


 int FUNC_0 (int) ;
 struct mmc_omap_host* FUNC_1 (struct device*) ;
 int FUNC_2 (struct mmc_omap_slot*) ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct device *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;
 struct mmc_omap_host *VAR_4 = FUNC_1(VAR_0);
 struct mmc_omap_slot *VAR_5 = VAR_4->slots[VAR_1];

 FUNC_0(VAR_1 >= VAR_4->nr_slots);


 if (VAR_4->nr_slots == 0 || !VAR_4->slots[VAR_1])
  return;

 VAR_3 = FUNC_2(VAR_5);
 if (VAR_3 != VAR_5->cover_open) {
  VAR_5->cover_open = VAR_3;
  FUNC_3(&VAR_5->mmc->class_dev.kobj, ((void*)0), "cover_switch");
 }

 FUNC_4(&VAR_5->cover_tasklet);
}
