
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ phys_addr_t ;
struct TYPE_2__ {scalar_t__ phys; scalar_t__ limit; scalar_t__ start; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

unsigned long FUNC_0(phys_addr_t VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  if (VAR_2 >= VAR_0[VAR_3].phys
          && VAR_2 < (VAR_0[VAR_3].limit-VAR_0[VAR_3].start)
                +VAR_0[VAR_3].phys)
   return VAR_0[VAR_3].start+(VAR_2-VAR_0[VAR_3].phys);
 return 0;
}
