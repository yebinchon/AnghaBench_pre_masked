
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in_sdl_state {int keystate; } ;
struct TYPE_5__ {int sym; } ;
struct TYPE_6__ {TYPE_1__ keysym; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__ key; } ;
typedef TYPE_3__ SDL_Event ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct in_sdl_state *VAR_2, SDL_Event *VAR_3,
 int *VAR_4, int *VAR_5)
{
 if (VAR_3->type != VAR_0 && VAR_3->type != VAR_1)
  return -1;

 FUNC_0(VAR_2->keystate, VAR_3->key.keysym.sym,
  VAR_3->type == VAR_0);
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_3->key.keysym.sym;
 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_3->type == VAR_0;

 return 1;
}
