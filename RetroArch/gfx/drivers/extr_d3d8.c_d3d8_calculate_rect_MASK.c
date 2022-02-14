
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int x; int y; unsigned int width; unsigned int height; } ;
typedef TYPE_3__ video_viewport_t ;
struct video_viewport {int x; int y; unsigned int width; unsigned int height; scalar_t__ full_height; scalar_t__ full_width; } ;
struct TYPE_9__ {scalar_t__ video_aspect_ratio_idx; } ;
struct TYPE_8__ {scalar_t__ video_scale_integer; } ;
struct TYPE_11__ {TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_12__ {scalar_t__ keep_aspect; } ;
typedef TYPE_5__ d3d8_video_t ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 () ;
 float FUNC_1 (float) ;
 scalar_t__ FUNC_2 (float) ;
 float FUNC_3 () ;
 int FUNC_4 (unsigned int*,unsigned int*) ;
 TYPE_3__* FUNC_5 () ;
 int FUNC_6 (struct video_viewport*,unsigned int,unsigned int,float,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void *VAR_1,
      unsigned *VAR_2, unsigned *VAR_3,
      int *VAR_4, int *VAR_5,
      bool VAR_6,
      bool VAR_7)
{
   float VAR_8 = (float)*VAR_2 / *VAR_3;
   d3d8_video_t *VAR_9 = (d3d8_video_t*)VAR_1;
   settings_t *VAR_10 = FUNC_0();

   FUNC_4(VAR_2, VAR_3);

   *VAR_4 = 0;
   *VAR_5 = 0;

   if (VAR_10->bools.video_scale_integer && !VAR_6)
   {
      struct video_viewport VAR_11;

      VAR_11.x = 0;
      VAR_11.y = 0;
      VAR_11.width = 0;
      VAR_11.height = 0;
      VAR_11.full_width = 0;
      VAR_11.full_height = 0;

      FUNC_6(&VAR_11,
            *VAR_2,
            *VAR_3,
            FUNC_3(),
            VAR_9->keep_aspect);

      *VAR_4 = VAR_11.x;
      *VAR_5 = VAR_11.y;
      *VAR_2 = VAR_11.width;
      *VAR_3 = VAR_11.height;
   }
   else if (VAR_9->keep_aspect && !VAR_6)
   {
      float VAR_12 = FUNC_3();
      {
         float VAR_13;

         if (FUNC_1(VAR_8 - VAR_12) < 0.0001f)
         {




         }
         else if (VAR_8 > VAR_12)
         {
            VAR_13 = (VAR_12 / VAR_8 - 1.0f) / 2.0f + 0.5f;
            *VAR_4 = (int)(FUNC_2(*VAR_2 * (0.5f - VAR_13)));
            *VAR_2 = (unsigned)(FUNC_2(2.0f * (*VAR_2) * VAR_13));
         }
         else
         {
            VAR_13 = (VAR_8 / VAR_12 - 1.0f) / 2.0f + 0.5f;
            *VAR_5 = (int)(FUNC_2(*VAR_3 * (0.5f - VAR_13)));
            *VAR_3 = (unsigned)(FUNC_2(2.0f * (*VAR_3) * VAR_13));
         }
      }
   }
}
