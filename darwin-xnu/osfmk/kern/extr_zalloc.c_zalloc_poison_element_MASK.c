
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* zone_t ;
typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {scalar_t__ elem_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__* FUNC_1 (scalar_t__,scalar_t__*) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

void
FUNC_3(boolean_t VAR_1, zone_t VAR_2, vm_offset_t VAR_3)
{
 vm_offset_t VAR_4 = VAR_2->elem_size;
 if (FUNC_0(VAR_1 && VAR_3)) {
  vm_offset_t *VAR_5 = ((vm_offset_t *) VAR_3) + 1;
  vm_offset_t *VAR_6 = FUNC_1(VAR_4, (vm_offset_t *) VAR_3);

  for ( ; VAR_5 < VAR_6 ; VAR_5++)
   if (FUNC_0(*VAR_5 != VAR_0))
    FUNC_2(VAR_2,
                                    VAR_3,
                                    *VAR_5,
                                    VAR_0,
                                    ((vm_offset_t)VAR_5) - VAR_3);
 }

 if (VAR_3) {





  vm_offset_t *VAR_7 = (vm_offset_t *) VAR_3;
  vm_offset_t *VAR_8 = FUNC_1(VAR_4, VAR_7);

  *VAR_7 = VAR_0;
  *VAR_8 = VAR_0;
 }
}
