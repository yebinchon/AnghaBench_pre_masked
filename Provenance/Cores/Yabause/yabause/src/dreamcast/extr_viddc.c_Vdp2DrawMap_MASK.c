
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int x; int patternpixelwh; int patternwh; int draww; float coordincx; int drawh; float coordincy; int mapwh; int y; int addr; int (* PlaneAddr ) (TYPE_1__*,int) ;} ;
typedef TYPE_1__ vdp2draw_struct ;
typedef int u32 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(vdp2draw_struct *VAR_2)
{
    int VAR_3, VAR_4;
    int VAR_5, VAR_6;
    u32 VAR_7;

    VAR_5 = VAR_2->x;
    VAR_7=0xFFFFFFFF;

    VAR_2->patternpixelwh = 8 * VAR_2->patternwh;
    VAR_2->draww = (int)((float)VAR_1 / VAR_2->coordincx);
    VAR_2->drawh = (int)((float)VAR_0 / VAR_2->coordincy);

    for(VAR_3 = 0;VAR_3 < VAR_2->mapwh;VAR_3++)
    {
        VAR_6 = VAR_2->y;
        VAR_2->x = VAR_5;
        for(VAR_4 = 0;VAR_4 < VAR_2->mapwh;VAR_4++)
        {
            VAR_2->y = VAR_6;
            VAR_2->PlaneAddr(VAR_2, VAR_2->mapwh * VAR_3 + VAR_4);
            if (VAR_2->addr != VAR_7)
            {
                FUNC_0(VAR_2);
                VAR_7 = VAR_2->addr;
            }
        }
    }
}
