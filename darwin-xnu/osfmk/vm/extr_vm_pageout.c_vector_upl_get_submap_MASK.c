
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int * vm_map_t ;
typedef TYPE_1__* vector_upl_t ;
typedef TYPE_2__* upl_t ;
struct TYPE_6__ {TYPE_1__* vector_upl; } ;
struct TYPE_5__ {int submap_dst_addr; int * submap; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

void
FUNC_2(upl_t VAR_0, vm_map_t *VAR_1, vm_offset_t *VAR_2)
{
 *VAR_1 = ((void*)0);

 if(FUNC_1(VAR_0)) {
  vector_upl_t VAR_3 = VAR_0->vector_upl;
  if(VAR_3) {
   *VAR_1 = VAR_3->submap;
   *VAR_2 = VAR_3->submap_dst_addr;
  }
  else
   FUNC_0("vector_upl_get_submap was passed a non-vectored UPL\n");
 }
 else
  FUNC_0("vector_upl_get_submap was passed a null UPL\n");
}
