
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int video_frame_info_t ;
struct video_coords {int* tex_coord; int* vertex; int* color; unsigned int vertices; int* lut_tex_coord; } ;
struct font_glyph {int draw_offset_x; int draw_offset_y; int atlas_offset_x; int atlas_offset_y; int width; int height; scalar_t__ advance_y; scalar_t__ advance_x; } ;
struct TYPE_9__ {int width; int height; } ;
struct TYPE_12__ {TYPE_1__ vp; } ;
typedef TYPE_4__ gl1_t ;
struct TYPE_13__ {float tex_width; float tex_height; TYPE_3__* block; int font_data; TYPE_2__* font_driver; TYPE_4__* gl; } ;
typedef TYPE_5__ gl1_raster_t ;
struct TYPE_11__ {int carr; } ;
struct TYPE_10__ {struct font_glyph* (* get_glyph ) (int ,char) ;} ;
typedef int GLfloat ;


 int VAR_0 ;


 double FUNC_0 (TYPE_5__*,char const*,unsigned int,int) ;
 int FUNC_1 (TYPE_5__*,struct video_coords*,int *) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 struct font_glyph* FUNC_4 (int ,unsigned int) ;
 struct font_glyph* FUNC_5 (int ,char) ;
 unsigned int FUNC_6 (char const**) ;
 int FUNC_7 (int *,struct video_coords*,unsigned int) ;

__attribute__((used)) static void FUNC_8(
      gl1_raster_t *VAR_1, const char *VAR_2, unsigned VAR_3,
      GLfloat VAR_4, const GLfloat VAR_5[4], GLfloat VAR_6,
      GLfloat VAR_7, unsigned VAR_8,
      video_frame_info_t *VAR_9)
{
   unsigned VAR_10;
   struct video_coords VAR_11;
   GLfloat VAR_12[2 * 6 * VAR_0];
   GLfloat VAR_13[2 * 6 * VAR_0];
   GLfloat VAR_14[4 * 6 * VAR_0];
   GLfloat VAR_15[2 * 6 * VAR_0];
   gl1_t *VAR_16 = VAR_1->gl;
   const char* VAR_17 = VAR_2 + VAR_3;
   int VAR_18 = FUNC_3(VAR_6 * VAR_16->vp.width);
   int VAR_19 = FUNC_3(VAR_7 * VAR_16->vp.height);
   int VAR_20 = 0;
   int VAR_21 = 0;
   float VAR_22 = 1.0f / VAR_1->tex_width;
   float VAR_23 = 1.0f / VAR_1->tex_height;
   float VAR_24 = 1.0f / VAR_1->gl->vp.width;
   float VAR_25 = 1.0f / VAR_1->gl->vp.height;

   switch (VAR_8)
   {
      case 128:
         VAR_18 -= FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
         break;
      case 129:
         VAR_18 -= FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4) / 2.0;
         break;
   }

   while (VAR_2 < VAR_17)
   {
      VAR_10 = 0;
      while ((VAR_10 < VAR_0) && (VAR_2 < VAR_17))
      {
         int VAR_26, VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
         unsigned VAR_32 = FUNC_6(&VAR_2);
         const struct font_glyph *VAR_33 = VAR_1->font_driver->get_glyph(
               VAR_1->font_data, VAR_32);

         if (!VAR_33)
            VAR_33 = VAR_1->font_driver->get_glyph(VAR_1->font_data, '?');

         if (!VAR_33)
            continue;

         VAR_26 = VAR_33->draw_offset_x;
         VAR_27 = VAR_33->draw_offset_y;
         VAR_28 = VAR_33->atlas_offset_x;
         VAR_29 = VAR_33->atlas_offset_y;
         VAR_30 = VAR_33->width;
         VAR_31 = VAR_33->height;

         FUNC_2(0, 0, 1);
         FUNC_2(1, 1, 1);
         FUNC_2(2, 0, 0);

         FUNC_2(3, 1, 0);
         FUNC_2(4, 0, 0);
         FUNC_2(5, 1, 1);

         VAR_10++;

         VAR_20 += VAR_33->advance_x;
         VAR_21 -= VAR_33->advance_y;
      }

      VAR_11.tex_coord = VAR_12;
      VAR_11.vertex = VAR_13;
      VAR_11.color = VAR_14;
      VAR_11.vertices = VAR_10 * 6;
      VAR_11.lut_tex_coord = VAR_15;

      if (VAR_1->block)
         FUNC_7(&VAR_1->block->carr, &VAR_11, VAR_11.vertices);
      else
         FUNC_1(VAR_1, &VAR_11, VAR_9);
   }
}
