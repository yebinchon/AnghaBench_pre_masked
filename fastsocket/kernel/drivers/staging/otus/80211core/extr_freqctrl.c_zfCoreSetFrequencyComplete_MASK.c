
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {scalar_t__ flagFreqChanging; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_2)
{
    FUNC_5(VAR_2);
    FUNC_3();

    FUNC_2(VAR_0, "flagFreqChanging=", VAR_1->sta.flagFreqChanging);

    FUNC_4(VAR_2);

    if ( VAR_1->sta.flagFreqChanging != 0 )
    {
        VAR_1->sta.flagFreqChanging--;
    }

    FUNC_6(VAR_2);

    FUNC_1(VAR_2);

    FUNC_0(VAR_2);
    return;
}
