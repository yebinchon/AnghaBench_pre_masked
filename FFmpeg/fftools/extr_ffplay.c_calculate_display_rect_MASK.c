
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int num; int den; } ;
struct TYPE_11__ {int x; int y; void* h; void* w; } ;
typedef TYPE_1__ SDL_Rect ;
typedef TYPE_2__ AVRational ;


 void* FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (TYPE_2__,TYPE_2__) ;
 TYPE_2__ FUNC_2 (int,int) ;
 TYPE_2__ FUNC_3 (TYPE_2__,TYPE_2__) ;
 int FUNC_4 (int,int ,int ) ;

__attribute__((used)) static void FUNC_5(SDL_Rect *VAR_0,
                                   int VAR_1, int VAR_2, int VAR_3, int VAR_4,
                                   int VAR_5, int VAR_6, AVRational VAR_7)
{
    AVRational VAR_8 = VAR_7;
    int64_t VAR_9, VAR_10, VAR_11, VAR_12;

    if (FUNC_1(VAR_8, FUNC_2(0, 1)) <= 0)
        VAR_8 = FUNC_2(1, 1);

    VAR_8 = FUNC_3(VAR_8, FUNC_2(VAR_5, VAR_6));


    VAR_10 = VAR_4;
    VAR_9 = FUNC_4(VAR_10, VAR_8.num, VAR_8.den) & ~1;
    if (VAR_9 > VAR_3) {
        VAR_9 = VAR_3;
        VAR_10 = FUNC_4(VAR_9, VAR_8.den, VAR_8.num) & ~1;
    }
    VAR_11 = (VAR_3 - VAR_9) / 2;
    VAR_12 = (VAR_4 - VAR_10) / 2;
    VAR_0->x = VAR_1 + VAR_11;
    VAR_0->y = VAR_2 + VAR_12;
    VAR_0->w = FUNC_0((int)VAR_9, 1);
    VAR_0->h = FUNC_0((int)VAR_10, 1);
}
