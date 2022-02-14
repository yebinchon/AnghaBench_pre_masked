
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
struct zsStaPSList {int dummy; } ;
struct TYPE_4__ {scalar_t__ tempWakeUp; } ;
struct TYPE_5__ {int* capability; size_t ibssPSDataCount; size_t staPSDataCount; int uapsdQ; scalar_t__ qosInfo; TYPE_1__ psMgr; scalar_t__ wmeConnected; int staPSList; int * staPSDataQueue; int * ibssPSDataQueue; scalar_t__ TPCEnable; scalar_t__ DFSEnable; } ;
struct TYPE_6__ {int dtim; TYPE_2__ sta; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (size_t*,int) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_2, u8_t VAR_3)
{
    u8_t VAR_4;

    FUNC_4(VAR_2);

    FUNC_0(VAR_2);

    VAR_1->dtim = 1;
    VAR_1->sta.capability[0] = 0x01;
    VAR_1->sta.capability[1] = 0x00;

    if (VAR_1->sta.DFSEnable || VAR_1->sta.TPCEnable)
        VAR_1->sta.capability[1] |= VAR_0;


    for(VAR_4=0; VAR_4<VAR_1->sta.ibssPSDataCount; VAR_4++)
    {
        FUNC_3(VAR_2, VAR_1->sta.ibssPSDataQueue[VAR_4], 0);
    }

    for(VAR_4=0; VAR_4<VAR_1->sta.staPSDataCount; VAR_4++)
    {
        FUNC_3(VAR_2, VAR_1->sta.staPSDataQueue[VAR_4], 0);
    }

    VAR_1->sta.ibssPSDataCount = 0;
    VAR_1->sta.staPSDataCount = 0;
    FUNC_2((u8_t*) &VAR_1->sta.staPSList, sizeof(struct zsStaPSList));

    VAR_1->sta.wmeConnected = 0;
    VAR_1->sta.psMgr.tempWakeUp = 0;
    VAR_1->sta.qosInfo = 0;
    FUNC_1(VAR_2, VAR_1->sta.uapsdQ);

    return;

}
