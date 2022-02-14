
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int x; int planeh; int y; int planew; } ;
typedef TYPE_1__ vdp2draw_struct ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(vdp2draw_struct *VAR_0)
{
    int VAR_1, VAR_2;
    int VAR_3, VAR_4;

    VAR_1 = VAR_0->x;
    for(VAR_3 = 0;VAR_3 < VAR_0->planeh;VAR_3++)
    {
        VAR_2 = VAR_0->y;
        VAR_0->x = VAR_1;
        for(VAR_4 = 0;VAR_4 < VAR_0->planew;VAR_4++)
        {
            VAR_0->y = VAR_2;
            FUNC_0(VAR_0);
        }
    }
}
