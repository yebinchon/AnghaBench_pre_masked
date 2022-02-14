
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ height; scalar_t__ width; int y; int x; } ;
struct TYPE_7__ {TYPE_1__ vp; int renderer; } ;
typedef TYPE_2__ sdl2_video_t ;
struct TYPE_8__ {int w; int h; int y; int x; } ;
typedef TYPE_3__ SDL_Rect ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_3(sdl2_video_t *VAR_0)
{
   SDL_Rect VAR_1;

   FUNC_0(VAR_0->renderer);

   VAR_1.x = VAR_0->vp.x;
   VAR_1.y = VAR_0->vp.y;
   VAR_1.w = (int)VAR_0->vp.width;
   VAR_1.h = (int)VAR_0->vp.height;

   FUNC_2(VAR_0->renderer, &VAR_1);





}
