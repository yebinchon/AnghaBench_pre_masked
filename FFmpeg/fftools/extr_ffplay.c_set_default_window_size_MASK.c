
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h; int w; } ;
typedef TYPE_1__ SDL_Rect ;
typedef int AVRational ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int,int,int,int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_1(int VAR_5, int VAR_6, AVRational VAR_7)
{
    SDL_Rect VAR_8;
    int VAR_9 = VAR_4 ? VAR_4 : VAR_0;
    int VAR_10 = VAR_3 ? VAR_3 : VAR_0;
    if (VAR_9 == VAR_0 && VAR_10 == VAR_0)
        VAR_10 = VAR_6;
    FUNC_0(&VAR_8, 0, 0, VAR_9, VAR_10, VAR_5, VAR_6, VAR_7);
    VAR_2 = VAR_8.w;
    VAR_1 = VAR_8.h;
}
