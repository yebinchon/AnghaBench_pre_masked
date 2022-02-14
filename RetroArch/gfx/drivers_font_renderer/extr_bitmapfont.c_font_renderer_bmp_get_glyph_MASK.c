
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct font_glyph {int dummy; } ;
struct TYPE_2__ {struct font_glyph const* glyphs; } ;
typedef TYPE_1__ bm_renderer_t ;


 size_t VAR_0 ;

__attribute__((used)) static const struct font_glyph *FUNC_0(
      void *VAR_1, uint32_t VAR_2)
{
   bm_renderer_t *VAR_3 = (bm_renderer_t*)VAR_1;
   if (!VAR_3)
      return ((void*)0);
   return VAR_2 < VAR_0 ? &VAR_3->glyphs[VAR_2] : ((void*)0);
}
