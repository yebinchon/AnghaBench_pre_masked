
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sms_ntsc_t ;
typedef int md_ntsc_t ;
struct TYPE_14__ {scalar_t__ w; scalar_t__ h; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_13__ {scalar_t__ w; scalar_t__ h; scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {int changed; scalar_t__ w; int x; scalar_t__ h; int y; } ;
struct TYPE_12__ {TYPE_1__ viewport; } ;
struct TYPE_11__ {int ntsc; scalar_t__ render; } ;
struct TYPE_10__ {int h; int w; } ;
struct TYPE_9__ {int frames_rendered; int surf_screen; TYPE_7__ drect; TYPE_6__ srect; int surf_bitmap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_6__*,int ,TYPE_7__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_5__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (int) ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (int *,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_3__ VAR_12 ;
 int* VAR_13 ;
 TYPE_2__ VAR_14 ;
 int * VAR_15 ;
 int VAR_16 ;
 int FUNC_8 (int *,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_19 ;

__attribute__((used)) static void FUNC_12()
{
  if (VAR_19 == VAR_0)
  {
    FUNC_10(0);
  }
  else if ((VAR_19 & VAR_2) == VAR_1)
  {
    FUNC_9(0);
  }
  else
  {
    FUNC_11(0);
  }


  if(VAR_5.viewport.changed & 1)
  {
    VAR_5.viewport.changed &= ~1;


    VAR_14.srect.w = VAR_5.viewport.w+2*VAR_5.viewport.x;
    VAR_14.srect.h = VAR_5.viewport.h+2*VAR_5.viewport.y;
    VAR_14.srect.x = 0;
    VAR_14.srect.y = 0;
    if (VAR_14.srect.w > VAR_4)
    {
      VAR_14.srect.x = (VAR_14.srect.w - VAR_4) / 2;
      VAR_14.srect.w = VAR_4;
    }
    if (VAR_14.srect.h > VAR_3)
    {
      VAR_14.srect.y = (VAR_14.srect.h - VAR_3) / 2;
      VAR_14.srect.h = VAR_3;
    }


    VAR_14.drect.w = VAR_14.srect.w;
    VAR_14.drect.h = VAR_14.srect.h;
    VAR_14.drect.x = (VAR_4 - VAR_14.drect.w) / 2;
    VAR_14.drect.y = (VAR_3 - VAR_14.drect.h) / 2;


    FUNC_2(VAR_14.surf_screen, 0, 0);
  }

  FUNC_1(VAR_14.surf_bitmap, &VAR_14.srect, VAR_14.surf_screen, &VAR_14.drect);
  FUNC_3(VAR_14.surf_screen, 0, 0, 0, 0);

  ++VAR_14.frames_rendered;
}
