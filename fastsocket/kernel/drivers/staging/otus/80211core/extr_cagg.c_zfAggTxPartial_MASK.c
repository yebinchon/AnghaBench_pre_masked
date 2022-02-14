
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct TYPE_2__ {int * vtxqTail; int * vtxqHead; } ;


 TYPE_1__* VAR_0 ;
 size_t FUNC_0 (int *,int ,int ) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

u16_t FUNC_6(zdev_t* VAR_1, u16_t VAR_2, u16_t VAR_3)
{
    u16_t VAR_4;
    u16_t VAR_5;

    FUNC_4(VAR_1);

    FUNC_2();

    FUNC_3(VAR_1);

    VAR_4 = FUNC_0(VAR_1, VAR_0->vtxqHead[VAR_2], VAR_0->vtxqTail[VAR_2]);

    if ((VAR_4 + VAR_3) > 0)
    {
        VAR_5 = (u16_t)( FUNC_1(VAR_2) * ((u16_t)VAR_4/(VAR_4 + VAR_3)) );

    }
    else
    {
        VAR_5 = 0;
    }

    FUNC_5(VAR_1);

    if (VAR_5 > VAR_4)
        VAR_5 = VAR_4;

    return VAR_5;
}
