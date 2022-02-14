
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
struct TYPE_4__ {int state; } ;
struct TYPE_5__ {TYPE_1__ psMgr; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;






 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static u16_t FUNC_3(zdev_t* VAR_1, u8_t *VAR_2)
{
    u16_t VAR_3 = 0;
    FUNC_2(VAR_1);

    switch(VAR_0->sta.psMgr.state)
    {
        case 131:
            *VAR_2 = 0;
            break;

        case 129:
        case 128:
        case 130:
        default:
            *VAR_2 = 1;
FUNC_1("zfPowerSavingMgrHandlePsNone: Wake up now\n");
            if ( FUNC_0(VAR_1) )
            {
                FUNC_1("zfPowerSavingMgrOnHandleT1 send Null data\n");

                VAR_3 = 1;
            }

            VAR_0->sta.psMgr.state = 131;
            break;
    }
    return VAR_3;
}
