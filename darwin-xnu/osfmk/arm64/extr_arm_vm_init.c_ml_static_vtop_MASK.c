
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ vm_address_t ;
typedef scalar_t__ va ;
struct TYPE_2__ {scalar_t__ len; scalar_t__ va; scalar_t__ pa; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,void*) ;
 TYPE_1__* VAR_4 ;

vm_offset_t
FUNC_1(vm_offset_t VAR_5)
{
 for (size_t VAR_6 = 0; (VAR_6 < VAR_0) && (VAR_4[VAR_6].len != 0); VAR_6++) {
  if ((VAR_5 >= VAR_4[VAR_6].va) && (VAR_5 < (VAR_4[VAR_6].va + VAR_4[VAR_6].len)))
   return (VAR_5 - VAR_4[VAR_6].va + VAR_4[VAR_6].pa);
 }
 if (((vm_address_t)(VAR_5) - VAR_3) >= VAR_2)
  FUNC_0("ml_static_vtop(): illegal VA: %p\n", (void*)VAR_5);
 return ((vm_address_t)(VAR_5) - VAR_3 + VAR_1);
}
