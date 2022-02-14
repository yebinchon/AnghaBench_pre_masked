
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned int height; scalar_t__ aspect_ratio_idx; int custom_vp_x; unsigned int custom_vp_y; unsigned int custom_vp_height; unsigned int custom_vp_width; scalar_t__ scale_integer; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_12__ {unsigned int width; unsigned int height; int x; int y; } ;
struct TYPE_10__ {unsigned int vp_out_width; unsigned int vp_out_height; TYPE_4__ vp; scalar_t__ keep_aspect; } ;
typedef TYPE_2__ gl_t ;
struct TYPE_11__ {float* aspect; unsigned int width; unsigned int height; } ;
typedef TYPE_3__ gfx_ctx_aspect_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,unsigned int,unsigned int) ;
 int VAR_1 ;
 float FUNC_1 (float) ;
 int FUNC_2 (TYPE_2__*,int *,int) ;
 int FUNC_3 (int,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_4 (float) ;
 int FUNC_5 (TYPE_3__*) ;
 float FUNC_6 () ;
 int FUNC_7 (TYPE_4__*,unsigned int,unsigned int,float,scalar_t__) ;

__attribute__((used)) static void FUNC_8(gl_t *VAR_2,
      video_frame_info_t *VAR_3,
      unsigned VAR_4,
      unsigned VAR_5,
      bool VAR_6, bool VAR_7)
{
   gfx_ctx_aspect_t VAR_8;
   int VAR_9 = 0;
   int VAR_10 = 0;
   float VAR_11 = (float)VAR_4 / VAR_5;
   unsigned VAR_12 = VAR_3->height;

   VAR_8.aspect = &VAR_11;
   VAR_8.width = VAR_4;
   VAR_8.height = VAR_5;

   FUNC_5(&VAR_8);

   if (VAR_3->scale_integer && !VAR_6)
   {
      FUNC_7(&VAR_2->vp,
            VAR_4, VAR_5,
            FUNC_6(), VAR_2->keep_aspect);
      VAR_4 = VAR_2->vp.width;
      VAR_5 = VAR_2->vp.height;
   }
   else if (VAR_2->keep_aspect && !VAR_6)
   {
      float VAR_13 = FUNC_6();
      {
         float VAR_14;

         if (FUNC_1(VAR_11 - VAR_13) < 0.0001f)
         {




         }
         else if (VAR_11 > VAR_13)
         {
            VAR_14 = (VAR_13 / VAR_11 - 1.0f) / 2.0f + 0.5f;
            VAR_9 = (int)FUNC_4(VAR_4 * (0.5f - VAR_14));
            VAR_4 = (unsigned)FUNC_4(2.0f * VAR_4 * VAR_14);
         }
         else
         {
            VAR_14 = (VAR_11 / VAR_13 - 1.0f) / 2.0f + 0.5f;
            VAR_10 = (int)FUNC_4(VAR_5 * (0.5f - VAR_14));
            VAR_5 = (unsigned)FUNC_4(2.0f * VAR_5 * VAR_14);
         }
      }

      VAR_2->vp.x = VAR_9;
      VAR_2->vp.y = VAR_10;
      VAR_2->vp.width = VAR_4;
      VAR_2->vp.height = VAR_5;
   }
   else
   {
      VAR_2->vp.x = VAR_2->vp.y = 0;
      VAR_2->vp.width = VAR_4;
      VAR_2->vp.height = VAR_5;
   }







   FUNC_3(VAR_2->vp.x, VAR_2->vp.y, VAR_2->vp.width, VAR_2->vp.height);
   FUNC_2(VAR_2, &VAR_1, VAR_7);


   if (!VAR_6)
   {
      VAR_2->vp_out_width = VAR_4;
      VAR_2->vp_out_height = VAR_5;
   }




}
