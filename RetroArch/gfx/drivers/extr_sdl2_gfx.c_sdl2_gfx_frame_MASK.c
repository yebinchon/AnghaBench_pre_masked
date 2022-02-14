
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ libretro_running; } ;
typedef TYPE_4__ video_frame_info_t ;
typedef int uint64_t ;
typedef int title ;
struct TYPE_13__ {int tex; scalar_t__ active; } ;
struct TYPE_12__ {int tex; } ;
struct TYPE_11__ {int rgb32; } ;
struct TYPE_15__ {int renderer; TYPE_3__ menu; int rotation; TYPE_2__ frame; TYPE_1__ video; scalar_t__ should_resize; } ;
typedef TYPE_5__ sdl2_video_t ;
typedef int SDL_Window ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,int *,int *,int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int ,int *,void const*,unsigned int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_5__*,char const*) ;
 int FUNC_8 (TYPE_5__*,int,int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (char*,int) ;

__attribute__((used)) static bool FUNC_12(void *VAR_1, const void *VAR_2, unsigned VAR_3,
      unsigned VAR_4, uint64_t VAR_5,
      unsigned VAR_6, const char *VAR_7, video_frame_info_t *VAR_8)
{
   sdl2_video_t *VAR_9 = (sdl2_video_t*)VAR_1;
   char VAR_10[128];

   if (VAR_9->should_resize)
      FUNC_9(VAR_9);

   if (VAR_2 && VAR_8->libretro_running)
   {
      FUNC_0(VAR_9->renderer);
      FUNC_8(VAR_9, 0, VAR_9->video.rgb32, VAR_3, VAR_4, VAR_6);
      FUNC_5(VAR_9->frame.tex, ((void*)0), VAR_2, VAR_6);
   }

   FUNC_2(VAR_9->renderer, VAR_9->frame.tex, ((void*)0), ((void*)0), VAR_9->rotation, ((void*)0), VAR_0);





   if (VAR_9->menu.active)
      FUNC_1(VAR_9->renderer, VAR_9->menu.tex, ((void*)0), ((void*)0));

   if (VAR_7)
      FUNC_7(VAR_9, VAR_7);

   FUNC_3(VAR_9->renderer);

   VAR_10[0] = '\0';

   FUNC_11(VAR_10, sizeof(VAR_10));

   if (VAR_10[0])
      FUNC_4((SDL_Window*)FUNC_10(), VAR_10);

   return 1;
}
