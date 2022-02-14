
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {unsigned int width; unsigned int height; float font_msg_pos_x; float font_msg_pos_y; float font_msg_color_r; float font_msg_color_g; float font_msg_color_b; } ;
typedef TYPE_4__ video_frame_info_t ;
struct font_params {float x; float y; float scale; int full_screen; int text_align; int drop_x; int drop_y; float drop_mod; float drop_alpha; int color; } ;
struct TYPE_14__ {TYPE_3__* gl; TYPE_2__* block; scalar_t__ font_driver; scalar_t__ font_data; } ;
typedef TYPE_5__ gl_core_raster_t ;
typedef enum text_alignment { ____Placeholder_text_alignment } text_alignment ;
struct TYPE_10__ {float width; float height; } ;
struct TYPE_12__ {TYPE_1__ vp; } ;
struct TYPE_11__ {int fullscreen; } ;
typedef float GLfloat ;


 float FUNC_0 (int ) ;
 float FUNC_1 (int ) ;
 float FUNC_2 (int ) ;
 float FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,char const*,float,float*,float,float,int,TYPE_4__*) ;
 int FUNC_6 (unsigned int,unsigned int,TYPE_5__*,int) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (unsigned int,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_9(
      video_frame_info_t *VAR_2,
      void *VAR_3, const char *VAR_4,
      const struct font_params *VAR_5)
{
   GLfloat VAR_6[4];
   int VAR_7, VAR_8;
   GLfloat VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
   enum text_alignment VAR_14 = VAR_1;
   bool VAR_15 = 0 ;
   gl_core_raster_t *VAR_16 = (gl_core_raster_t*)VAR_3;
   unsigned VAR_17 = VAR_2->width;
   unsigned VAR_18 = VAR_2->height;

   if (!VAR_16 || FUNC_7(VAR_4))
      return;

   if (VAR_5)
   {
      VAR_9 = VAR_5->x;
      VAR_10 = VAR_5->y;
      VAR_11 = VAR_5->scale;
      VAR_15 = VAR_5->full_screen;
      VAR_14 = VAR_5->text_align;
      VAR_7 = VAR_5->drop_x;
      VAR_8 = VAR_5->drop_y;
      VAR_12 = VAR_5->drop_mod;
      VAR_13 = VAR_5->drop_alpha;

      VAR_6[0] = FUNC_3(VAR_5->color) / 255.0f;
      VAR_6[1] = FUNC_2(VAR_5->color) / 255.0f;
      VAR_6[2] = FUNC_1(VAR_5->color) / 255.0f;
      VAR_6[3] = FUNC_0(VAR_5->color) / 255.0f;


      if (VAR_6[3] <= 0.0f)
         VAR_6[3] = 1.0f;
   }
   else
   {
      VAR_9 = VAR_2->font_msg_pos_x;
      VAR_10 = VAR_2->font_msg_pos_y;
      VAR_11 = 1.0f;
      VAR_15 = 1;
      VAR_14 = VAR_1;

      VAR_6[0] = VAR_2->font_msg_color_r;
      VAR_6[1] = VAR_2->font_msg_color_g;
      VAR_6[2] = VAR_2->font_msg_color_b;
      VAR_6[3] = 1.0f;

      VAR_7 = -2;
      VAR_8 = -2;
      VAR_12 = 0.3f;
      VAR_13 = 1.0f;
   }

   if (VAR_16->block)
      VAR_16->block->fullscreen = VAR_15;
   else
      FUNC_6(VAR_17, VAR_18, VAR_16, VAR_15);

   if (!FUNC_7(VAR_4) && VAR_16->gl
         && VAR_16->font_data && VAR_16->font_driver)
   {
      if (VAR_7 || VAR_8)
      {
         GLfloat VAR_19[4];

         VAR_19[0] = VAR_6[0] * VAR_12;
         VAR_19[1] = VAR_6[1] * VAR_12;
         VAR_19[2] = VAR_6[2] * VAR_12;
         VAR_19[3] = VAR_6[3] * VAR_13;

         if (VAR_16->gl)
            FUNC_5(VAR_16, VAR_4, VAR_11, VAR_19,
                  VAR_9 + VAR_11 * VAR_7 / VAR_16->gl->vp.width, VAR_10 +
                  VAR_11 * VAR_8 / VAR_16->gl->vp.height, VAR_14,
                  VAR_2);
      }

      if (VAR_16->gl)
         FUNC_5(VAR_16, VAR_4, VAR_11, VAR_6,
               VAR_9, VAR_10, VAR_14, VAR_2);
   }

   if (!VAR_16->block && VAR_16->gl)
   {
      FUNC_4(VAR_0);
      FUNC_8(VAR_17, VAR_18, 0, 1);
   }
}
