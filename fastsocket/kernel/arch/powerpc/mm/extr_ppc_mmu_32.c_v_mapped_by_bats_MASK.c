
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long phys_addr_t ;
struct TYPE_2__ {unsigned long start; unsigned long limit; unsigned long phys; } ;


 TYPE_1__* VAR_0 ;

phys_addr_t FUNC_0(unsigned long VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2)
  if (VAR_1 >= VAR_0[VAR_2].start && VAR_1 < VAR_0[VAR_2].limit)
   return VAR_0[VAR_2].phys + (VAR_1 - VAR_0[VAR_2].start);
 return 0;
}
