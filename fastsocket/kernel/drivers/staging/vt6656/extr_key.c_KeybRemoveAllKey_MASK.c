
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* KeyTable; } ;
struct TYPE_7__ {scalar_t__ bKeyValid; } ;
struct TYPE_9__ {scalar_t__ bInUse; scalar_t__ dwGTKeyIndex; TYPE_2__* GroupKey; TYPE_1__ PairwiseKey; int abyBSSID; } ;
struct TYPE_8__ {scalar_t__ bKeyValid; } ;
typedef int PVOID ;
typedef TYPE_4__* PSKeyManagement ;
typedef int PSDevice ;
typedef int PBYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,TYPE_4__*) ;

BOOL FUNC_2 (
    PVOID VAR_4,
    PSKeyManagement VAR_5,
    PBYTE VAR_6
    )
{
    PSDevice VAR_7 = (PSDevice) VAR_4;
    int VAR_8,VAR_9;

    for (VAR_8=0;VAR_8<VAR_2;VAR_8++) {
        if ((VAR_5->KeyTable[VAR_8].bInUse == VAR_3) &&
            FUNC_0(VAR_5->KeyTable[VAR_8].abyBSSID,VAR_6)) {
            VAR_5->KeyTable[VAR_8].PairwiseKey.bKeyValid = VAR_0;
            for(VAR_9=0;VAR_9<VAR_1;VAR_9++) {
                VAR_5->KeyTable[VAR_8].GroupKey[VAR_9].bKeyValid = VAR_0;
            }
            VAR_5->KeyTable[VAR_8].dwGTKeyIndex = 0;
            FUNC_1(VAR_7, VAR_5);
            return (VAR_3);
        }
    }
    return (VAR_0);
}
