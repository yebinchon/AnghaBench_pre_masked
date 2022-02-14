
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int font_data; TYPE_1__* font_driver; } ;
typedef TYPE_2__ vita_font_t ;
struct font_glyph {scalar_t__ advance_x; } ;
struct TYPE_3__ {struct font_glyph* (* get_glyph ) (int ,char) ;} ;


 struct font_glyph* FUNC_0 (int ,unsigned int) ;
 struct font_glyph* FUNC_1 (int ,char) ;
 unsigned int FUNC_2 (char const**) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const char *VAR_1,
      unsigned VAR_2, float VAR_3)
{
   unsigned VAR_4;
   int VAR_5 = 0;
   vita_font_t *VAR_6 = (vita_font_t*)VAR_0;

   if (!VAR_6)
      return 0;

   for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
   {
      const struct font_glyph *VAR_7 = ((void*)0);
      const char *VAR_8 = &VAR_1[VAR_4];
      unsigned VAR_9 = FUNC_2(&VAR_8);
      unsigned VAR_10 = VAR_8 - &VAR_1[VAR_4];

      if (VAR_10 > 1)
         VAR_4 += VAR_10 - 1;

      VAR_7 = VAR_6->font_driver->get_glyph(VAR_6->font_data, VAR_9);

      if (!VAR_7)
         VAR_7 = VAR_6->font_driver->get_glyph(VAR_6->font_data, '?');

      if (!VAR_7)
         continue;

      VAR_5 += VAR_7->advance_x;
   }

   return VAR_5 * VAR_3;
}
