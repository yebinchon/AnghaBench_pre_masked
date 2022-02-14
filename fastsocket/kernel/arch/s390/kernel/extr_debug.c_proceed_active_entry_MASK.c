
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* active_entries; size_t active_area; scalar_t__ entry_size; int* active_pages; int pages_per_area; } ;
typedef TYPE_1__ debug_info_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(debug_info_t * VAR_1)
{
 if ((VAR_1->active_entries[VAR_1->active_area] += VAR_1->entry_size)
     > (VAR_0 - VAR_1->entry_size)){
  VAR_1->active_entries[VAR_1->active_area] = 0;
  VAR_1->active_pages[VAR_1->active_area] =
   (VAR_1->active_pages[VAR_1->active_area] + 1) %
   VAR_1->pages_per_area;
 }
}
