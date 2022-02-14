
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_18__ {int * payload; int * defaultVal; scalar_t__ allocSize; int command; } ;
struct TYPE_17__ {int * pMeterMeta; int name; } ;
struct TYPE_16__ {int sqlstr; struct TYPE_16__* param; int * fp; TYPE_7__ cmd; int emptyRspSem; int rspSem; struct TYPE_16__* signature; int pTscObj; } ;
typedef TYPE_1__ SSqlObj ;
typedef TYPE_2__ SMeterMetaInfo ;
typedef int SMeterMeta ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 TYPE_2__* FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,int ) ;
 int VAR_5 ;
 int FUNC_8 (char*,TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 TYPE_2__* FUNC_10 (TYPE_7__*,int ) ;
 int * VAR_6 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,TYPE_1__*,TYPE_1__*,...) ;
 int FUNC_13 (int *,int ,int) ;

__attribute__((used)) static int32_t FUNC_14(SSqlObj *VAR_7, char *VAR_8, int32_t VAR_9) {
  int32_t VAR_10 = VAR_2;

  SSqlObj *VAR_11 = FUNC_0(1, sizeof(SSqlObj));
  if (((void*)0) == VAR_11) {
    FUNC_8("%p malloc failed for new sqlobj to get meter meta", VAR_7);
    return VAR_1;
  }
  VAR_11->pTscObj = VAR_7->pTscObj;
  VAR_11->signature = VAR_11;
  VAR_11->cmd.command = VAR_4;
  VAR_11->cmd.payload = ((void*)0);
  VAR_11->cmd.allocSize = 0;

  VAR_11->cmd.defaultVal[0] = VAR_7->cmd.defaultVal[0];
  if (VAR_2 != FUNC_7(&VAR_11->cmd, VAR_3)) {
    FUNC_8("%p malloc failed for payload to get meter meta", VAR_7);
    FUNC_1(VAR_11);
    return VAR_1;
  }

  SMeterMetaInfo *VAR_12 = FUNC_6(&VAR_11->cmd);

  FUNC_3(VAR_12->name, VAR_8);
  FUNC_2(VAR_11->cmd.payload, VAR_7->cmd.payload, VAR_3);
  FUNC_12("%p new pSqlObj:%p to get meterMeta", VAR_7, VAR_11);

  if (VAR_7->fp == ((void*)0)) {
    FUNC_13(&VAR_11->rspSem, 0, 0);
    FUNC_13(&VAR_11->emptyRspSem, 0, 1);

    VAR_10 = FUNC_11(VAR_11);
    SMeterMetaInfo *VAR_13 = FUNC_10(&VAR_7->cmd, VAR_9);


    if (VAR_10 == VAR_2) {
      VAR_13->pMeterMeta = (SMeterMeta *)FUNC_5(VAR_5, VAR_8);
    }

    FUNC_12("%p get meter meta complete, code:%d, pMeterMeta:%p", VAR_7, VAR_10, VAR_13->pMeterMeta);
    FUNC_9(VAR_11);

  } else {
    VAR_11->fp = VAR_6;
    VAR_11->param = VAR_7;
    VAR_11->sqlstr = FUNC_4(VAR_7->sqlstr);

    VAR_10 = FUNC_11(VAR_11);
    if (VAR_10 == VAR_2) {
      VAR_10 = VAR_0;
    }
  }

  return VAR_10;
}
