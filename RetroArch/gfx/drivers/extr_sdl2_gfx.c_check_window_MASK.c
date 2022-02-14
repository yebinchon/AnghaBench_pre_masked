
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int quitting; int should_resize; } ;
typedef TYPE_2__ sdl2_video_t ;
struct TYPE_6__ {int event; } ;
struct TYPE_8__ {int type; TYPE_1__ window; } ;
typedef TYPE_3__ SDL_Event ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int,int ,int,int) ;
 int FUNC_1 () ;


 int VAR_1 ;

__attribute__((used)) static void FUNC_2(sdl2_video_t *VAR_2)
{
   SDL_Event VAR_3;

   FUNC_1();
   while (FUNC_0(&VAR_3, 1, VAR_0, 129, 128) > 0)
   {
      switch (VAR_3.type)
      {
         case 129:
            VAR_2->quitting = 1;
            break;

         case 128:
            if (VAR_3.window.event == VAR_1)
               VAR_2->should_resize = 1;
            break;

         default:
            break;
      }
   }
}
