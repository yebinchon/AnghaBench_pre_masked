
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int max_swapchain_images; } ;
typedef TYPE_1__ video_frame_info_t ;
typedef int uint64_t ;
struct dispmanx_video {unsigned int core_width; unsigned int core_height; float aspect_ratio; unsigned int core_pitch; int * main_surface; int * menu_surface; scalar_t__ menu_active; scalar_t__ rgb32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dispmanx_video*,int **) ;
 int FUNC_1 (struct dispmanx_video*,unsigned int,unsigned int,unsigned int,int,int ,int,float,int ,int ,int **) ;
 int FUNC_2 (struct dispmanx_video*,void const*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 float FUNC_4 () ;

__attribute__((used)) static bool FUNC_5(void *VAR_2, const void *VAR_3, unsigned VAR_4,
      unsigned VAR_5, uint64_t VAR_6, unsigned VAR_7, const char *VAR_8,
      video_frame_info_t *VAR_9)
{
   struct dispmanx_video *VAR_10 = VAR_2;
   float VAR_11 = FUNC_4();

   if (!VAR_3)
      return 1;

   if ( (VAR_4 != VAR_10->core_width) ||
         (VAR_5 != VAR_10->core_height) ||
         (VAR_10->aspect_ratio != VAR_11))
   {

      if (VAR_4 == 0 || VAR_5 == 0)
         return 1;

      VAR_10->core_width = VAR_4;
      VAR_10->core_height = VAR_5;
      VAR_10->core_pitch = VAR_7;
      VAR_10->aspect_ratio = VAR_11;

      if (VAR_10->main_surface != ((void*)0))
         FUNC_0(VAR_10, &VAR_10->main_surface);



      FUNC_1(VAR_10,
            VAR_4,
            VAR_5,
            VAR_7,
            VAR_10->rgb32 ? 32 : 16,
            VAR_10->rgb32 ? VAR_1 : VAR_0,
            255,
            VAR_10->aspect_ratio,
            VAR_9->max_swapchain_images,
            0,
            &VAR_10->main_surface);



      if (VAR_10->menu_active && VAR_10->menu_surface)
         FUNC_0(VAR_10, &VAR_10->menu_surface);
   }






   FUNC_2(VAR_10, VAR_3, VAR_10->main_surface);
   return 1;
}
