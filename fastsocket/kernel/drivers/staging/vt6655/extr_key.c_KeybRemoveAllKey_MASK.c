
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
typedef TYPE_4__* PSKeyManagement ;
typedef int PBYTE ;
typedef int DWORD_PTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_4__*,int ) ;

BOOL FUNC_2 (
    PSKeyManagement VAR_4,
    PBYTE VAR_5,
    DWORD_PTR VAR_6
    )
{
    int VAR_7,VAR_8;

    for (VAR_7=0;VAR_7<VAR_2;VAR_7++) {
        if ((VAR_4->KeyTable[VAR_7].bInUse == VAR_3) &&
            FUNC_0(VAR_4->KeyTable[VAR_7].abyBSSID,VAR_5)) {
            VAR_4->KeyTable[VAR_7].PairwiseKey.bKeyValid = VAR_0;
            for(VAR_8=0;VAR_8<VAR_1;VAR_8++) {
                VAR_4->KeyTable[VAR_7].GroupKey[VAR_8].bKeyValid = VAR_0;
            }
            VAR_4->KeyTable[VAR_7].dwGTKeyIndex = 0;
            FUNC_1(VAR_4, VAR_6);
            return (VAR_3);
        }
    }
    return (VAR_0);
}
