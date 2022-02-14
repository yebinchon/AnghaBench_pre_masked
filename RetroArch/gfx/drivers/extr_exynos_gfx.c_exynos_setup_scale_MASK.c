
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g2d_image {unsigned int width; unsigned int height; int color_mode; } ;
struct exynos_data {float const aspect; unsigned int width; unsigned int height; unsigned int* blit_params; unsigned int num_pages; TYPE_1__* pages; struct g2d_image** src; } ;
struct TYPE_2__ {int clear; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float FUNC_0 (float const) ;

__attribute__((used)) static void FUNC_1(struct exynos_data *VAR_4,
      unsigned VAR_5, unsigned VAR_6, unsigned VAR_7)
{
   unsigned VAR_8;
   unsigned VAR_9, VAR_10;
   struct g2d_image *VAR_11 = VAR_4->src[VAR_0];
   const float VAR_12 = (float)VAR_5 / (float)VAR_6;

   VAR_11->width = VAR_5;
   VAR_11->height = VAR_6;
   VAR_11->color_mode = (VAR_7 == 2) ?
      VAR_1 | VAR_3:
      VAR_2 | VAR_3;

   if (FUNC_0(VAR_4->aspect - VAR_12) < 0.0001f)
   {
      VAR_9 = VAR_4->width;
      VAR_10 = VAR_4->height;
   }
   else
   {
      if (VAR_4->aspect > VAR_12)
      {
         VAR_9 = (float)VAR_4->width * VAR_12 / VAR_4->aspect;
         VAR_10 = VAR_4->height;
      }
      else
      {
         VAR_9 = VAR_4->width;
         VAR_10 = (float)VAR_4->height * VAR_4->aspect / VAR_12;
      }
   }

   VAR_4->blit_params[0] = (VAR_4->width - VAR_9) / 2;
   VAR_4->blit_params[1] = (VAR_4->height - VAR_10) / 2;
   VAR_4->blit_params[2] = VAR_9;
   VAR_4->blit_params[3] = VAR_10;
   VAR_4->blit_params[4] = VAR_5;
   VAR_4->blit_params[5] = VAR_6;

   for (VAR_8 = 0; VAR_8 < VAR_4->num_pages; ++VAR_8)
      VAR_4->pages[VAR_8].clear = 1;
}
