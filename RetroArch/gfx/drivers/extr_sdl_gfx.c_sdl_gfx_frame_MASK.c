
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int video_frame_info_t ;
typedef int uint64_t ;
typedef int title ;
struct TYPE_11__ {int frame; scalar_t__ active; } ;
struct TYPE_13__ {int in_fmt; } ;
struct TYPE_12__ {TYPE_5__* screen; TYPE_1__ menu; TYPE_3__ scaler; } ;
typedef TYPE_2__ sdl_video_t ;
struct TYPE_14__ {int format; int h; int w; int pitch; int pixels; } ;


 int FUNC_0 (int ,int *,TYPE_5__*,int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_5__*,char const*,int ,int ,int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_3__*,int ,void const*,int ,int ,int ,int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static bool FUNC_10(void *VAR_0, const void *VAR_1, unsigned VAR_2,
      unsigned VAR_3, uint64_t VAR_4,
      unsigned VAR_5, const char *VAR_6, video_frame_info_t *VAR_7)
{
   sdl_video_t *VAR_8 = (sdl_video_t*)VAR_0;
   char VAR_9[128];

   if (!VAR_1)
      return 1;

   VAR_9[0] = '\0';

   FUNC_8(VAR_9, sizeof(VAR_9));

   if (FUNC_3(VAR_8->screen))
      FUNC_2(VAR_8->screen);

   FUNC_9(
         &VAR_8->scaler,
         VAR_8->screen->pixels,
         VAR_1,
         VAR_8->scaler.in_fmt,
         VAR_8->screen->w,
         VAR_8->screen->h,
         VAR_8->screen->pitch,
         VAR_2,
         VAR_3,
         VAR_5);





   if (VAR_8->menu.active)
      FUNC_0(VAR_8->menu.frame, ((void*)0), VAR_8->screen, ((void*)0));

   if (VAR_6)
      FUNC_7(VAR_8, VAR_8->screen,
            VAR_6, VAR_8->screen->w, VAR_8->screen->h, VAR_8->screen->format);

   if (FUNC_3(VAR_8->screen))
      FUNC_4(VAR_8->screen);

   if (VAR_9[0])
      FUNC_5(VAR_9, ((void*)0));

   FUNC_1(VAR_8->screen);

   return 1;
}
