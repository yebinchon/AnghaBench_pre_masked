
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ refresh_rate; scalar_t__ black_frame_insertion; } ;
typedef TYPE_1__ video_frame_info_t ;
struct drm_fb {int fb_id; } ;
struct TYPE_11__ {unsigned int fb_width; unsigned int fb_height; } ;
typedef TYPE_2__ gfx_ctx_drm_data_t ;
struct TYPE_13__ {int count_modes; TYPE_6__* modes; } ;
struct TYPE_12__ {unsigned int hdisplay; unsigned int vdisplay; float vrefresh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int,TYPE_6__*) ;
 int VAR_3 ;
 struct drm_fb* FUNC_2 (int ) ;
 float FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_7__* VAR_7 ;
 int VAR_8 ;
 TYPE_6__* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int,unsigned int,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_11(void *VAR_12,
      video_frame_info_t *VAR_13,
      unsigned VAR_14, unsigned VAR_15,
      bool VAR_16)
{
   float VAR_17;
   int VAR_18, VAR_19 = 0;
   struct drm_fb *VAR_20 = ((void*)0);
   gfx_ctx_drm_data_t *VAR_21 = (gfx_ctx_drm_data_t*)VAR_12;

   if (!VAR_21)
      return 0;

   FUNC_5();




   VAR_17 = VAR_13->black_frame_insertion
      ? 0.5f : 1.0f;




   if ((VAR_14 == 0 && VAR_15 == 0) || !VAR_16)
      VAR_9 = &VAR_7->modes[0];
   else
   {





      float VAR_22 = 0.0f;


      for (VAR_18 = 0; VAR_18 < VAR_7->count_modes; VAR_18++)
      {
         float VAR_23;
         if (VAR_14 != VAR_7->modes[VAR_18].hdisplay ||
               VAR_15 != VAR_7->modes[VAR_18].vdisplay)
            continue;

         VAR_23 = FUNC_3(VAR_17 * VAR_7->modes[VAR_18].vrefresh
               - VAR_13->refresh_rate);

         if (!VAR_9 || VAR_23 < VAR_22)
         {
            VAR_9 = &VAR_7->modes[VAR_18];
            VAR_22 = VAR_23;
         }
      }
   }

   if (!VAR_9)
   {
      FUNC_0("[KMS/EGL]: Did not find suitable video mode for %u x %u.\n",
            VAR_14, VAR_15);
      goto error;
   }

   VAR_21->fb_width = VAR_9->hdisplay;
   VAR_21->fb_height = VAR_9->vdisplay;


   VAR_11 = FUNC_7(
         VAR_10,
         VAR_21->fb_width,
         VAR_21->fb_height,
         VAR_2,
         VAR_1 | VAR_0);

   if (!VAR_11)
   {
      FUNC_0("[KMS/EGL]: Couldn't create GBM surface.\n");
      goto error;
   }

   switch (VAR_3)
   {
      case 130:
      case 129:
      case 128:




         break;
      case 131:
      default:
         break;
   }

   VAR_4 = FUNC_8(VAR_11);

   VAR_20 = (struct drm_fb*)FUNC_6(VAR_4);

   if (!VAR_20)
      VAR_20 = FUNC_2(VAR_4);

   VAR_19 = FUNC_1(VAR_8,
         VAR_6, VAR_20->fb_id, 0, 0, &VAR_5, 1, VAR_9);
   if (VAR_19 < 0)
      goto error;

   return 1;

error:
   FUNC_9(VAR_21);

   if (VAR_21)
      FUNC_4(VAR_21);

   return 0;
}
