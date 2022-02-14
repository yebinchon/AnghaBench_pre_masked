
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {TYPE_1__* bus_ops; int bus_dead; } ;
struct TYPE_2__ {int (* awake ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*) ;

int FUNC_3(struct mmc_host *VAR_1)
{
 int VAR_2 = -VAR_0;

 FUNC_0(VAR_1);

 if (VAR_1->bus_ops && !VAR_1->bus_dead && VAR_1->bus_ops->awake)
  VAR_2 = VAR_1->bus_ops->awake(VAR_1);

 FUNC_1(VAR_1);

 return VAR_2;
}
