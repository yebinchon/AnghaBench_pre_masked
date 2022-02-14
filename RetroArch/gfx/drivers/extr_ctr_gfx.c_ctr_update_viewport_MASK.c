
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int custom_vp_x; int custom_vp_y; float custom_vp_width; float custom_vp_height; } ;
typedef TYPE_3__ video_frame_info_t ;
struct TYPE_12__ {scalar_t__ video_aspect_ratio_idx; } ;
struct TYPE_11__ {scalar_t__ video_scale_integer; } ;
struct TYPE_14__ {TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_16__ {float full_width; float full_height; int x; int y; float width; float height; } ;
struct TYPE_15__ {int rotation; int should_resize; TYPE_6__ vp; scalar_t__ keep_aspect; } ;
typedef TYPE_5__ ctr_video_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 float FUNC_1 (float) ;
 scalar_t__ FUNC_2 (float) ;
 float FUNC_3 () ;
 int FUNC_4 (TYPE_6__*,float,float,float,scalar_t__) ;

__attribute__((used)) static void FUNC_5(ctr_video_t* VAR_1, settings_t *VAR_2, video_frame_info_t *VAR_3)
{
   int VAR_4 = 0;
   int VAR_5 = 0;
   float VAR_6 = VAR_1->vp.full_width;
   float VAR_7 = VAR_1->vp.full_height;
   float VAR_8 = FUNC_3();

   if(VAR_1->rotation & 0x1)
      VAR_8 = 1.0 / VAR_8;

   if (VAR_2->bools.video_scale_integer)
   {
      FUNC_4(&VAR_1->vp, VAR_1->vp.full_width,
            VAR_1->vp.full_height, VAR_8, VAR_1->keep_aspect);
   }
   else if (VAR_1->keep_aspect)
   {
      {
         float VAR_9;
         float VAR_10 = ((float)VAR_1->vp.full_width) / VAR_1->vp.full_height;

         if (FUNC_1(VAR_10 - VAR_8) < 0.0001f)
         {




         }
         else if (VAR_10 > VAR_8)
         {
            VAR_9 = (VAR_8 / VAR_10 - 1.0f)
               / 2.0f + 0.5f;
            VAR_4 = (int)FUNC_2(VAR_6 * (0.5f - VAR_9));
            VAR_6 = (unsigned)FUNC_2(2.0f * VAR_6 * VAR_9);
         }
         else
         {
            VAR_9 = (VAR_10 / VAR_8 - 1.0f)
               / 2.0f + 0.5f;
            VAR_5 = (int)FUNC_2(VAR_7 * (0.5f - VAR_9));
            VAR_7 = (unsigned)FUNC_2(2.0f * VAR_7 * VAR_9);
         }
      }

      VAR_1->vp.x = VAR_4;
      VAR_1->vp.y = VAR_5;
      VAR_1->vp.width = VAR_6;
      VAR_1->vp.height = VAR_7;
   }
   else
   {
      VAR_1->vp.x = VAR_1->vp.y = 0;
      VAR_1->vp.width = VAR_6;
      VAR_1->vp.height = VAR_7;
   }

   FUNC_0(VAR_1);

   VAR_1->should_resize = 0;

}
