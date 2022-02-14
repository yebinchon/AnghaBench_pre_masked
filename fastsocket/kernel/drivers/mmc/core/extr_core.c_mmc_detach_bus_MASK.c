
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int bus_dead; int lock; int bus_ops; int claimed; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct mmc_host *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(!VAR_0);

 FUNC_1(!VAR_0->claimed);
 FUNC_1(!VAR_0->bus_ops);

 FUNC_4(&VAR_0->lock, VAR_1);

 VAR_0->bus_dead = 1;

 FUNC_5(&VAR_0->lock, VAR_1);

 FUNC_3(VAR_0);

 FUNC_2(VAR_0);
}
