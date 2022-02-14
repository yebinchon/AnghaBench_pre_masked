
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int quitting; } ;
typedef TYPE_1__ sdl_video_t ;
struct TYPE_6__ {scalar_t__ type; } ;
typedef TYPE_2__ SDL_Event ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int,int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(sdl_video_t *VAR_3)
{
   SDL_Event VAR_4;

   FUNC_1();
   while (FUNC_0(&VAR_4, 1, VAR_0, VAR_2))
   {
      if (VAR_4.type != VAR_1)
         continue;

      VAR_3->quitting = 1;
      break;
   }
}
