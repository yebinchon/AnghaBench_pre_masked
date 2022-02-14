
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int clock; } ;
struct mmc_host {unsigned int f_min; unsigned int f_max; TYPE_1__ ios; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mmc_host*) ;

void FUNC_2(struct mmc_host *VAR_0, unsigned int VAR_1)
{
 FUNC_0(VAR_1 < VAR_0->f_min);

 if (VAR_1 > VAR_0->f_max)
  VAR_1 = VAR_0->f_max;

 VAR_0->ios.clock = VAR_1;
 FUNC_1(VAR_0);
}
