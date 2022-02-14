
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int context_data; int (* cb_update_window_title ) (int ,TYPE_1__*) ;} ;
typedef TYPE_1__ video_frame_info_t ;
typedef int uint64_t ;
struct drm_video {unsigned int core_width; unsigned int core_height; unsigned int core_pitch; int * main_surface; int current_aspect; scalar_t__ rgb32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_video*,int **) ;
 int FUNC_2 (struct drm_video*,unsigned int,unsigned int,unsigned int,int,int ,int,int ,int,int ,int **) ;
 int FUNC_3 (struct drm_video*,void const*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,TYPE_1__*) ;

__attribute__((used)) static bool FUNC_6(void *VAR_2, const void *VAR_3, unsigned VAR_4,
      unsigned VAR_5, uint64_t VAR_6, unsigned VAR_7, const char *VAR_8,
      video_frame_info_t *VAR_9)
{
   struct drm_video *VAR_10 = VAR_2;

   if ( ( VAR_4 != VAR_10->core_width) ||
         (VAR_5 != VAR_10->core_height))
   {

      if (VAR_4 == 0 || VAR_5 == 0)
         return 1;

      VAR_10->core_width = VAR_4;
      VAR_10->core_height = VAR_5;
      VAR_10->core_pitch = VAR_7;

      if (VAR_10->main_surface != ((void*)0))
         FUNC_1(VAR_10, &VAR_10->main_surface);


      FUNC_2(VAR_10,
            VAR_4,
            VAR_5,
            VAR_7,
            VAR_10->rgb32 ? 4 : 2,
            VAR_10->rgb32 ? VAR_1 : VAR_0,
     255,
            VAR_10->current_aspect,
            3,
            0,
            &VAR_10->main_surface);


      FUNC_0(VAR_10->main_surface);
   }





   VAR_9->cb_update_window_title(
         VAR_9->context_data, VAR_9);


   FUNC_3(VAR_10, VAR_3, VAR_10->main_surface);
   return 1;
}
