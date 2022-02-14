
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct g2d_image {unsigned int width; unsigned int height; unsigned int stride; } ;
struct exynos_video {int font_color; int font; TYPE_5__* font_driver; struct exynos_data* data; } ;
struct exynos_data {float aspect; struct g2d_image** src; } ;
struct TYPE_10__ {int video_msg_color_r; int video_msg_color_g; int video_msg_color_b; int video_font_size; } ;
struct TYPE_9__ {scalar_t__* font_path; } ;
struct TYPE_8__ {int video_font_enable; } ;
struct TYPE_11__ {TYPE_3__ floats; TYPE_2__ video; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_13__ {unsigned int height; unsigned int bpp; int buf_type; } ;
struct TYPE_12__ {int (* free ) (int ) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned int const,unsigned int const) ;
 unsigned int FUNC_2 (float,int) ;
 TYPE_4__* FUNC_3 () ;
 TYPE_6__* VAR_1 ;
 scalar_t__ FUNC_4 (struct exynos_data*,int ,unsigned int const) ;
 scalar_t__ FUNC_5 (TYPE_5__**,int *,scalar_t__*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct exynos_video *VAR_2)
{
   struct exynos_data *VAR_3 = VAR_2->data;
   struct g2d_image *VAR_4 = VAR_3->src[VAR_0];
   const unsigned VAR_5 = VAR_1[VAR_0].height;
   const unsigned VAR_6 = FUNC_2(VAR_3->aspect * (float)VAR_5, 16);
   const unsigned VAR_7 = VAR_1[VAR_0].bpp;
   settings_t *VAR_8 = FUNC_3();

   if (!VAR_8->bools.video_font_enable)
      return 0;

   if (FUNC_5(&VAR_2->font_driver, &VAR_2->font,
            *VAR_8->video.font_path ? VAR_8->video.font_path : ((void*)0),
            VAR_8->floats.video_font_size))
   {
      const int VAR_9 = VAR_8->floats.video_msg_color_r * 15;
      const int VAR_10 = VAR_8->floats.video_msg_color_g * 15;
      const int VAR_11 = VAR_8->floats.video_msg_color_b * 15;

      VAR_2->font_color = ((VAR_11 < 0 ? 0 : (VAR_11 > 15 ? 15 : VAR_11)) << 0) |
         ((VAR_10 < 0 ? 0 : (VAR_10 > 15 ? 15 : VAR_10)) << 4) |
         ((VAR_9 < 0 ? 0 : (VAR_9 > 15 ? 15 : VAR_9)) << 8);
   }
   else
   {
      FUNC_0("[video_exynos]: creating font renderer failed\n");
      return -1;
   }


   if (FUNC_4(VAR_3, VAR_1[VAR_0].buf_type,
            VAR_6 * VAR_5 * VAR_7) != 0)
   {
      VAR_2->font_driver->free(VAR_2->font);
      return -1;
   }

   VAR_4->width = VAR_6;
   VAR_4->height = VAR_5;
   VAR_4->stride = VAR_6 * VAR_7;






   return 0;
}
