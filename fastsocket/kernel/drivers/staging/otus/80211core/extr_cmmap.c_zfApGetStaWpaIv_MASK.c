
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_4__ {TYPE_2__* staTable; } ;
struct TYPE_6__ {TYPE_1__ ap; } ;
struct TYPE_5__ {int iv16; int iv32; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_2, u16_t* VAR_3, u16_t* VAR_4, u32_t* VAR_5)
{

    u16_t VAR_6;

    FUNC_4(VAR_2);

    FUNC_2();

    FUNC_3(VAR_2);

    if ((VAR_6 = FUNC_0(VAR_2, VAR_3)) != 0xffff)
    {
        *VAR_4 = VAR_1->ap.staTable[VAR_6].iv16;
        *VAR_5 = VAR_1->ap.staTable[VAR_6].iv32;
    }
    else
    {
        *VAR_4 = 0;
        *VAR_5 = 0;
    }

    FUNC_5(VAR_2);

    FUNC_1(VAR_0, "iv16=", *VAR_4);
    FUNC_1(VAR_0, "iv32=", *VAR_5);
    return;
}
