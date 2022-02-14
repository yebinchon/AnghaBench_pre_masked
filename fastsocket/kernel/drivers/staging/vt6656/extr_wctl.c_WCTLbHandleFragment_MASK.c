
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ pMACHeader ;
typedef int UINT ;
struct TYPE_19__ {int wSeqCtl; } ;
struct TYPE_18__ {size_t uCurrentDFCBIdx; size_t cbDFCB; TYPE_2__* sRxDFCB; int cbFreeDFCB; int dwMaxReceiveLifetime; } ;
struct TYPE_17__ {int wSequence; int wFragNum; int cbFrameLength; scalar_t__ bInUse; TYPE_4__* pbyRxBuffer; TYPE_1__* skb; int uLifetime; } ;
struct TYPE_16__ {scalar_t__ data; } ;
typedef TYPE_3__* PSDevice ;
typedef TYPE_4__* PS802_11Header ;
typedef TYPE_4__* PBYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_1 ;
 size_t FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 void* FUNC_3 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_4__*,int) ;

BOOL FUNC_5 (PSDevice VAR_2, PS802_11Header VAR_3, UINT VAR_4, BOOL VAR_5, BOOL VAR_6)
{
UINT VAR_7;


    if (VAR_5 == VAR_1) {
        VAR_7 = 28;
        if (VAR_6)

            VAR_7 +=4;
    }
    else {
        VAR_7 = 24;
    }

    if (FUNC_0(VAR_3)) {
        VAR_2->uCurrentDFCBIdx = FUNC_3(VAR_2, VAR_3);
        if (VAR_2->uCurrentDFCBIdx < VAR_2->cbDFCB) {

            VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].uLifetime = VAR_2->dwMaxReceiveLifetime;
            VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].wSequence = (VAR_3->wSeqCtl >> 4);
            VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].wFragNum = (VAR_3->wSeqCtl & 0x000F);
        }
        else {
            VAR_2->uCurrentDFCBIdx = FUNC_2(VAR_2, VAR_3);
            if (VAR_2->uCurrentDFCBIdx == VAR_2->cbDFCB) {
                return(VAR_0);
            }
        }

        VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].pbyRxBuffer = (PBYTE) (VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].skb->data + 8);

        FUNC_4(VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].pbyRxBuffer, VAR_3, VAR_4);
        VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].cbFrameLength = VAR_4;
        VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].pbyRxBuffer += VAR_4;
        VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].wFragNum++;

        return(VAR_0);
    }
    else {
        VAR_2->uCurrentDFCBIdx = FUNC_3(VAR_2, VAR_3);
        if (VAR_2->uCurrentDFCBIdx != VAR_2->cbDFCB) {
            if ((VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].wSequence == (VAR_3->wSeqCtl >> 4)) &&
                (VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].wFragNum == (VAR_3->wSeqCtl & 0x000F)) &&
                ((VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].cbFrameLength + VAR_4 - VAR_7) < 2346)) {

                FUNC_4(VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].pbyRxBuffer, ((PBYTE) (VAR_3) + VAR_7), (VAR_4 - VAR_7));
                VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].cbFrameLength += (VAR_4 - VAR_7);
                VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].pbyRxBuffer += (VAR_4 - VAR_7);
                VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].wFragNum++;

            }
            else {

                VAR_2->cbFreeDFCB++;
                VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].bInUse = VAR_0;
                return(VAR_0);
            }
        }
        else {
            return(VAR_0);
        }
        if (FUNC_1(VAR_3)) {

            VAR_2->cbFreeDFCB++;
            VAR_2->sRxDFCB[VAR_2->uCurrentDFCBIdx].bInUse = VAR_0;

            return(VAR_1);
        }
        return(VAR_0);
    }
}
