
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {TYPE_1__* bus_ops; scalar_t__ bus_dead; } ;
struct TYPE_2__ {int (* power_save ) (struct mmc_host*) ;int power_restore; } ;


 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;

void FUNC_4(struct mmc_host *VAR_0)
{
 FUNC_0(VAR_0);

 if (!VAR_0->bus_ops || VAR_0->bus_dead || !VAR_0->bus_ops->power_restore) {
  FUNC_1(VAR_0);
  return;
 }

 if (VAR_0->bus_ops->power_save)
  VAR_0->bus_ops->power_save(VAR_0);

 FUNC_1(VAR_0);

 FUNC_2(VAR_0);
}
