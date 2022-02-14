
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_map_address_t ;
typedef scalar_t__ pmap_paddr_t ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ pa; scalar_t__ va; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;

vm_map_address_t
FUNC_0(pmap_paddr_t VAR_4)
{
 for (size_t VAR_5 = 0; (VAR_5 < VAR_0) && (VAR_3[VAR_5].len != 0); VAR_5++) {
  if ((VAR_4 >= VAR_3[VAR_5].pa) && (VAR_4 < (VAR_3[VAR_5].pa + VAR_3[VAR_5].len)))
   return (VAR_4 - VAR_3[VAR_5].pa + VAR_3[VAR_5].va);
 }
 return (VAR_4 - VAR_1 + VAR_2);
}
