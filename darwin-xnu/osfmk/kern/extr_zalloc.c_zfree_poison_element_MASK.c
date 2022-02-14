
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_3__ {scalar_t__ elem_size; int zp_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__* FUNC_1 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (int *,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

boolean_t
FUNC_3(zone_t VAR_6, vm_offset_t VAR_7)
{
 boolean_t VAR_8 = VAR_0;
 if (VAR_3 != 0 || VAR_5 != 0) {
  vm_offset_t VAR_9 = VAR_6->elem_size;

  uint32_t VAR_10 = VAR_3 + (((uint32_t)VAR_9) >> VAR_4);

  if (VAR_9 <= VAR_5)
   VAR_8 = VAR_1;
  else if (VAR_3 != 0 && FUNC_2(&VAR_6->zp_count, VAR_10) == VAR_1)
   VAR_8 = VAR_1;

  if (FUNC_0(VAR_8)) {



   vm_offset_t *VAR_11 = ((vm_offset_t *) VAR_7) + 1;
   vm_offset_t *VAR_12 = FUNC_1(VAR_9, (vm_offset_t *)VAR_7);

   for ( ; VAR_11 < VAR_12; VAR_11++)
    *VAR_11 = VAR_2;
  }
 }
 return VAR_8;
}
