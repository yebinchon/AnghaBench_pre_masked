
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {unsigned int width; unsigned int height; int x; int y; float minDepth; float maxDepth; } ;
struct TYPE_11__ {TYPE_7__ vp; scalar_t__ keep_aspect; } ;
typedef TYPE_3__ vita_video_t ;
struct video_viewport {int x; int y; unsigned int width; unsigned int height; } ;
struct video_ortho {int member_1; int member_2; int member_4; int member_5; int member_3; int member_0; } ;
struct TYPE_10__ {scalar_t__ video_aspect_ratio_idx; } ;
struct TYPE_9__ {scalar_t__ video_scale_integer; } ;
struct TYPE_12__ {TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_4__ settings_t ;
struct TYPE_13__ {float* aspect; unsigned int width; unsigned int height; } ;
typedef TYPE_5__ gfx_ctx_aspect_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 TYPE_4__* FUNC_1 () ;
 float FUNC_2 (float) ;
 scalar_t__ FUNC_3 (float) ;
 float FUNC_4 () ;
 struct video_viewport* FUNC_5 () ;
 int FUNC_6 (TYPE_7__*,unsigned int,unsigned int,float,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,struct video_ortho*,int) ;

__attribute__((used)) static void FUNC_8(void *VAR_1, unsigned VAR_2,
      unsigned VAR_3, bool VAR_4, bool VAR_5)
{
   gfx_ctx_aspect_t VAR_6;
   int VAR_7 = 0;
   int VAR_8 = 0;
   float VAR_9 = (float)VAR_2 / VAR_3;
   struct video_ortho VAR_10 = {0, 1, 1, 0, -1, 1};
   settings_t *VAR_11 = FUNC_1();
   vita_video_t *VAR_12 = (vita_video_t*)VAR_1;

   VAR_6.aspect = &VAR_9;
   VAR_6.width = VAR_2;
   VAR_6.height = VAR_3;

   if (VAR_11->bools.video_scale_integer && !VAR_4)
   {
      FUNC_6(&VAR_12->vp,
            VAR_2, VAR_3,
            FUNC_4(), VAR_12->keep_aspect);
      VAR_2 = VAR_12->vp.width;
      VAR_3 = VAR_12->vp.height;
   }
   else if (VAR_12->keep_aspect && !VAR_4)
   {
      float VAR_13 = FUNC_4();
      {
         float VAR_14;

         if (FUNC_2(VAR_9 - VAR_13) < 0.0001f)
         {




         }
         else if (VAR_9 > VAR_13)
         {
            VAR_14 = (VAR_13 / VAR_9 - 1.0f)
               / 2.0f + 0.5f;
            VAR_7 = (int)FUNC_3(VAR_2 * (0.5f - VAR_14));
            VAR_2 = (unsigned)FUNC_3(2.0f * VAR_2 * VAR_14);
         }
         else
         {
            VAR_14 = (VAR_9 / VAR_13 - 1.0f)
               / 2.0f + 0.5f;
            VAR_8 = (int)FUNC_3(VAR_3 * (0.5f - VAR_14));
            VAR_3 = (unsigned)FUNC_3(2.0f * VAR_3 * VAR_14);
         }
      }

      VAR_12->vp.x = VAR_7;
      VAR_12->vp.y = VAR_8;
      VAR_12->vp.width = VAR_2;
      VAR_12->vp.height = VAR_3;
   }
   else
   {
      VAR_12->vp.x = 0;
      VAR_12->vp.y = 0;
      VAR_12->vp.width = VAR_2;
      VAR_12->vp.height = VAR_3;
   }

   FUNC_7(VAR_12, &VAR_10, VAR_5);


   if (!VAR_4)
   {
      VAR_12->vp.width = VAR_2;
      VAR_12->vp.height = VAR_3;
   }
}
