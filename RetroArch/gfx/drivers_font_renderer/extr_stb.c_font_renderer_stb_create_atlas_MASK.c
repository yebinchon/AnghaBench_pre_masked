
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct font_glyph {scalar_t__ height; scalar_t__ width; int draw_offset_y; int draw_offset_x; scalar_t__ atlas_offset_y; scalar_t__ atlas_offset_x; int advance_x; } ;
struct TYPE_11__ {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; int yoff; int xoff; int xadvance; } ;
typedef TYPE_2__ stbtt_packedchar ;
struct TYPE_12__ {int * member_0; } ;
typedef TYPE_3__ stbtt_pack_context ;
struct TYPE_10__ {unsigned int width; unsigned int height; int dirty; int * buffer; } ;
struct TYPE_13__ {TYPE_1__ atlas; struct font_glyph* glyphs; } ;
typedef TYPE_4__ stb_font_renderer_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,int *,unsigned int,unsigned int,unsigned int,int,int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*,int *,int ,float,int ,int,TYPE_2__*) ;

__attribute__((used)) static bool FUNC_8(stb_font_renderer_t *VAR_0,
      uint8_t *VAR_1, float VAR_2, unsigned VAR_3, unsigned VAR_4)
{
   int VAR_5;
   stbtt_packedchar VAR_6[256];
   stbtt_pack_context VAR_7 = {((void*)0)};

   if (VAR_3 > 2048 || VAR_4 > 2048)
   {
      FUNC_1("[stb] Font atlas too big: %ux%u\n", VAR_3, VAR_4);
      goto error;
   }

   if (VAR_0->atlas.buffer)
      FUNC_3(VAR_0->atlas.buffer);

   VAR_0->atlas.buffer = (uint8_t*)FUNC_2(VAR_4, VAR_3);
   VAR_0->atlas.width = VAR_3;
   VAR_0->atlas.height = VAR_4;

   if (!VAR_0->atlas.buffer)
      goto error;

   FUNC_5(&VAR_7, VAR_0->atlas.buffer,
         VAR_0->atlas.width, VAR_0->atlas.height,
         VAR_0->atlas.width, 1, ((void*)0));

   FUNC_7(&VAR_7, VAR_1, 0, VAR_2, 0, 256, VAR_6);
   FUNC_6(&VAR_7);

   VAR_0->atlas.dirty = 1;

   for (VAR_5 = 0; VAR_5 < 256; ++VAR_5)
   {
      struct font_glyph *VAR_8 = &VAR_0->glyphs[VAR_5];
      stbtt_packedchar *VAR_9 = &VAR_6[VAR_5];

      VAR_8->advance_x = VAR_9->xadvance;
      VAR_8->atlas_offset_x = VAR_9->x0;
      VAR_8->atlas_offset_y = VAR_9->y0;
      VAR_8->draw_offset_x = VAR_9->xoff;
      VAR_8->draw_offset_y = VAR_9->yoff;
      VAR_8->width = VAR_9->x1 - VAR_9->x0;
      VAR_8->height = VAR_9->y1 - VAR_9->y0;


      if (FUNC_4(VAR_5) && (!VAR_8->width || !VAR_8->height))
      {
         int VAR_10 = VAR_3 * 1.2;
         int VAR_11 = VAR_4 * 1.2;


         if (VAR_3 < 2048 || VAR_4 < 2048)
         {
            VAR_10 = FUNC_0(VAR_10, 2048);
            VAR_11 = FUNC_0(VAR_11, 2048);
         }

         return FUNC_8(VAR_0, VAR_1, VAR_2,
               VAR_10, VAR_11);
      }
   }

   return 1;

error:
   VAR_0->atlas.width = VAR_0->atlas.height = 0;

   if (VAR_0->atlas.buffer)
      FUNC_3(VAR_0->atlas.buffer);

   VAR_0->atlas.buffer = ((void*)0);

   return 0;
}
