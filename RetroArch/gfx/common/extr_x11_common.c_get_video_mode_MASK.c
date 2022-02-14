
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ refresh_rate; scalar_t__ black_frame_insertion; } ;
typedef TYPE_1__ video_frame_info_t ;
struct TYPE_9__ {unsigned int hdisplay; unsigned int vdisplay; float dotclock; float htotal; float vtotal; } ;
typedef TYPE_2__ XF86VidModeModeInfo ;
typedef int Display ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int*,TYPE_2__***) ;
 int FUNC_2 (TYPE_2__**) ;
 float FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(video_frame_info_t *VAR_0,
      Display *VAR_1, unsigned VAR_2, unsigned VAR_3,
      XF86VidModeModeInfo *VAR_4, XF86VidModeModeInfo *VAR_5)
{
   int VAR_6, VAR_7 = 0;
   bool VAR_8 = 0;
   float VAR_9 = 0.0f;
   float VAR_10 = 0.0f;
   XF86VidModeModeInfo **VAR_11 = ((void*)0);

   FUNC_1(VAR_1, FUNC_0(VAR_1), &VAR_7, &VAR_11);

   if (!VAR_7)
   {
      FUNC_2(VAR_11);
      return 0;
   }

   *VAR_5 = *VAR_11[0];



   VAR_9 = VAR_0->black_frame_insertion ? 0.5f : 1.0f;

   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   {
      float VAR_12, VAR_13;
      const XF86VidModeModeInfo *VAR_14 = VAR_11[VAR_6];

      if (!VAR_14)
         continue;

      if (VAR_14->hdisplay != VAR_2)
         continue;
      if (VAR_14->vdisplay != VAR_3)
         continue;

      VAR_12 = VAR_9 * VAR_14->dotclock * 1000.0f / (VAR_14->htotal * VAR_14->vtotal);
      VAR_13 = FUNC_3(VAR_12 - VAR_0->refresh_rate);

      if (!VAR_8 || VAR_13 < VAR_10)
      {
         *VAR_4 = *VAR_14;
         VAR_10 = VAR_13;
      }
      VAR_8 = 1;
   }

   FUNC_2(VAR_11);
   return VAR_8;
}
