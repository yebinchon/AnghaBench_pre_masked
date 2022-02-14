
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_5__ {TYPE_1__* staTable; } ;
struct TYPE_6__ {int frequency; TYPE_2__ ap; } ;
struct TYPE_4__ {size_t qosType; int rcCell; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int *,int*) ;
 scalar_t__ FUNC_1 (int *,int *,int*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_3, u16_t* VAR_4, u32_t* VAR_5,
                                u8_t* VAR_6, u16_t* VAR_7)
{
    u16_t VAR_8;
    u8_t VAR_9;

    FUNC_5(VAR_3);

    FUNC_3();

    FUNC_4(VAR_3);

    if ((VAR_8 = FUNC_0(VAR_3, VAR_4)) != 0xffff)
    {
        VAR_9 = (u8_t)FUNC_1(VAR_3, &VAR_1->ap.staTable[VAR_8].rcCell, VAR_7);



        *VAR_5 = VAR_2[VAR_9];
        *VAR_6 = VAR_1->ap.staTable[VAR_8].qosType;
    }
    else
    {
        if (VAR_1->frequency < 3000)
        {



            *VAR_5 = 0x00000F00;
        }
        else
        {



            *VAR_5 = 0x000B0F01;
        }
        *VAR_6 = 0;
    }

    FUNC_6(VAR_3);

    FUNC_2(VAR_0, "PhyCtrl=", *VAR_5);
    return;
}
