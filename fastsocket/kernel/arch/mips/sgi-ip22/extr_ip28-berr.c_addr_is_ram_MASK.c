
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_map; TYPE_1__* map; } ;
struct TYPE_3__ {unsigned long addr; unsigned int size; } ;


 TYPE_2__ VAR_0 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_1, unsigned VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0.nr_map; VAR_3++) {
  unsigned long VAR_4 = VAR_0.map[VAR_3].addr;
  if (VAR_4 <= VAR_1 && VAR_1+VAR_2 <= VAR_4+VAR_0.map[VAR_3].size)
   return 1;
 }
 return 0;
}
