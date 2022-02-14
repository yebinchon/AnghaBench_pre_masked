
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_5__ {TYPE_1__* staTable; } ;
struct TYPE_6__ {TYPE_2__ ap; } ;
struct TYPE_4__ {int qosType; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_1, u16_t* VAR_2, u8_t* VAR_3)
{
    u16_t VAR_4;

    FUNC_3(VAR_1);

    FUNC_1();

    FUNC_2(VAR_1);

    if ((VAR_4 = FUNC_0(VAR_1, VAR_2)) != 0xffff)
    {
        *VAR_3 = VAR_0->ap.staTable[VAR_4].qosType;
    }
    else
    {
        *VAR_3 = 0;
    }

    FUNC_4(VAR_1);

    return;
}
