
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
struct TYPE_4__ {int encryMode; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_3, u16_t* VAR_4, u8_t* VAR_5)
{

    u16_t VAR_6;

    FUNC_4(VAR_3);

    FUNC_2();

    FUNC_3(VAR_3);

    if ((VAR_6 = FUNC_0(VAR_3, VAR_4)) != 0xffff)
    {
        *VAR_5 = VAR_2->ap.staTable[VAR_6].encryMode;
    }
    else
    {
        *VAR_5 = VAR_1;
    }

    FUNC_5(VAR_3);

    FUNC_1(VAR_0, "encyrType=", *VAR_5);
    return;
}
