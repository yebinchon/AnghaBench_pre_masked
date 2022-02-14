
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int mutex; int qhandle; } ;
struct TYPE_10__ {int chann; int rspReceived; int ahandle; scalar_t__ outType; int meterId; int sid; TYPE_1__* pServer; } ;
struct TYPE_9__ {TYPE_3__* thandle; int ahandle; int * msg; int fp; } ;
struct TYPE_8__ {int label; TYPE_4__* channList; } ;
typedef TYPE_1__ STaosRpc ;
typedef TYPE_2__ SSchedMsg ;
typedef TYPE_3__ SRpcConn ;
typedef TYPE_4__ SRpcChann ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int,int ,int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (int ,TYPE_2__*) ;

void FUNC_5(void *VAR_1) {
  SRpcConn * VAR_2 = (SRpcConn *)VAR_1;
  STaosRpc * VAR_3 = VAR_2->pServer;
  SRpcChann *VAR_4 = VAR_3->channList + VAR_2->chann;

  FUNC_2("%s cid:%d sid:%d id:%s, stop the connection pConn:%p", VAR_3->label, VAR_2->chann, VAR_2->sid,
         VAR_2->meterId, VAR_2);

  FUNC_0(&VAR_4->mutex);

  if (VAR_2->outType) {
    VAR_2->rspReceived = 1;
    SSchedMsg VAR_5;
    VAR_5.fp = VAR_0;
    VAR_5.msg = ((void*)0);
    VAR_5.ahandle = VAR_2->ahandle;
    VAR_5.thandle = VAR_2;
    FUNC_1(&VAR_4->mutex);

    FUNC_4(VAR_4->qhandle, &VAR_5);
  } else {
    FUNC_1(&VAR_4->mutex);
    FUNC_3(VAR_2);
  }
}
