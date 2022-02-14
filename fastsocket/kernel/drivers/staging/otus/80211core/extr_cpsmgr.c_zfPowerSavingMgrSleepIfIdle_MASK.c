
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
struct TYPE_4__ {int state; } ;
struct TYPE_5__ {int powerSaveMode; TYPE_1__ psMgr; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 int VAR_0 ;




 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(zdev_t *VAR_2)
{
    u8_t VAR_3;

    FUNC_4(VAR_2);
    FUNC_2();

    VAR_3 = FUNC_0(VAR_2);

    if ( VAR_3 == 0 )
    {
        return;
    }

    FUNC_3(VAR_2);

    switch(VAR_1->sta.powerSaveMode)
    {
        case 128:
            break;

        case 129:
        case 131:
        case 130:
            FUNC_1("zfPowerSavingMgrSleepIfIdle: IDLE so slep now...\n");
            VAR_1->sta.psMgr.state = VAR_0;
            break;
    }

    FUNC_5(VAR_2);
}
