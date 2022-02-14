
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct video_fbo_rect {unsigned int img_width; unsigned int max_img_width; unsigned int img_height; unsigned int max_img_height; } ;
struct gfx_fbo_scale {int type_x; unsigned int scale_x; unsigned int abs_x; int type_y; unsigned int scale_y; unsigned int abs_y; } ;
struct TYPE_5__ {unsigned int tex_w; unsigned int tex_h; int rotation; struct video_fbo_rect* fbo_rect; } ;
typedef TYPE_1__ gl_t ;
struct TYPE_6__ {struct gfx_fbo_scale* fbo_scale; scalar_t__ fbo_pass; } ;
typedef TYPE_2__ gl2_renderchain_data_t ;
typedef void* GLint ;


 int VAR_0 ;



 int FUNC_0 (char*,void*,void*) ;
 int FUNC_1 (int ,void**) ;

__attribute__((used)) static void FUNC_2(
      gl_t *VAR_1,
      gl2_renderchain_data_t *VAR_2,
      unsigned VAR_3, unsigned VAR_4,
      unsigned VAR_5, unsigned VAR_6)
{
   unsigned VAR_7;
   bool VAR_8 = 0;
   GLint VAR_9 = 0;
   unsigned VAR_10 = VAR_3;
   unsigned VAR_11 = VAR_4;
   unsigned VAR_12 = VAR_1->tex_w;
   unsigned VAR_13 = VAR_1->tex_h;

   FUNC_1(VAR_0, &VAR_9);


   for (VAR_7 = 0; VAR_7 < (unsigned)VAR_2->fbo_pass; VAR_7++)
   {
      struct video_fbo_rect *VAR_14 = &VAR_1->fbo_rect[VAR_7];
      struct gfx_fbo_scale *VAR_15 = &VAR_2->fbo_scale[VAR_7];

      switch (VAR_15->type_x)
      {
         case 129:
            VAR_14->img_width = VAR_15->scale_x * VAR_10;
            VAR_14->max_img_width = VAR_12 * VAR_15->scale_x;
            break;

         case 130:
            VAR_14->img_width = VAR_14->max_img_width =
               VAR_15->abs_x;
            break;

         case 128:
            if (VAR_1->rotation % 180 == 90)
            {
               VAR_14->img_width = VAR_14->max_img_width =
               VAR_15->scale_x * VAR_6;
            } else {
               VAR_14->img_width = VAR_14->max_img_width =
               VAR_15->scale_x * VAR_5;
            }
            break;
      }

      switch (VAR_15->type_y)
      {
         case 129:
            VAR_14->img_height = VAR_11 * VAR_15->scale_y;
            VAR_14->max_img_height = VAR_13 * VAR_15->scale_y;
            break;

         case 130:
            VAR_14->img_height = VAR_15->abs_y;
            VAR_14->max_img_height = VAR_15->abs_y;
            break;

         case 128:
            if (VAR_1->rotation % 180 == 90)
            {
               VAR_14->img_height = VAR_14->max_img_height =
               VAR_15->scale_y * VAR_5;
            } else {
            VAR_14->img_height = VAR_14->max_img_height =
               VAR_15->scale_y * VAR_6;
            }
            break;
      }

      if (VAR_14->img_width > (unsigned)VAR_9)
      {
         VAR_8 = 1;
         VAR_14->img_width = VAR_9;
      }

      if (VAR_14->img_height > (unsigned)VAR_9)
      {
         VAR_8 = 1;
         VAR_14->img_height = VAR_9;
      }

      if (VAR_14->max_img_width > (unsigned)VAR_9)
      {
         VAR_8 = 1;
         VAR_14->max_img_width = VAR_9;
      }

      if (VAR_14->max_img_height > (unsigned)VAR_9)
      {
         VAR_8 = 1;
         VAR_14->max_img_height = VAR_9;
      }

      if (VAR_8)
         FUNC_0("FBO textures exceeded maximum size of GPU (%dx%d). Resizing to fit.\n", VAR_9, VAR_9);

      VAR_10 = VAR_14->img_width;
      VAR_11 = VAR_14->img_height;
      VAR_12 = VAR_14->max_img_width;
      VAR_13 = VAR_14->max_img_height;
   }
}
