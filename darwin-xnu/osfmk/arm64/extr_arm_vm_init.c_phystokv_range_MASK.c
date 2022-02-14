
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_map_address_t ;
typedef scalar_t__ pmap_paddr_t ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ pa; scalar_t__ va; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;

vm_map_address_t
FUNC_0(pmap_paddr_t VAR_6, vm_size_t *VAR_7)
{
 vm_size_t VAR_8;
 for (size_t VAR_9 = 0; (VAR_9 < VAR_2) && (VAR_5[VAR_9].len != 0); VAR_9++) {
  if ((VAR_6 >= VAR_5[VAR_9].pa) && (VAR_6 < (VAR_5[VAR_9].pa + VAR_5[VAR_9].len))) {
   VAR_8 = VAR_5[VAR_9].len - (VAR_6 - VAR_5[VAR_9].pa);
   if (*VAR_7 > VAR_8)
    *VAR_7 = VAR_8;
   return (VAR_6 - VAR_5[VAR_9].pa + VAR_5[VAR_9].va);
  }
 }
 VAR_8 = VAR_1 - (VAR_6 & VAR_0);
 if (*VAR_7 > VAR_8)
  *VAR_7 = VAR_8;
 return (VAR_6 - VAR_3 + VAR_4);
}
