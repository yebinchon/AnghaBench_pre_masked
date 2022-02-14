
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
struct TYPE_9__ {int dwGTKeyIndex; scalar_t__ bInUse; TYPE_2__* GroupKey; TYPE_1__ PairwiseKey; int abyBSSID; } ;
struct TYPE_8__ {scalar_t__ bKeyValid; } ;
typedef TYPE_4__* PSKeyManagement ;
typedef int PBYTE ;
typedef int DWORD_PTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_4__*,int ) ;

BOOL FUNC_3 (
    PSKeyManagement VAR_5,
    PBYTE VAR_6,
    DWORD VAR_7,
    DWORD_PTR VAR_8
    )
{
    int VAR_9;

    if (FUNC_0(VAR_6)) {

        if ((VAR_7 & VAR_3) != 0) {
            for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
                VAR_5->KeyTable[VAR_9].PairwiseKey.bKeyValid = VAR_0;
            }
            FUNC_2(VAR_5, VAR_8);
            return VAR_4;
        }
        else if ((VAR_7 & 0x000000FF) < VAR_1) {
            for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
                VAR_5->KeyTable[VAR_9].GroupKey[VAR_7 & 0x000000FF].bKeyValid = VAR_0;
                if ((VAR_7 & 0x7FFFFFFF) == (VAR_5->KeyTable[VAR_9].dwGTKeyIndex & 0x7FFFFFFF)) {

                    VAR_5->KeyTable[VAR_9].dwGTKeyIndex = 0;
                }
            }
            FUNC_2(VAR_5, VAR_8);
            return VAR_4;
        }
        else {
            return VAR_0;
        }
    }

    for (VAR_9=0;VAR_9<VAR_2;VAR_9++) {
        if ((VAR_5->KeyTable[VAR_9].bInUse == VAR_4) &&
            FUNC_1(VAR_5->KeyTable[VAR_9].abyBSSID,VAR_6)) {
            if ((VAR_7 & VAR_3) != 0) {
                VAR_5->KeyTable[VAR_9].PairwiseKey.bKeyValid = VAR_0;
                FUNC_2(VAR_5, VAR_8);
                return (VAR_4);
            }
            else if ((VAR_7 & 0x000000FF) < VAR_1) {
                VAR_5->KeyTable[VAR_9].GroupKey[VAR_7 & 0x000000FF].bKeyValid = VAR_0;
                if ((VAR_7 & 0x7FFFFFFF) == (VAR_5->KeyTable[VAR_9].dwGTKeyIndex & 0x7FFFFFFF)) {

                    VAR_5->KeyTable[VAR_9].dwGTKeyIndex = 0;
                }
                FUNC_2(VAR_5, VAR_8);
                return (VAR_4);
            }
            else {
                return (VAR_0);
            }
        }
    }
    return (VAR_0);
}
