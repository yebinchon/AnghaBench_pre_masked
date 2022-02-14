
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vsync; } ;
struct TYPE_5__ {int renderer; int window; TYPE_1__ video; } ;
typedef TYPE_2__ sdl2_video_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int,unsigned int) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(sdl2_video_t *VAR_4)
{
   unsigned VAR_5 = VAR_2;

   if (VAR_4->video.vsync)
      VAR_5 |= VAR_3;

   FUNC_1();
   FUNC_4(VAR_1,
                           VAR_4->video.vsync ? "1" : "0", VAR_0);
   VAR_4->renderer = FUNC_2(VAR_4->window, -1, VAR_5);

   if (!VAR_4->renderer)
   {
      FUNC_0("[SDL2]: Failed to initialize renderer: %s", FUNC_3());
      return;
   }

   FUNC_5(VAR_4->renderer, 0, 0, 0, 255);
}
