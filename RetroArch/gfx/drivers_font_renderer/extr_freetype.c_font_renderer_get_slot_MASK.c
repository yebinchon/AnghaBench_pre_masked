
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ usage_counter; TYPE_2__* atlas_slots; TYPE_2__** uc_map; } ;
typedef TYPE_1__ ft_font_renderer_t ;
struct TYPE_6__ {scalar_t__ last_used; int charcode; struct TYPE_6__* next; } ;
typedef TYPE_2__ freetype_atlas_slot_t ;


 int VAR_0 ;

__attribute__((used)) static freetype_atlas_slot_t* FUNC_0(ft_font_renderer_t *VAR_1)
{
   int VAR_2, VAR_3;
   unsigned VAR_4 = 0;

   for (VAR_2 = 1; VAR_2 < VAR_0; VAR_2++)
      if ((VAR_1->usage_counter - VAR_1->atlas_slots[VAR_2].last_used) >
         (VAR_1->usage_counter - VAR_1->atlas_slots[VAR_4].last_used))
         VAR_4 = VAR_2;


   VAR_3 = VAR_1->atlas_slots[VAR_4].charcode & 0xFF;
   if (VAR_1->uc_map[VAR_3] == &VAR_1->atlas_slots[VAR_4])
      VAR_1->uc_map[VAR_3] = VAR_1->atlas_slots[VAR_4].next;
   else if (VAR_1->uc_map[VAR_3])
   {
      freetype_atlas_slot_t* VAR_5 = VAR_1->uc_map[VAR_3];
      while(VAR_5->next && VAR_5->next != &VAR_1->atlas_slots[VAR_4])
         VAR_5 = VAR_5->next;
      VAR_5->next = VAR_1->atlas_slots[VAR_4].next;
   }

   return &VAR_1->atlas_slots[VAR_4];
}
