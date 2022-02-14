
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_2__ {int bRate; int bRateBasic; } ;


 TYPE_1__* VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_2, u8_t* VAR_3, u8_t* VAR_4)
{
    u8_t VAR_5, VAR_6=0;

    FUNC_0(VAR_2);

    for( VAR_5=0; VAR_5<4; VAR_5++ )
    {
        if ( VAR_0->bRate & (0x1 << VAR_5) )
        {
            VAR_3[VAR_6] = VAR_1[VAR_5] +
                           ((VAR_0->bRateBasic & (0x1<<VAR_5))<<(7-VAR_5));
            VAR_6++;
        }
    }

    *VAR_4 = VAR_6;
}
