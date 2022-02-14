
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
typedef TYPE_5__ gl1_raster_t ;
typedef enum text_alignment { ____Placeholder_text_alignment } text_alignment ;
struct TYPE_10__ {float width; float height; } ;
struct TYPE_12__ {size_t tex_index; int * texture; TYPE_1__ vp; } ;
struct TYPE_11__ {int fullscreen; } ;
typedef float GLfloat ;


 float FUNC_0 (int ) ;
 float FUNC_1 (int ) ;
 float FUNC_2 (int ) ;
 float FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_5__*,char const*,float,float*,float,float,int,TYPE_4__*) ;
 int FUNC_5 (unsigned int,unsigned int,TYPE_5__*,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (unsigned int,unsigned int,int,int) ;

__attribute__((used)) static void FUNC_11(
      video_frame_info_t *VAR_3,
      void *VAR_4, const char *VAR_5,
      const struct font_params *VAR_6)
{
   GLfloat VAR_7[4];
   int VAR_8, VAR_9;
   GLfloat VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
   enum text_alignment VAR_15 = VAR_2;
   bool VAR_16 = 0 ;
   gl1_raster_t *VAR_17 = (gl1_raster_t*)VAR_4;
   unsigned VAR_18 = VAR_3->width;
   unsigned VAR_19 = VAR_3->height;

   if (!VAR_17 || FUNC_9(VAR_5))
      return;

   if (VAR_6)
   {
      VAR_10 = VAR_6->x;
      VAR_11 = VAR_6->y;
      VAR_12 = VAR_6->scale;
      VAR_16 = VAR_6->full_screen;
      VAR_15 = VAR_6->text_align;
      VAR_8 = VAR_6->drop_x;
      VAR_9 = VAR_6->drop_y;
      VAR_13 = VAR_6->drop_mod;
      VAR_14 = VAR_6->drop_alpha;

      VAR_7[0] = FUNC_3(VAR_6->color) / 255.0f;
      VAR_7[1] = FUNC_2(VAR_6->color) / 255.0f;
      VAR_7[2] = FUNC_1(VAR_6->color) / 255.0f;
      VAR_7[3] = FUNC_0(VAR_6->color) / 255.0f;


      if (VAR_7[3] <= 0.0f)
         VAR_7[3] = 1.0f;
   }
   else
   {
      VAR_10 = VAR_3->font_msg_pos_x;
      VAR_11 = VAR_3->font_msg_pos_y;
      VAR_12 = 1.0f;
      VAR_16 = 1;
      VAR_15 = VAR_2;

      VAR_7[0] = VAR_3->font_msg_color_r;
      VAR_7[1] = VAR_3->font_msg_color_g;
      VAR_7[2] = VAR_3->font_msg_color_b;
      VAR_7[3] = 1.0f;

      VAR_8 = -2;
      VAR_9 = -2;
      VAR_13 = 0.3f;
      VAR_14 = 1.0f;
   }

   if (VAR_17->block)
      VAR_17->block->fullscreen = VAR_16;
   else
      FUNC_5(VAR_18, VAR_19, VAR_17, VAR_16);

   if (!FUNC_9(VAR_5) && VAR_17->gl
         && VAR_17->font_data && VAR_17->font_driver)
   {
      if (VAR_8 || VAR_9)
      {
         GLfloat VAR_20[4];

         VAR_20[0] = VAR_7[0] * VAR_13;
         VAR_20[1] = VAR_7[1] * VAR_13;
         VAR_20[2] = VAR_7[2] * VAR_13;
         VAR_20[3] = VAR_7[3] * VAR_14;

         if (VAR_17->gl)
            FUNC_4(VAR_17, VAR_5, VAR_12, VAR_20,
                  VAR_10 + VAR_12 * VAR_8 / VAR_17->gl->vp.width, VAR_11 +
                  VAR_12 * VAR_9 / VAR_17->gl->vp.height, VAR_15,
                  VAR_3);
      }

      if (VAR_17->gl)
         FUNC_4(VAR_17, VAR_5, VAR_12, VAR_7,
               VAR_10, VAR_11, VAR_15, VAR_3);
   }

   if (!VAR_17->block && VAR_17->gl)
   {

      FUNC_8(VAR_1);
      FUNC_6(VAR_1, VAR_17->gl->texture[VAR_17->gl->tex_index]);

      FUNC_7(VAR_0);
      FUNC_10(VAR_18, VAR_19, 0, 1);
   }
}
