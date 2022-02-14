
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {int * abyAddr2; } ;
struct TYPE_7__ {size_t cbDFCB; TYPE_1__* sRxDFCB; } ;
struct TYPE_6__ {scalar_t__ bInUse; int * abyAddr2; } ;
typedef TYPE_2__* PSDevice ;
typedef TYPE_3__* PS802_11Header ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;

UINT FUNC_1 (PSDevice VAR_1, PS802_11Header VAR_2)
{
UINT VAR_3;

    for(VAR_3=0;VAR_3<VAR_1->cbDFCB;VAR_3++) {
        if ((VAR_1->sRxDFCB[VAR_3].bInUse == VAR_0) &&
            (FUNC_0 (&(VAR_1->sRxDFCB[VAR_3].abyAddr2[0]), &(VAR_2->abyAddr2[0])))
            ) {

            return(VAR_3);
        }
    }
    return(VAR_1->cbDFCB);
}
