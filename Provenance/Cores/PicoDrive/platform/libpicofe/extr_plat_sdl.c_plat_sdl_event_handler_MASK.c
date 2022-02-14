
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int h; int w; } ;
struct TYPE_12__ {int vout_fullscreen; int vout_method; } ;
struct TYPE_9__ {int gain; } ;
struct TYPE_8__ {int h; int w; } ;
struct TYPE_11__ {int type; TYPE_2__ active; TYPE_1__ resize; } ;
struct TYPE_10__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_3__ SDL_Rect ;
typedef TYPE_4__ SDL_Event ;


 int VAR_0 ;

 int FUNC_0 (int *,TYPE_3__*) ;


 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,int ,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_5 () ;
 TYPE_6__* VAR_6 ;
 TYPE_5__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_6(void *VAR_11)
{
  static int VAR_12;
  SDL_Event *VAR_13 = VAR_11;

  switch (VAR_13->type) {
  case 128:

    if (VAR_7.vout_method != 0
        && !VAR_7.vout_fullscreen && !VAR_3)
    {
      VAR_10 = VAR_13->resize.w;
      VAR_9 = VAR_13->resize.h;
      FUNC_4(0, 0, 1);
    }
    break;
  case 130:
    if (VAR_13->active.gain && !VAR_12) {
      if (VAR_5 != ((void*)0)) {
        SDL_Rect VAR_14 = { 0, 0, VAR_6->w, VAR_6->h };
        FUNC_0(VAR_5, &VAR_14);
      }
      else if (VAR_4) {
        if (VAR_2 & VAR_0) {
          FUNC_1();
          VAR_4 = (FUNC_3(VAR_1, VAR_8, &VAR_2) == 0);
        }
        FUNC_2(((void*)0), 0, 0);
      }

    }
    VAR_12 = VAR_13->active.gain;
    break;
  case 129:
    if (&FUNC_5 != ((void*)0))
      FUNC_5();
    break;
  }
}
