
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_17__ {unsigned int width; unsigned int height; int x; int y; } ;
struct TYPE_11__ {unsigned int width; unsigned int height; } ;
struct TYPE_12__ {TYPE_1__ surface; } ;
struct TYPE_15__ {TYPE_9__ vp; scalar_t__ keep_aspect; TYPE_2__ color_buffer; } ;
typedef TYPE_5__ wiiu_video_t ;
struct video_viewport {int x; int y; unsigned int width; unsigned int height; } ;
struct TYPE_14__ {scalar_t__ video_aspect_ratio_idx; } ;
struct TYPE_13__ {scalar_t__ video_scale_integer; } ;
struct TYPE_16__ {TYPE_4__ uints; TYPE_3__ bools; } ;
typedef TYPE_6__ settings_t ;


 scalar_t__ VAR_0 ;
 TYPE_6__* FUNC_0 () ;
 float FUNC_1 (float) ;
 scalar_t__ FUNC_2 (float) ;
 float FUNC_3 () ;
 struct video_viewport* FUNC_4 () ;
 int FUNC_5 (TYPE_9__*,unsigned int,unsigned int,float,scalar_t__) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_7(wiiu_video_t *VAR_1)
{
   int VAR_2 = 0;
   int VAR_3 = 0;
   unsigned VAR_4 = VAR_1->color_buffer.surface.width;
   unsigned VAR_5 = VAR_1->color_buffer.surface.height;
   float VAR_6 = (float)VAR_4 / VAR_5;
   settings_t *VAR_7 = FUNC_0();

   if (VAR_7->bools.video_scale_integer)
   {
      FUNC_5(&VAR_1->vp,
            VAR_4, VAR_5,
            FUNC_3(), VAR_1->keep_aspect);
      VAR_4 = VAR_1->vp.width;
      VAR_5 = VAR_1->vp.height;
   }
   else if (VAR_1->keep_aspect)
   {
      float VAR_8 = FUNC_3();
      {
         float VAR_9;

         if (FUNC_1(VAR_6 - VAR_8) < 0.0001f)
         {




         }
         else if (VAR_6 > VAR_8)
         {
            VAR_9 = (VAR_8 / VAR_6 - 1.0f)
                             / 2.0f + 0.5f;
            VAR_2 = (int)FUNC_2(VAR_4 * (0.5f - VAR_9));
            VAR_4 = (unsigned)FUNC_2(2.0f * VAR_4 * VAR_9);
         }
         else
         {
            VAR_9 = (VAR_6 / VAR_8 - 1.0f)
                              / 2.0f + 0.5f;
            VAR_3 = (int)FUNC_2(VAR_5 * (0.5f - VAR_9));
            VAR_5 = (unsigned)FUNC_2(2.0f * VAR_5 * VAR_9);
         }
      }

      VAR_1->vp.x = VAR_2;
      VAR_1->vp.y = VAR_3;
      VAR_1->vp.width = VAR_4;
      VAR_1->vp.height = VAR_5;
   }
   else
   {
      VAR_1->vp.x = 0;
      VAR_1->vp.y = 0;
      VAR_1->vp.width = VAR_4;
      VAR_1->vp.height = VAR_5;
   }

   FUNC_6(VAR_1);
}
