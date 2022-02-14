
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int width; int height; int buffer_output; int ready; } ;
typedef TYPE_1__ video4linux_t ;
typedef int (* retro_camera_frame_raw_framebuffer_t ) (int ,int,int ,int) ;
typedef int retro_camera_frame_opengl_texture_t ;


 scalar_t__ FUNC_0 (void*) ;

__attribute__((used)) static bool FUNC_1(void *VAR_0,
      retro_camera_frame_raw_framebuffer_t VAR_1,
      retro_camera_frame_opengl_texture_t VAR_2)
{
   video4linux_t *VAR_3 = (video4linux_t*)VAR_0;
   if (!VAR_3->ready)
      return 0;

   (void)VAR_2;

   if (FUNC_0(VAR_0))
   {
      if (VAR_1 != ((void*)0))
         VAR_1(VAR_3->buffer_output, VAR_3->width,
               VAR_3->height, VAR_3->width * 4);
      return 1;
   }

   return 0;
}
