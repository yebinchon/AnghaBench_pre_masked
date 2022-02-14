
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {unsigned int width; unsigned int height; int * buffer; } ;
struct TYPE_13__ {TYPE_6__* atlas_slots; TYPE_3__ atlas; TYPE_2__* face; } ;
typedef TYPE_5__ ft_font_renderer_t ;
struct TYPE_12__ {unsigned int atlas_offset_x; unsigned int atlas_offset_y; } ;
struct TYPE_14__ {TYPE_4__ glyph; } ;
typedef TYPE_6__ freetype_atlas_slot_t ;
struct TYPE_9__ {float xMax; float xMin; float yMax; float yMin; } ;
struct TYPE_10__ {float units_per_EM; TYPE_1__ bbox; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int,int) ;
 int FUNC_1 (TYPE_5__*,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (float) ;

__attribute__((used)) static bool FUNC_4(ft_font_renderer_t *VAR_2, float VAR_3)
{
   unsigned VAR_4, VAR_5, VAR_6;
   freetype_atlas_slot_t* VAR_7 = ((void*)0);

   unsigned VAR_8 = FUNC_3((VAR_2->face->bbox.xMax - VAR_2->face->bbox.xMin) * VAR_3 / VAR_2->face->units_per_EM);
   unsigned VAR_9 = FUNC_3((VAR_2->face->bbox.yMax - VAR_2->face->bbox.yMin) * VAR_3 / VAR_2->face->units_per_EM);

   unsigned VAR_10 = VAR_8 * VAR_0;

   unsigned VAR_11 = VAR_9 * VAR_1;

   uint8_t *VAR_12 = (uint8_t*)
      FUNC_0(VAR_10 * VAR_11, 1);

   if (!VAR_12)
      return 0;

   VAR_2->atlas.buffer = VAR_12;
   VAR_2->atlas.width = VAR_10;
   VAR_2->atlas.height = VAR_11;
   VAR_7 = VAR_2->atlas_slots;

   for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
   {
      for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
      {
         VAR_7->glyph.atlas_offset_x = VAR_5 * VAR_8;
         VAR_7->glyph.atlas_offset_y = VAR_6 * VAR_9;
         VAR_7++;
      }
   }

   for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
      FUNC_1(VAR_2, VAR_4);

   for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
      if (FUNC_2(VAR_4))
         FUNC_1(VAR_2, VAR_4);

   return 1;
}
