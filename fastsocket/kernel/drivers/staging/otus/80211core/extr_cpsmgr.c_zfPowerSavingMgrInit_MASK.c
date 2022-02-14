
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_4__ {int maxSleepPeriods; scalar_t__ sleepAllowedtick; scalar_t__ ticks; scalar_t__ isSleepAllowed; int state; } ;
struct TYPE_5__ {TYPE_1__ psMgr; int powerSaveMode; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_3)
{
    FUNC_0(VAR_3);

    VAR_2->sta.powerSaveMode = VAR_1;
    VAR_2->sta.psMgr.state = VAR_0;
    VAR_2->sta.psMgr.isSleepAllowed = 0;
    VAR_2->sta.psMgr.maxSleepPeriods = 1;
    VAR_2->sta.psMgr.ticks = 0;
    VAR_2->sta.psMgr.sleepAllowedtick = 0;
}
