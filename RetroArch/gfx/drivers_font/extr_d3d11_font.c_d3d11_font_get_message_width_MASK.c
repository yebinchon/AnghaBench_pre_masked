
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct font_glyph {scalar_t__ advance_x; } ;
struct TYPE_4__ {int font_data; TYPE_1__* font_driver; } ;
typedef TYPE_2__ d3d11_font_t ;
struct TYPE_3__ {struct font_glyph* (* get_glyph ) (int ,char) ;} ;


 struct font_glyph* FUNC_0 (int ,unsigned int) ;
 struct font_glyph* FUNC_1 (int ,char) ;
 unsigned int FUNC_2 (char const**) ;

__attribute__((used)) static int FUNC_3(void* VAR_0, const char* VAR_1, unsigned VAR_2, float VAR_3)
{
   d3d11_font_t* VAR_4 = (d3d11_font_t*)VAR_0;

   unsigned VAR_5;
   int VAR_6 = 0;

   if (!VAR_4)
      return 0;

   for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   {
      const struct font_glyph *VAR_7;
      const char* VAR_8 = &VAR_1[VAR_5];
      unsigned VAR_9 = FUNC_2(&VAR_8);
      unsigned VAR_10 = VAR_8 - &VAR_1[VAR_5];

      if (VAR_10 > 1)
         VAR_5 += VAR_10 - 1;

      VAR_7 = VAR_4->font_driver->get_glyph(VAR_4->font_data, VAR_9);

      if (!VAR_7)
         VAR_7 = VAR_4->font_driver->get_glyph(VAR_4->font_data, '?');

      if (!VAR_7)
         continue;

      VAR_6 += VAR_7->advance_x;
   }

   return VAR_6 * VAR_3;
}
