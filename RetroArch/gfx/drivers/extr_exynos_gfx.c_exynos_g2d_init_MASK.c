
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct g2d_image {int color_mode; unsigned int width; unsigned int height; int stride; int color; int repeat_mode; int * bo; void* buf_type; } ;
struct g2d_context {int dummy; } ;
struct exynos_data {int bpp; unsigned int width; unsigned int height; int pitch; struct g2d_context* g2d; struct g2d_image* dst; struct g2d_image** src; TYPE_1__** buf; } ;
typedef enum exynos_buffer_type { ____Placeholder_exynos_buffer_type } exynos_buffer_type ;
struct TYPE_4__ {int buf_type; unsigned int width; unsigned int height; unsigned int bpp; int g2d_color_mode; } ;
struct TYPE_3__ {int handle; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct g2d_image* FUNC_0 (int,int) ;
 TYPE_2__* VAR_6 ;
 int FUNC_1 (struct exynos_data*,int const,unsigned int const) ;
 int FUNC_2 (struct g2d_image*) ;
 int FUNC_3 (struct g2d_context*) ;
 struct g2d_context* FUNC_4 (int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct exynos_data *VAR_8)
{
   unsigned VAR_9;
   struct g2d_image *VAR_10 = ((void*)0);
   struct g2d_context *VAR_11 = FUNC_4(VAR_7);
   if (!VAR_11)
      return -1;

   VAR_10 = FUNC_0(1, sizeof(struct g2d_image));
   if (!VAR_10)
      goto fail;

   VAR_10->buf_type = VAR_3;
   VAR_10->color_mode = (VAR_8->bpp == 2) ? VAR_2 | VAR_4 :
      VAR_1 | VAR_4;
   VAR_10->width = VAR_8->width;
   VAR_10->height = VAR_8->height;
   VAR_10->stride = VAR_8->pitch;
   VAR_10->color = 0xff000000;

   for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9)
   {
      const enum exynos_buffer_type VAR_12 = VAR_6[VAR_9].buf_type;
      const unsigned VAR_13 = VAR_6[VAR_9].width * VAR_6[VAR_9].height * VAR_6[VAR_9].bpp;
      struct g2d_image *VAR_14 = (struct g2d_image*)FUNC_0(1, sizeof(struct g2d_image));
      if (!VAR_14)
         break;

      VAR_14->width = VAR_6[VAR_9].width;
      VAR_14->height = VAR_6[VAR_9].height;
      VAR_14->stride = VAR_6[VAR_9].width * VAR_6[VAR_9].bpp;

      VAR_14->color_mode = VAR_6[VAR_9].g2d_color_mode;


      VAR_14->buf_type = VAR_3;
      VAR_14->bo[0] = VAR_8->buf[VAR_12]->handle;

      VAR_14->repeat_mode = VAR_5;



      FUNC_1(VAR_8, VAR_12, VAR_13);

      VAR_8->src[VAR_9] = VAR_14;
   }

   if (VAR_9 != VAR_0)
   {
      while (VAR_9-- > 0)
      {
         FUNC_2(VAR_8->src[VAR_9]);
         VAR_8->src[VAR_9] = ((void*)0);
      }
      goto fail_src;
   }

   VAR_8->dst = VAR_10;
   VAR_8->g2d = VAR_11;

   return 0;

fail_src:
   FUNC_2(VAR_10);

fail:
   FUNC_3(VAR_11);

   return -1;
}
