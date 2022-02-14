
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_9__ {TYPE_3__* KeyTable; } ;
struct TYPE_6__ {scalar_t__ bKeyValid; } ;
struct TYPE_8__ {scalar_t__ bInUse; scalar_t__ bSoftWEP; scalar_t__ wKeyCtl; TYPE_2__* GroupKey; TYPE_1__ PairwiseKey; } ;
struct TYPE_7__ {scalar_t__ bKeyValid; } ;
typedef TYPE_4__* PSKeyManagement ;
typedef int DWORD_PTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static VOID
FUNC_1 (PSKeyManagement VAR_3, DWORD_PTR VAR_4)
{
    int VAR_5;

    for (VAR_5=0;VAR_5<VAR_1;VAR_5++) {
        if ((VAR_3->KeyTable[VAR_5].bInUse == VAR_2) &&
            (VAR_3->KeyTable[VAR_5].PairwiseKey.bKeyValid == VAR_0) &&
            (VAR_3->KeyTable[VAR_5].GroupKey[0].bKeyValid == VAR_0) &&
            (VAR_3->KeyTable[VAR_5].GroupKey[1].bKeyValid == VAR_0) &&
            (VAR_3->KeyTable[VAR_5].GroupKey[2].bKeyValid == VAR_0) &&
            (VAR_3->KeyTable[VAR_5].GroupKey[3].bKeyValid == VAR_0)
            ) {

            VAR_3->KeyTable[VAR_5].bInUse = VAR_0;
            VAR_3->KeyTable[VAR_5].wKeyCtl = 0;
            VAR_3->KeyTable[VAR_5].bSoftWEP = VAR_0;
            FUNC_0(VAR_4, VAR_5);
        }
    }
}
