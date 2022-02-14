
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_15__ {int dirty; } ;
struct TYPE_14__ {float x; float y; float width; float height; float minDepth; float maxDepth; } ;
struct TYPE_19__ {unsigned int width; unsigned int height; int x; int y; } ;
struct TYPE_16__ {unsigned int video_width; unsigned int video_height; unsigned int vp_out_width; unsigned int vp_out_height; TYPE_4__ tracker; TYPE_3__ vk_vp; TYPE_9__ vp; scalar_t__ keep_aspect; } ;
typedef TYPE_5__ vk_t ;
struct video_viewport {int x; int y; unsigned int width; unsigned int height; } ;
struct video_ortho {int member_1; int member_3; int member_4; int member_5; int member_2; int member_0; } ;
struct TYPE_13__ {scalar_t__ video_aspect_ratio_idx; } ;
struct TYPE_12__ {scalar_t__ video_scale_integer; } ;
struct TYPE_17__ {TYPE_2__ uints; TYPE_1__ bools; } ;
typedef TYPE_6__ settings_t ;
struct TYPE_18__ {float* aspect; unsigned int width; unsigned int height; } ;
typedef TYPE_7__ gfx_ctx_aspect_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_1 ;
 TYPE_6__* FUNC_1 () ;
 float FUNC_2 (float) ;
 scalar_t__ FUNC_3 (float) ;
 int FUNC_4 (TYPE_7__*) ;
 float FUNC_5 () ;
 struct video_viewport* FUNC_6 () ;
 int FUNC_7 (TYPE_9__*,unsigned int,unsigned int,float,scalar_t__) ;
 int FUNC_8 (TYPE_5__*,struct video_ortho*,int) ;

__attribute__((used)) static void FUNC_9(void *VAR_2, unsigned VAR_3,
      unsigned VAR_4, bool VAR_5, bool VAR_6)
{
   gfx_ctx_aspect_t VAR_7;
   int VAR_8 = 0;
   int VAR_9 = 0;
   float VAR_10 = (float)VAR_3 / VAR_4;
   struct video_ortho VAR_11 = {0, 1, 0, 1, -1, 1};
   settings_t *VAR_12 = FUNC_1();
   vk_t *VAR_13 = (vk_t*)VAR_2;
   unsigned VAR_14 = VAR_13->video_width;
   unsigned VAR_15 = VAR_13->video_height;

   VAR_7.aspect = &VAR_10;
   VAR_7.width = VAR_3;
   VAR_7.height = VAR_4;

   FUNC_4(&VAR_7);

   if (VAR_12->bools.video_scale_integer && !VAR_5)
   {
      FUNC_7(&VAR_13->vp,
            VAR_3, VAR_4,
            FUNC_5(), VAR_13->keep_aspect);
      VAR_3 = VAR_13->vp.width;
      VAR_4 = VAR_13->vp.height;
   }
   else if (VAR_13->keep_aspect && !VAR_5)
   {
      float VAR_16 = FUNC_5();
      {
         float VAR_17;

         if (FUNC_2(VAR_10 - VAR_16) < 0.0001f)
         {




         }
         else if (VAR_10 > VAR_16)
         {
            VAR_17 = (VAR_16 / VAR_10 - 1.0f)
               / 2.0f + 0.5f;
            VAR_8 = (int)FUNC_3(VAR_3 * (0.5f - VAR_17));
            VAR_3 = (unsigned)FUNC_3(2.0f * VAR_3 * VAR_17);
         }
         else
         {
            VAR_17 = (VAR_10 / VAR_16 - 1.0f)
               / 2.0f + 0.5f;
            VAR_9 = (int)FUNC_3(VAR_4 * (0.5f - VAR_17));
            VAR_4 = (unsigned)FUNC_3(2.0f * VAR_4 * VAR_17);
         }
      }

      VAR_13->vp.x = VAR_8;
      VAR_13->vp.y = VAR_9;
      VAR_13->vp.width = VAR_3;
      VAR_13->vp.height = VAR_4;
   }
   else
   {
      VAR_13->vp.x = 0;
      VAR_13->vp.y = 0;
      VAR_13->vp.width = VAR_3;
      VAR_13->vp.height = VAR_4;
   }







   FUNC_8(VAR_13, &VAR_11, VAR_6);


   if (!VAR_5)
   {
      VAR_13->vp_out_width = VAR_3;
      VAR_13->vp_out_height = VAR_4;
   }

   VAR_13->vk_vp.x = (float)VAR_13->vp.x;
   VAR_13->vk_vp.y = (float)VAR_13->vp.y;
   VAR_13->vk_vp.width = (float)VAR_13->vp.width;
   VAR_13->vk_vp.height = (float)VAR_13->vp.height;
   VAR_13->vk_vp.minDepth = 0.0f;
   VAR_13->vk_vp.maxDepth = 1.0f;

   VAR_13->tracker.dirty |= VAR_1;




}
