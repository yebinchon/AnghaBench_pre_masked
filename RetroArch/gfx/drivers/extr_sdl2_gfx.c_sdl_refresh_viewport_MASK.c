
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct video_viewport {int x; int y; int width; int height; } ;
struct TYPE_11__ {scalar_t__ video_aspect_ratio_idx; } ;
struct TYPE_10__ {scalar_t__ video_scale_integer; } ;
struct TYPE_13__ {TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_15__ {int x; int y; int width; int height; int full_width; int full_height; } ;
struct TYPE_12__ {scalar_t__ force_aspect; } ;
struct TYPE_14__ {int should_resize; TYPE_6__ vp; TYPE_3__ video; int window; } ;
typedef TYPE_5__ sdl2_video_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int*,int*) ;
 TYPE_4__* FUNC_1 () ;
 float FUNC_2 (float) ;
 scalar_t__ FUNC_3 (float) ;
 int FUNC_4 (TYPE_5__*) ;
 float FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (TYPE_6__*,int,int,float,scalar_t__) ;

__attribute__((used)) static void FUNC_8(sdl2_video_t *VAR_1)
{
   int VAR_2, VAR_3;
   settings_t *VAR_4 = FUNC_1();

   FUNC_0(VAR_1->window, &VAR_2, &VAR_3);

   VAR_1->vp.x = 0;
   VAR_1->vp.y = 0;
   VAR_1->vp.width = VAR_2;
   VAR_1->vp.height = VAR_3;
   VAR_1->vp.full_width = VAR_2;
   VAR_1->vp.full_height = VAR_3;

   if (VAR_4->bools.video_scale_integer)
      FUNC_7(&VAR_1->vp,
            VAR_2, VAR_3, FUNC_5(),
            VAR_1->video.force_aspect);
   else if (VAR_4->uints.video_aspect_ratio_idx == VAR_0)
   {
      const struct video_viewport *VAR_5 =
         (const struct video_viewport*)FUNC_6();

      VAR_1->vp.x = VAR_5->x;
      VAR_1->vp.y = VAR_5->y;
      VAR_1->vp.width = VAR_5->width;
      VAR_1->vp.height = VAR_5->height;
   }
   else if (VAR_1->video.force_aspect)
   {
      float VAR_6;
      float VAR_7 = (float)VAR_2 / VAR_3;
      float VAR_8 = FUNC_5();

      if (FUNC_2(VAR_7 - VAR_8) < 0.0001f)
      {



      }
      else if (VAR_7 > VAR_8)
      {
         VAR_6 = (VAR_8 / VAR_7 - 1.0f) / 2.0f + 0.5f;
         VAR_1->vp.x = (int)FUNC_3(VAR_2 * (0.5f - VAR_6));
         VAR_1->vp.width = (unsigned)FUNC_3(2.0f * VAR_2 * VAR_6);
      }
      else
      {
         VAR_6 = (VAR_7 / VAR_8 - 1.0f) / 2.0f + 0.5f;
         VAR_1->vp.y = (int)FUNC_3(VAR_3 * (0.5f - VAR_6));
         VAR_1->vp.height = (unsigned)FUNC_3(2.0f * VAR_3 * VAR_6);
      }
   }

   VAR_1->should_resize = 0;

   FUNC_4(VAR_1);
}
