
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int patternwh; int x; int y; } ;
typedef TYPE_1__ vdp2draw_struct ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(vdp2draw_struct *VAR_0)
{





    switch(VAR_0->patternwh)
    {
        case 1:
            FUNC_0(VAR_0);
            VAR_0->x += 8;
            VAR_0->y += 8;
            break;
        case 2:
            FUNC_0(VAR_0);
            VAR_0->x += 8;
            FUNC_0(VAR_0);
            VAR_0->x -= 8;
            VAR_0->y += 8;
            FUNC_0(VAR_0);
            VAR_0->x += 8;
            FUNC_0(VAR_0);
            VAR_0->x += 8;
            VAR_0->y += 8;
            break;
    }
}
