
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ w; scalar_t__ h; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_9__ {scalar_t__ w; scalar_t__ h; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_6__ {int changed; scalar_t__ w; int x; scalar_t__ h; int y; } ;
struct TYPE_8__ {TYPE_1__ viewport; } ;
struct TYPE_7__ {int frames_rendered; int surf_screen; TYPE_5__ drect; TYPE_4__ srect; int surf_bitmap; } ;


 int FUNC_0 (int ,TYPE_4__*,int ,TYPE_5__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4()
{
  FUNC_3(0);


  if(VAR_2.viewport.changed & 1)
  {
    VAR_2.viewport.changed &= ~1;


    VAR_3.srect.w = VAR_2.viewport.w+2*VAR_2.viewport.x;
    VAR_3.srect.h = VAR_2.viewport.h+2*VAR_2.viewport.y;
    VAR_3.srect.x = 0;
    VAR_3.srect.y = 0;
    if (VAR_3.srect.w > VAR_1)
    {
      VAR_3.srect.x = (VAR_3.srect.w - VAR_1) / 2;
      VAR_3.srect.w = VAR_1;
    }
    if (VAR_3.srect.h > VAR_0)
    {
      VAR_3.srect.y = (VAR_3.srect.h - VAR_0) / 2;
      VAR_3.srect.h = VAR_0;
    }


    VAR_3.drect.w = VAR_3.srect.w;
    VAR_3.drect.h = VAR_3.srect.h;
    VAR_3.drect.x = (VAR_1 - VAR_3.drect.w) / 2;
    VAR_3.drect.y = (VAR_0 - VAR_3.drect.h) / 2;


    FUNC_1(VAR_3.surf_screen, 0, 0);
  }

  FUNC_0(VAR_3.surf_bitmap, &VAR_3.srect, VAR_3.surf_screen, &VAR_3.drect);
  FUNC_2(VAR_3.surf_screen, 0, 0, 0, 0);

  ++VAR_3.frames_rendered;
}
