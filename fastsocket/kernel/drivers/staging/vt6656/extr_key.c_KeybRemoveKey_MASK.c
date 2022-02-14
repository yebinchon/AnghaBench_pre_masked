
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* KeyTable; } ;
struct TYPE_7__ {void* bKeyValid; } ;
struct TYPE_9__ {int dwGTKeyIndex; scalar_t__ bInUse; TYPE_2__* GroupKey; TYPE_1__ PairwiseKey; int abyBSSID; } ;
struct TYPE_8__ {void* bKeyValid; } ;
typedef int PVOID ;
typedef TYPE_4__* PSKeyManagement ;
typedef int PSDevice ;
typedef int PBYTE ;
typedef int DWORD ;
typedef void* BOOL ;


 void* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,TYPE_4__*) ;

BOOL FUNC_3 (
    PVOID VAR_5,
    PSKeyManagement VAR_6,
    PBYTE VAR_7,
    DWORD VAR_8
    )
{
    PSDevice VAR_9 = (PSDevice) VAR_5;
    int VAR_10;
    BOOL VAR_11 = VAR_0;

    if (FUNC_0(VAR_7)) {

        if ((VAR_8 & VAR_3) != 0) {
            for (VAR_10=0;VAR_10<VAR_2;VAR_10++) {
                VAR_6->KeyTable[VAR_10].PairwiseKey.bKeyValid = VAR_0;
            }
            VAR_11 = VAR_4;
        }
        else if ((VAR_8 & 0x000000FF) < VAR_1) {
            for (VAR_10=0;VAR_10<VAR_2;VAR_10++) {
                VAR_6->KeyTable[VAR_10].GroupKey[VAR_8 & 0x000000FF].bKeyValid = VAR_0;
                if ((VAR_8 & 0x7FFFFFFF) == (VAR_6->KeyTable[VAR_10].dwGTKeyIndex & 0x7FFFFFFF)) {

                    VAR_6->KeyTable[VAR_10].dwGTKeyIndex = 0;
                }
            }
            VAR_11 = VAR_4;
        }
        else {
            VAR_11 = VAR_0;
        }

    } else {
        for (VAR_10=0;VAR_10<VAR_2;VAR_10++) {
            if ( (VAR_6->KeyTable[VAR_10].bInUse == VAR_4) &&
                 FUNC_1(VAR_6->KeyTable[VAR_10].abyBSSID,VAR_7)) {

                if ((VAR_8 & VAR_3) != 0) {
                    VAR_6->KeyTable[VAR_10].PairwiseKey.bKeyValid = VAR_0;
                    VAR_11 = VAR_4;
                    break;
                }
                else if ((VAR_8 & 0x000000FF) < VAR_1) {
                    VAR_6->KeyTable[VAR_10].GroupKey[VAR_8 & 0x000000FF].bKeyValid = VAR_0;
                    if ((VAR_8 & 0x7FFFFFFF) == (VAR_6->KeyTable[VAR_10].dwGTKeyIndex & 0x7FFFFFFF)) {

                        VAR_6->KeyTable[VAR_10].dwGTKeyIndex = 0;
                    }
                    VAR_11 = VAR_4;
                    break;
                }
                else {
                    VAR_11 = VAR_0;
                    break;
                }
            }
        }
        VAR_11 = VAR_4;
    }

    FUNC_2(VAR_9,VAR_6);
    return VAR_11;


}
