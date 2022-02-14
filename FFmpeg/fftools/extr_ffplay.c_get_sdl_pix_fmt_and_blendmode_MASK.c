
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int Uint32 ;
struct TYPE_3__ {int format; int texture_fmt; } ;
typedef int SDL_BlendMode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;

__attribute__((used)) static void FUNC_1(int VAR_8, Uint32 *VAR_9, SDL_BlendMode *VAR_10)
{
    int VAR_11;
    *VAR_10 = VAR_5;
    *VAR_9 = VAR_6;
    if (VAR_8 == VAR_2 ||
        VAR_8 == VAR_3 ||
        VAR_8 == VAR_0 ||
        VAR_8 == VAR_1)
        *VAR_10 = VAR_4;
    for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_7) - 1; VAR_11++) {
        if (VAR_8 == VAR_7[VAR_11].format) {
            *VAR_9 = VAR_7[VAR_11].texture_fmt;
            return;
        }
    }
}
