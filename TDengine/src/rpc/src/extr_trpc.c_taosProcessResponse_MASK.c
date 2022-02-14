
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int msgLen; scalar_t__ ahandle; struct TYPE_15__* next; } ;
struct TYPE_14__ {int mutex; int tmrCtrl; } ;
struct TYPE_13__ {int chann; int pTimer; int * pTail; TYPE_5__* pHead; int meterId; int sid; int outTranId; int outType; scalar_t__ ahandle; TYPE_5__* pMsgNode; scalar_t__ rspReceived; struct TYPE_13__* signature; TYPE_1__* pServer; } ;
struct TYPE_12__ {int tranId; int msgType; } ;
struct TYPE_11__ {scalar_t__ noFree; int label; TYPE_4__* channList; } ;
typedef TYPE_1__ STaosRpc ;
typedef TYPE_2__ STaosHeader ;
typedef TYPE_3__ SRpcConn ;
typedef TYPE_4__ SRpcChann ;
typedef TYPE_5__ SMsgNode ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int,int ,int ,int,TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*,char*,int) ;
 int FUNC_4 (int ,int ,TYPE_3__*,int ,int *) ;
 int FUNC_5 (TYPE_5__*) ;
 int VAR_1 ;

void FUNC_6(SRpcConn *VAR_2) {
  STaosHeader *VAR_3;
  char * VAR_4 = ((void*)0);
  int VAR_5 = 0;

  if (VAR_2 == ((void*)0)) return;
  STaosRpc *VAR_6 = VAR_2->pServer;
  if (VAR_2->signature != VAR_2 || VAR_6 == ((void*)0)) return;
  SRpcChann *VAR_7 = VAR_6->channList + VAR_2->chann;

  FUNC_0(&VAR_7->mutex);

  VAR_2->outType = 0;
  VAR_2->rspReceived = 0;
  if (VAR_6->noFree == 0) FUNC_5(VAR_2->pMsgNode);
  VAR_2->pMsgNode = ((void*)0);

  if (VAR_2->pHead) {
    SMsgNode *VAR_8 = VAR_2->pHead;

    if (VAR_8->msgLen >= sizeof(STaosHeader)) {
      VAR_2->pMsgNode = VAR_8;
      VAR_2->pHead = VAR_8->next;
      if (VAR_8->ahandle) VAR_2->ahandle = VAR_8->ahandle;

      VAR_3 = (STaosHeader *)((char *)VAR_8 + sizeof(SMsgNode));
      VAR_2->outType = VAR_3->msgType;
      VAR_2->outTranId = VAR_3->tranId;

      VAR_4 = (char *)VAR_3;
      VAR_5 = VAR_8->msgLen;

    } else {
      FUNC_2("%s cid:%d sid:%d id:%s, invalid msgLen:%d pConn:%p", VAR_6->label, VAR_2->chann, VAR_2->sid,
             VAR_2->meterId, VAR_8->msgLen, VAR_2);
      VAR_2->pHead = ((void*)0);
    }

    if (VAR_2->pHead == ((void*)0)) VAR_2->pTail = ((void*)0);
  }

  if (VAR_4) {
    FUNC_3(VAR_2, VAR_4, VAR_5);
    FUNC_4(VAR_0, VAR_1, VAR_2, VAR_7->tmrCtrl, &VAR_2->pTimer);
  }

  FUNC_1(&VAR_7->mutex);

}
