
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {int bus_refs; int * bus_ops; int bus_dead; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mmc_host *VAR_0)
{
 FUNC_0(!VAR_0);
 FUNC_0(VAR_0->bus_refs);
 FUNC_0(!VAR_0->bus_dead);

 VAR_0->bus_ops = ((void*)0);
}
