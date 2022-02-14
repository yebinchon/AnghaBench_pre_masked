
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ vm_map_offset_t ;
typedef scalar_t__ ppnum_t ;
typedef TYPE_2__* pmap_t ;
typedef int boolean_t ;
struct TYPE_7__ {scalar_t__ resident_count; } ;
struct TYPE_8__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;

boolean_t
FUNC_2(
       pmap_t VAR_4,
       vm_map_offset_t VAR_5,
       vm_map_offset_t VAR_6)
{
 vm_map_offset_t VAR_7;
 ppnum_t VAR_8;

 if (VAR_4 == VAR_2) {
  return VAR_3;
 }
 if (VAR_4->stats.resident_count == 0)
  return VAR_3;

 for (VAR_7 = VAR_5;
      VAR_7 < VAR_6;
      VAR_7 += VAR_1) {
  VAR_8 = FUNC_1(VAR_4, VAR_7);
  if (VAR_8) {
   FUNC_0("pmap_is_empty(%p,0x%llx,0x%llx): "
    "page %d at 0x%llx\n",
    VAR_4, VAR_5, VAR_6, VAR_8, VAR_7);
   return VAR_0;
  }
 }

 return VAR_3;
}
