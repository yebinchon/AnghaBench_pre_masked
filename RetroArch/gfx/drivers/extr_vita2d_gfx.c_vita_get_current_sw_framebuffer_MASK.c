
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ width; scalar_t__ height; scalar_t__ rgb32; int * texture; int tex_filter; int format; } ;
typedef TYPE_1__ vita_video_t ;
struct retro_framebuffer {scalar_t__ width; scalar_t__ height; scalar_t__ memory_flags; int format; int pitch; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(void *VAR_2,
      struct retro_framebuffer *VAR_3)
{
   vita_video_t *VAR_4 = (vita_video_t*)VAR_2;

   if (!VAR_4->texture || VAR_4->width != VAR_3->width ||
         VAR_4->height != VAR_3->height)
   {
      if(VAR_4->texture)
      {
         FUNC_5();
         FUNC_1(VAR_4->texture);
         VAR_4->texture = ((void*)0);
      }

      VAR_4->width = VAR_3->width;
      VAR_4->height = VAR_3->height;
      VAR_4->texture = FUNC_0(
            VAR_4->width, VAR_4->height, VAR_4->format);
      FUNC_4(VAR_4->texture,
            VAR_4->tex_filter,VAR_4->tex_filter);
   }

   VAR_3->data = FUNC_2(VAR_4->texture);
   VAR_3->pitch = FUNC_3(VAR_4->texture);
   VAR_3->format = VAR_4->rgb32
      ? VAR_1 : VAR_0;
   VAR_3->memory_flags = 0;

   return 1;
}
