
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int font_data; TYPE_1__* font_driver; } ;
typedef TYPE_2__ vulkan_raster_t ;
typedef char uint8_t ;
struct font_glyph {scalar_t__ advance_x; } ;
struct TYPE_4__ {struct font_glyph* (* get_glyph ) (int ,char) ;} ;


 struct font_glyph* FUNC_0 (int ,char) ;
 struct font_glyph* FUNC_1 (int ,char) ;
 int FUNC_2 (TYPE_2__*,struct font_glyph const*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const char *VAR_1,
      unsigned VAR_2, float VAR_3)
{
   vulkan_raster_t *VAR_4 = (vulkan_raster_t*)VAR_0;

   unsigned VAR_5;
   int VAR_6 = 0;

   if (!VAR_4)
      return 0;

   for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   {
      const struct font_glyph *VAR_7 =
         VAR_4->font_driver->get_glyph(VAR_4->font_data, (uint8_t)VAR_1[VAR_5]);
      if (!VAR_7)
         VAR_7 = VAR_4->font_driver->get_glyph(VAR_4->font_data, '?');

      if (VAR_7)
      {
         FUNC_2(VAR_4, VAR_7);
         VAR_6 += VAR_7->advance_x;
      }
   }

   return VAR_6 * VAR_3;
}
