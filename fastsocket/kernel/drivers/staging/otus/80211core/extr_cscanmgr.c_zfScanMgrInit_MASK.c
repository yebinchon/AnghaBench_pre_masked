
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_4__ {int scanStartDelay; int currScanType; scalar_t__* scanReqs; } ;
struct TYPE_5__ {TYPE_1__ scanMgr; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_2)
{
    FUNC_0(VAR_2);

    VAR_1->sta.scanMgr.scanReqs[0] = 0;
    VAR_1->sta.scanMgr.scanReqs[1] = 0;

    VAR_1->sta.scanMgr.currScanType = VAR_0;
    VAR_1->sta.scanMgr.scanStartDelay = 3;

}
