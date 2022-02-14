
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int mutex; int qhandle; } ;
struct TYPE_9__ {void* signature; int chann; void* pIdleTimer; int rspReceived; int ahandle; int meterId; int sid; TYPE_1__* pServer; } ;
struct TYPE_8__ {TYPE_3__* thandle; int ahandle; int * msg; int fp; } ;
struct TYPE_7__ {int label; TYPE_4__* channList; } ;
typedef TYPE_1__ STaosRpc ;
typedef TYPE_2__ SSchedMsg ;
typedef TYPE_3__ SRpcConn ;
typedef TYPE_4__ SRpcChann ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,void*,void*) ;
 int FUNC_3 (char*,int ,int,int ,int ,TYPE_3__*,...) ;
 int VAR_0 ;
 int FUNC_4 (int ,TYPE_2__*) ;

void FUNC_5(void *VAR_1, void *VAR_2) {
  SRpcConn *VAR_3 = (SRpcConn *)VAR_1;
  if (VAR_3->signature != VAR_1) {
    FUNC_2("idle timer pConn Signature:0x%x, pConn:0x%x not matched", VAR_3->signature, VAR_1);
    return;
  }

  STaosRpc * VAR_4 = VAR_3->pServer;
  SRpcChann *VAR_5 = VAR_4->channList + VAR_3->chann;
  if (VAR_3->pIdleTimer != VAR_2) {
    FUNC_3("%s cid:%d sid:%d id:%s, idle timer:%p already processed pConn:%p", VAR_4->label, VAR_3->chann, VAR_3->sid,
           VAR_3->meterId, VAR_2, VAR_3);
    return;
  }

  FUNC_0(&VAR_5->mutex);

  FUNC_3("%s cid:%d sid:%d id:%s, close the connection since no activity pConn:%p", VAR_4->label, VAR_3->chann,
         VAR_3->sid, VAR_3->meterId, VAR_3);
  if (VAR_3->rspReceived == 0) {
    VAR_3->rspReceived = 1;

    SSchedMsg VAR_6;
    VAR_6.fp = VAR_0;
    VAR_6.msg = ((void*)0);
    VAR_6.ahandle = VAR_3->ahandle;
    VAR_6.thandle = VAR_3;
    FUNC_4(VAR_5->qhandle, &VAR_6);
  }

  FUNC_1(&VAR_5->mutex);
}
