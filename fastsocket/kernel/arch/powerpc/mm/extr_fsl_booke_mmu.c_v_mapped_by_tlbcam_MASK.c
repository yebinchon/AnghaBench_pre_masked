
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long phys_addr_t ;
struct TYPE_2__ {unsigned long start; unsigned long limit; unsigned long phys; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

phys_addr_t FUNC_0(unsigned long VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  if (VAR_2 >= VAR_0[VAR_3].start && VAR_2 < VAR_0[VAR_3].limit)
   return VAR_0[VAR_3].phys + (VAR_2 - VAR_0[VAR_3].start);
 return 0;
}
