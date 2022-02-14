
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {int wSeqCtl; int * abyAddr2; } ;
struct TYPE_7__ {scalar_t__ cbFreeDFCB; size_t cbDFCB; TYPE_1__* sRxDFCB; int dwMaxReceiveLifetime; } ;
struct TYPE_6__ {scalar_t__ bInUse; int wSequence; int wFragNum; int * abyAddr2; int uLifetime; } ;
typedef TYPE_2__* PSDevice ;
typedef TYPE_3__* PS802_11Header ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int ) ;

UINT FUNC_1 (PSDevice VAR_3, PS802_11Header VAR_4)
{
UINT VAR_5;

    if (VAR_3->cbFreeDFCB == 0)
        return(VAR_3->cbDFCB);
    for(VAR_5=0;VAR_5<VAR_3->cbDFCB;VAR_5++) {
        if (VAR_3->sRxDFCB[VAR_5].bInUse == VAR_0) {
            VAR_3->cbFreeDFCB--;
            VAR_3->sRxDFCB[VAR_5].uLifetime = VAR_3->dwMaxReceiveLifetime;
            VAR_3->sRxDFCB[VAR_5].bInUse = VAR_1;
            VAR_3->sRxDFCB[VAR_5].wSequence = (VAR_4->wSeqCtl >> 4);
            VAR_3->sRxDFCB[VAR_5].wFragNum = (VAR_4->wSeqCtl & 0x000F);
            FUNC_0(&(VAR_3->sRxDFCB[VAR_5].abyAddr2[0]), &(VAR_4->abyAddr2[0]), VAR_2);
            return(VAR_5);
        }
    }
    return(VAR_3->cbDFCB);
}
