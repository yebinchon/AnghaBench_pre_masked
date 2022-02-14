
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct font_glyph {int dummy; } ;
struct TYPE_4__ {TYPE_1__* font_driver; } ;
typedef TYPE_2__ gl_raster_t ;
struct TYPE_3__ {struct font_glyph const* (* get_glyph ) (void*,int ) ;int ident; } ;


 struct font_glyph const* FUNC_0 (void*,int ) ;

__attribute__((used)) static const struct font_glyph *FUNC_1(
      void *VAR_0, uint32_t VAR_1)
{
   gl_raster_t *VAR_2 = (gl_raster_t*)VAR_0;

   if (!VAR_2 || !VAR_2->font_driver)
      return ((void*)0);
   if (!VAR_2->font_driver->ident)
       return ((void*)0);
   return VAR_2->font_driver->get_glyph((void*)VAR_2->font_driver, VAR_1);
}
