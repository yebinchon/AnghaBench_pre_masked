
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long num_bytes; unsigned long base_addr; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 TYPE_1__* VAR_2 ;

unsigned long FUNC_0(void)
{
 int VAR_3;
 int VAR_4 = 0;

 for (VAR_3 = 0; VAR_2[VAR_3].num_bytes != 0; VAR_3++) {
  unsigned long VAR_5 = VAR_2[VAR_3].base_addr >> VAR_0;
  unsigned long VAR_6 = (VAR_2[VAR_3].base_addr + VAR_2[VAR_3].num_bytes) >> VAR_0;

  if (VAR_6 <= VAR_1)
   continue;

  if (VAR_5 < VAR_1)
   VAR_5 = VAR_1;

  VAR_4 += VAR_6 - VAR_5;
 }

 return VAR_4;
}
