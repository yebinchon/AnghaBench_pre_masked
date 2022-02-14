
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int w; int h; } ;
typedef TYPE_1__ SDL_Rect ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    SDL_Rect VAR_5;
    VAR_5.x = VAR_1;
    VAR_5.y = VAR_2;
    VAR_5.w = VAR_3;
    VAR_5.h = VAR_4;
    if (VAR_3 && VAR_4)
        FUNC_0(VAR_0, &VAR_5);
}
