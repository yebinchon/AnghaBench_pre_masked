
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef void* int32_t ;
struct TYPE_16__ {int msgLen; void* ahandle; struct TYPE_16__* next; } ;
struct TYPE_15__ {int mutex; int tmrCtrl; } ;
struct TYPE_14__ {int chann; char* pRspMsg; int rspMsgLen; int outType; int pTimer; void* ahandle; scalar_t__ rspReceived; TYPE_6__* pMsgNode; int outTranId; int meterId; int sid; TYPE_6__* pHead; TYPE_6__* pTail; int inTranId; scalar_t__ inType; int secret; scalar_t__ spi; scalar_t__ localPort; TYPE_1__* pServer; struct TYPE_14__* signature; } ;
struct TYPE_13__ {int auth; scalar_t__ timeStamp; } ;
struct TYPE_12__ {int msgType; scalar_t__* content; int tranId; void* msgLen; scalar_t__ spi; scalar_t__ port; } ;
struct TYPE_11__ {int label; TYPE_5__* channList; } ;
typedef TYPE_1__ STaosRpc ;
typedef TYPE_2__ STaosHeader ;
typedef TYPE_3__ STaosDigest ;
typedef TYPE_4__ SRpcConn ;
typedef TYPE_5__ SRpcChann ;
typedef TYPE_6__ SMsgNode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int,int ,int ,TYPE_4__*) ;
 int FUNC_5 (char*,int ,int,int ,int ,int ,TYPE_4__*) ;
 int FUNC_6 (int*,scalar_t__,int ,int ) ;
 int FUNC_7 () ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (TYPE_4__*,char*,int) ;
 int FUNC_9 (int ,int ,TYPE_4__*,int ,int *) ;
 int FUNC_10 (char*) ;
 int VAR_4 ;

int FUNC_11(void *VAR_5, char *VAR_6, int VAR_7, void *VAR_8) {
  STaosHeader *VAR_9;
  SMsgNode * VAR_10;
  char * VAR_11;
  int VAR_12 = 0;
  SRpcConn * VAR_13 = (SRpcConn *)VAR_5;
  STaosRpc * VAR_14;
  SRpcChann * VAR_15;
  uint8_t VAR_16;

  if (VAR_13 == ((void*)0)) return -1;
  if (VAR_13->signature != VAR_13) return -1;

  VAR_14 = VAR_13->pServer;
  VAR_15 = VAR_14->channList + VAR_13->chann;
  VAR_9 = (STaosHeader *)(VAR_6 - sizeof(STaosHeader));
  VAR_11 = (char *)VAR_9;
  VAR_12 = VAR_7 + (int32_t)sizeof(STaosHeader);

  if ((VAR_9->msgType & 1) == 0 && VAR_13->localPort) VAR_9->port = VAR_13->localPort;

  if (VAR_13->spi) {

    VAR_9->spi = VAR_13->spi;
    STaosDigest *VAR_17 = (STaosDigest *)(VAR_6 + VAR_7);
    VAR_17->timeStamp = FUNC_1(FUNC_7());
    VAR_12 += sizeof(STaosDigest);
    VAR_9->msgLen = (int32_t)FUNC_1((uint32_t)VAR_12);
    FUNC_6((uint8_t *)VAR_9, VAR_12 - VAR_0, VAR_17->auth, VAR_13->secret);
  } else {
    VAR_9->msgLen = (int32_t)FUNC_1((uint32_t)VAR_12);
  }

  FUNC_2(&VAR_15->mutex);
  VAR_16 = VAR_9->msgType;

  if ((VAR_16 & 1) == 0) {

    VAR_13->inType = 0;
    FUNC_10(VAR_13->pRspMsg);
    VAR_13->pRspMsg = VAR_11;
    VAR_13->rspMsgLen = VAR_12;

    if (VAR_9->content[0] == VAR_1) VAR_13->inTranId--;

  } else {

    VAR_10 = (SMsgNode *)(VAR_6 - sizeof(STaosHeader) - sizeof(SMsgNode));
    VAR_10->msgLen = VAR_12;
    VAR_10->next = ((void*)0);
    VAR_10->ahandle = VAR_8;

    if (VAR_13->outType) {
      if (VAR_13->pTail) {
        VAR_13->pTail->next = VAR_10;
        VAR_13->pTail = VAR_10;
      } else {
        VAR_13->pTail = VAR_10;
        VAR_13->pHead = VAR_10;
      }

      FUNC_5("%s cid:%d sid:%d id:%s, msg:%s is put into queue pConn:%p", VAR_14->label, VAR_13->chann, VAR_13->sid,
             VAR_13->meterId, VAR_2[VAR_16], VAR_13);
      VAR_12 = 0;

    } else {
      FUNC_0(VAR_13->pMsgNode == ((void*)0));
      if (VAR_13->pMsgNode) {
        FUNC_4("%s cid:%d sid:%d id:%s, bug, there shall be no pengding req pConn:%p", VAR_14->label, VAR_13->chann,
               VAR_13->sid, VAR_13->meterId, VAR_13);
      }

      VAR_13->outType = VAR_16;
      VAR_13->outTranId = VAR_9->tranId;
      VAR_13->pMsgNode = VAR_10;
      VAR_13->rspReceived = 0;
      if (VAR_10->ahandle) VAR_13->ahandle = VAR_10->ahandle;
    }
  }

  if (VAR_12) {
    FUNC_8(VAR_13, (char *)VAR_9, VAR_12);
    if (VAR_16 & 1U) {
      FUNC_9(VAR_3, VAR_4, VAR_13, VAR_15->tmrCtrl, &VAR_13->pTimer);
    }
  }

  FUNC_3(&VAR_15->mutex);

  return VAR_7;
}
