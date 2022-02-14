
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {scalar_t__ flagKeyChanging; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_1)
{
    FUNC_4(VAR_1);
    FUNC_2();




    if(VAR_0->sta.flagKeyChanging)
    {
        FUNC_3(VAR_1);
        VAR_0->sta.flagKeyChanging--;
        FUNC_5(VAR_1);
    }

    FUNC_1("  zfCoreSetKeyComplete--- ", VAR_0->sta.flagKeyChanging);

    FUNC_0(VAR_1);
}
