
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int removed; int caps; int card; TYPE_1__* bus_ops; int bus_dead; int detect; int disable; int lock; } ;
struct TYPE_2__ {int (* remove ) (struct mmc_host*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct mmc_host*) ;

void FUNC_12(struct mmc_host *VAR_1)
{







 if (VAR_1->caps & VAR_0)
  FUNC_1(&VAR_1->disable);
 FUNC_1(&VAR_1->detect);
 FUNC_6();

 FUNC_2(VAR_1);
 if (VAR_1->bus_ops && !VAR_1->bus_dead) {
  if (VAR_1->bus_ops->remove)
   VAR_1->bus_ops->remove(VAR_1);

  FUNC_4(VAR_1);
  FUNC_5(VAR_1);
  FUNC_8(VAR_1);
  FUNC_3(VAR_1);
  return;
 }
 FUNC_3(VAR_1);

 FUNC_0(VAR_1->card);

 FUNC_7(VAR_1);
}
