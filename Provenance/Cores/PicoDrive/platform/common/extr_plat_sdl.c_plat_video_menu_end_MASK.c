
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int * pixels; } ;
struct TYPE_12__ {int h; int w; } ;
struct TYPE_11__ {int member_3; int member_2; int member_1; int member_0; } ;
typedef TYPE_1__ SDL_Rect ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,int,int) ;
 scalar_t__ VAR_3 ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_7 (int ,int ,int) ;
 int VAR_6 ;

void FUNC_8(void)
{
 if (VAR_4 != ((void*)0)) {
  SDL_Rect VAR_7 =
   { 0, 0, VAR_5->w, VAR_5->h };

  FUNC_2(VAR_4);
  FUNC_7(VAR_4->pixels[0], VAR_6,
    VAR_2 * VAR_0);
  FUNC_5(VAR_4);

  FUNC_0(VAR_4, &VAR_7);
 }
 else if (VAR_3) {
  FUNC_6(VAR_1, VAR_2, VAR_0);
 }
 else {
  if (FUNC_3(VAR_5))
   FUNC_4(VAR_5);
  FUNC_1(VAR_5);
 }
 VAR_1 = ((void*)0);

}
