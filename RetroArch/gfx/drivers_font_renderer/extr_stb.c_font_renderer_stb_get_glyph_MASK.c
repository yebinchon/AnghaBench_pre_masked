
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct font_glyph {int dummy; } ;
struct TYPE_2__ {struct font_glyph const* glyphs; } ;
typedef TYPE_1__ stb_font_renderer_t ;



__attribute__((used)) static const struct font_glyph *FUNC_0(
      void *VAR_0, uint32_t VAR_1)
{
   stb_font_renderer_t *VAR_2 = (stb_font_renderer_t*)VAR_0;
   return VAR_1 < 256 ? &VAR_2->glyphs[VAR_1] : ((void*)0);
}
