
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int gsi_base; unsigned int num_rte; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline int
FUNC_0 (unsigned int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if ((unsigned) (VAR_2 - VAR_1[VAR_3].gsi_base) <
      VAR_1[VAR_3].num_rte)
   return VAR_3;
 }

 return -1;
}
