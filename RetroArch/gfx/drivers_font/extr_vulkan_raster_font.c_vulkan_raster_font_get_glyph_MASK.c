
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* font_driver; } ;
typedef TYPE_2__ vulkan_raster_t ;
typedef int uint32_t ;
struct font_glyph {int dummy; } ;
struct TYPE_4__ {struct font_glyph* (* get_glyph ) (void*,int ) ;int ident; } ;


 struct font_glyph* FUNC_0 (void*,int ) ;
 int FUNC_1 (TYPE_2__*,struct font_glyph const*) ;

__attribute__((used)) static const struct font_glyph *FUNC_2(
      void *VAR_0, uint32_t VAR_1)
{
   const struct font_glyph* VAR_2;
   vulkan_raster_t *VAR_3 = (vulkan_raster_t*)VAR_0;

   if (!VAR_3 || !VAR_3->font_driver)
      return ((void*)0);
   if (!VAR_3->font_driver->ident)
       return ((void*)0);

   VAR_2 = VAR_3->font_driver->get_glyph((void*)VAR_3->font_driver, VAR_1);

   if(VAR_2)
      FUNC_1(VAR_3, VAR_2);

   return VAR_2;
}
