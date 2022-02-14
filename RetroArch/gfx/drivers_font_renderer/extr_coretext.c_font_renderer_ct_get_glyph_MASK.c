
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct font_glyph {int dummy; } ;
struct TYPE_3__ {int * atlas_slots; } ;
typedef TYPE_1__ ct_font_renderer_t ;
struct TYPE_4__ {struct font_glyph const glyph; } ;
typedef TYPE_2__ coretext_atlas_slot_t ;


 size_t VAR_0 ;

__attribute__((used)) static const struct font_glyph *FUNC_0(
    void *VAR_1, uint32_t VAR_2)
{
   coretext_atlas_slot_t *VAR_3 = ((void*)0);
   ct_font_renderer_t *VAR_4 = (ct_font_renderer_t*)VAR_1;

   if (!VAR_4 || VAR_2 >= VAR_0)
      return ((void*)0);

   VAR_3 = (coretext_atlas_slot_t*)&VAR_4->atlas_slots[VAR_2];

   return &VAR_3->glyph;
}
