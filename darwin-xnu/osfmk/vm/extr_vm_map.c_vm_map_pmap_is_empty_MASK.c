
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* vm_map_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef scalar_t__ ppnum_t ;
typedef int boolean_t ;
struct TYPE_4__ {int * pmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_1__*,long long,long long,scalar_t__,long long) ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;

boolean_t FUNC_3(
 vm_map_t VAR_3,
 vm_map_offset_t VAR_4,
 vm_map_offset_t VAR_5)
{



 vm_map_offset_t VAR_6;
 ppnum_t VAR_7;

 if (VAR_3->pmap == ((void*)0)) {
  return VAR_2;
 }

 for (VAR_6 = VAR_4;
      VAR_6 < VAR_5;
      VAR_6 += VAR_1) {
  VAR_7 = FUNC_1(VAR_3->pmap, VAR_6);
  if (VAR_7) {
   FUNC_0("vm_map_pmap_is_empty(%p,0x%llx,0x%llx): "
    "page %d at 0x%llx\n",
    VAR_3, (long long)VAR_4, (long long)VAR_5,
    VAR_7, (long long)VAR_6);
   return VAR_0;
  }
 }
 return VAR_2;

}
