
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsQueue {int sizeMask; int tail; TYPE_1__* cell; } ;
struct TYPE_2__ {int buf; int tick; } ;


 scalar_t__ FUNC_0 (int *,int ,int*) ;

u8_t FUNC_1(zdev_t* VAR_0, struct zsQueue* VAR_1, u16_t VAR_2, u8_t* VAR_3)
{
    u16_t VAR_4;
    u8_t VAR_5 = 0;


    while ((VAR_4 =((VAR_2+1)&VAR_1->sizeMask)) != VAR_1->tail)
    {
        VAR_1->cell[VAR_2].buf = VAR_1->cell[VAR_4].buf;
        VAR_1->cell[VAR_2].tick = VAR_1->cell[VAR_4].tick;

        if ((VAR_5 == 0) && (FUNC_0(VAR_0,
                VAR_1->cell[VAR_4].buf, VAR_3) == 0))
        {
            VAR_5 = 1;
        }

        VAR_2 = VAR_4;
    }
    VAR_1->tail = (VAR_1->tail-1) & VAR_1->sizeMask;

    return VAR_5;

}
