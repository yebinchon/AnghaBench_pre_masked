
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* vm_shared_region_slide_info_entry_v1_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
typedef int kern_return_t ;
struct TYPE_3__ {size_t toc_count; int entry_count; scalar_t__ toc_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,int,int) ;

__attribute__((used)) static kern_return_t
FUNC_1(vm_shared_region_slide_info_entry_v1_t VAR_2)
{
 uint32_t VAR_3=0;
 uint16_t VAR_4=0;
 uint16_t *VAR_5 = ((void*)0);

 VAR_5 = (uint16_t*)((uintptr_t)VAR_2 + VAR_2->toc_offset);
 for (;VAR_3 < VAR_2->toc_count; VAR_3++) {

  VAR_4 = (uint16_t)(VAR_5[VAR_3]);

  if (VAR_4 >= VAR_2->entry_count) {
   FUNC_0("No sliding bitmap entry for pageIndex: %d at entryIndex: %d amongst %d entries\n", VAR_3, VAR_4, VAR_2->entry_count);
   return VAR_0;
  }

 }
 return VAR_1;
}
