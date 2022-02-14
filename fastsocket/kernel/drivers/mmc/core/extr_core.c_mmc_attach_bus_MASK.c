
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int bus_ops; int bus_refs; int lock; scalar_t__ bus_dead; int claimed; } ;
struct mmc_bus_ops {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mmc_host *VAR_0, const struct mmc_bus_ops *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(!VAR_0);
 FUNC_0(!VAR_1);

 FUNC_1(!VAR_0->claimed);

 FUNC_2(&VAR_0->lock, VAR_2);

 FUNC_0(VAR_0->bus_ops);
 FUNC_0(VAR_0->bus_refs);

 VAR_0->bus_ops = VAR_1;
 VAR_0->bus_refs = 1;
 VAR_0->bus_dead = 0;

 FUNC_3(&VAR_0->lock, VAR_2);
}
