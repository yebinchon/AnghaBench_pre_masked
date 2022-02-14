
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int pagewh; int y; int patternpixelwh; int draww; int drawh; int addr; int patterndatasize; } ;
typedef TYPE_1__ vdp2draw_struct ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(vdp2draw_struct *VAR_0)
{
    int VAR_1, VAR_2;
    int VAR_3, VAR_4;

    VAR_1 = VAR_0->x;
    for(VAR_3 = 0;VAR_3 < VAR_0->pagewh;VAR_3++)
    {
        VAR_2 = VAR_0->y;
        VAR_0->x = VAR_1;
        for(VAR_4 = 0;VAR_4 < VAR_0->pagewh;VAR_4++)
        {
            VAR_0->y = VAR_2;
            if ((VAR_0->x >= -VAR_0->patternpixelwh) &&
                (VAR_0->y >= -VAR_0->patternpixelwh) &&
                (VAR_0->x <= VAR_0->draww) &&
                (VAR_0->y <= VAR_0->drawh))
            {
                FUNC_1(VAR_0);
                FUNC_0(VAR_0);
            }
            else
            {
                VAR_0->addr += VAR_0->patterndatasize * 2;
                VAR_0->x += VAR_0->patternpixelwh;
                VAR_0->y += VAR_0->patternpixelwh;
            }
        }
    }
}
