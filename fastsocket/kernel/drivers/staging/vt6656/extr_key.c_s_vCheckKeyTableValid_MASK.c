
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ WORD ;
typedef int VOID ;
struct TYPE_9__ {TYPE_3__* KeyTable; } ;
struct TYPE_6__ {scalar_t__ bKeyValid; } ;
struct TYPE_8__ {scalar_t__ bInUse; scalar_t__ bSoftWEP; scalar_t__ wKeyCtl; TYPE_2__* GroupKey; TYPE_1__ PairwiseKey; } ;
struct TYPE_7__ {scalar_t__ bKeyValid; } ;
typedef int PVOID ;
typedef TYPE_4__* PSKeyManagement ;
typedef int PSDevice ;
typedef scalar_t__ BYTE ;


 int FUNC_0 (int ,int ,int ,int ,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static VOID
FUNC_1 (PVOID VAR_4, PSKeyManagement VAR_5)
{
    PSDevice VAR_6 = (PSDevice) VAR_4;
    int VAR_7;
    WORD VAR_8 = 0;
    BYTE VAR_9[VAR_1];

    for (VAR_7=0;VAR_7<VAR_1;VAR_7++) {
        if ((VAR_5->KeyTable[VAR_7].bInUse == VAR_3) &&
            (VAR_5->KeyTable[VAR_7].PairwiseKey.bKeyValid == VAR_0) &&
            (VAR_5->KeyTable[VAR_7].GroupKey[0].bKeyValid == VAR_0) &&
            (VAR_5->KeyTable[VAR_7].GroupKey[1].bKeyValid == VAR_0) &&
            (VAR_5->KeyTable[VAR_7].GroupKey[2].bKeyValid == VAR_0) &&
            (VAR_5->KeyTable[VAR_7].GroupKey[3].bKeyValid == VAR_0)
            ) {

            VAR_5->KeyTable[VAR_7].bInUse = VAR_0;
            VAR_5->KeyTable[VAR_7].wKeyCtl = 0;
            VAR_5->KeyTable[VAR_7].bSoftWEP = VAR_0;
            VAR_9[VAR_8++] = (BYTE) VAR_7;

        }
    }
    if ( VAR_8 != 0 ) {
        FUNC_0(VAR_6,
                            VAR_2,
                            0,
                            0,
                            VAR_8,
                            VAR_9
                            );
    }

}
