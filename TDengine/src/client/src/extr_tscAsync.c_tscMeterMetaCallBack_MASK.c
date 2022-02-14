
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_26__ {int name; TYPE_1__* pMeterMeta; } ;
struct TYPE_25__ {scalar_t__ vnodeIdx; TYPE_4__* pParentSqlObj; } ;
struct TYPE_24__ {int type; scalar_t__ vnodeIdx; int command; } ;
struct TYPE_22__ {int code; } ;
struct TYPE_23__ {void* fp; int * pStream; TYPE_5__ cmd; struct TYPE_23__* signature; int * param; int rspSem; int retry; int thandle; TYPE_3__ res; TYPE_2__* pTscObj; } ;
struct TYPE_21__ {int db; int acctId; } ;
struct TYPE_20__ {scalar_t__ numOfTags; } ;
typedef int TAOS_RES ;
typedef TYPE_2__ STscObj ;
typedef TYPE_3__ SSqlRes ;
typedef TYPE_4__ SSqlObj ;
typedef TYPE_5__ SSqlCmd ;
typedef TYPE_6__ SRetrieveSupport ;
typedef TYPE_7__ SMeterMetaInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ,int ,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (char*,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int ,int ) ;
 TYPE_7__* FUNC_7 (TYPE_5__*,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (char*,TYPE_4__*,...) ;
 int FUNC_14 (int *) ;

void FUNC_15(void *VAR_3, TAOS_RES *VAR_4, int VAR_5) {
  SSqlObj *VAR_6 = (SSqlObj *)VAR_3;
  if (VAR_6 == ((void*)0) || VAR_6->signature != VAR_6) return;

  STscObj *VAR_7 = VAR_6->pTscObj;
  SSqlCmd *VAR_8 = &VAR_6->cmd;
  SSqlRes *VAR_9 = &VAR_6->res;

  if (VAR_6->fp == ((void*)0)) {
    FUNC_5("%p callBack is NULL!!!", VAR_6);
    return;
  }

  if (VAR_6->fp == (void *)1) {
    VAR_6->fp = ((void*)0);

    if (VAR_5 != 0) {
      VAR_5 = FUNC_1(VAR_5);
      VAR_9->code = VAR_5;
      FUNC_13("%p failed to renew meterMeta", VAR_6);
      FUNC_14(&VAR_6->rspSem);
    } else {
      FUNC_13("%p renew meterMeta successfully, command:%d, code:%d, thandle:%p, retry:%d",
          VAR_6, VAR_6->cmd.command, VAR_6->res.code, VAR_6->thandle, VAR_6->retry);

      FUNC_2(FUNC_7(&VAR_6->cmd, 0)->pMeterMeta == ((void*)0));
      FUNC_6(VAR_6, FUNC_7(&VAR_6->cmd, 0)->name, 0);

      VAR_5 = FUNC_11(VAR_6);
      if (VAR_5 != 0) {
        VAR_9->code = VAR_5;
        FUNC_14(&VAR_6->rspSem);
      }
    }

    return;
  }

  if (VAR_5 != 0) {
    VAR_9->code = (uint8_t)FUNC_1(VAR_5);
    FUNC_10(VAR_6);
    return;
  }

  if (VAR_6->pStream == ((void*)0)) {

    if ((VAR_6->cmd.type & VAR_2) == VAR_2) {
      SMeterMetaInfo* VAR_10 = FUNC_7(VAR_8, 0);
      FUNC_2(VAR_10->pMeterMeta->numOfTags != 0 && VAR_8->vnodeIdx >= 0 && VAR_6->param != ((void*)0));

      SRetrieveSupport *VAR_11 = (SRetrieveSupport *)VAR_6->param;
      SSqlObj * VAR_12 = VAR_11->pParentSqlObj;
      FUNC_2(VAR_12->signature == VAR_12 && VAR_11->vnodeIdx == VAR_8->vnodeIdx &&
          VAR_10->pMeterMeta->numOfTags != 0);

      FUNC_13("%p get metricMeta during metric query successfully", VAR_6);

      VAR_5 = FUNC_6(VAR_6, FUNC_7(&VAR_6->cmd, 0)->name, 0);
      VAR_9->code = VAR_5;

      if (VAR_5 == VAR_0) return;

      VAR_5 = FUNC_8(VAR_6);
      VAR_9->code = VAR_5;

      if (VAR_5 == VAR_0) return;
    } else {
      VAR_5 = FUNC_3(VAR_6, VAR_7->acctId, VAR_7->db, 0);
      if (VAR_5 == VAR_0) return;
    }

  } else {
    SMeterMetaInfo *VAR_13 = FUNC_7(VAR_8, 0);
    VAR_5 = FUNC_6(VAR_6, VAR_13->name, 0);
    VAR_9->code = VAR_5;

    if (VAR_5 == VAR_0) return;

    VAR_13 = FUNC_7(VAR_8, 0);
    if (VAR_5 == VAR_1 && FUNC_0(VAR_13)) {
      VAR_5 = FUNC_8(VAR_6);
      VAR_9->code = VAR_5;

      if (VAR_5 == VAR_0) return;
    }
  }

  if (VAR_5 != 0) {
    FUNC_10(VAR_6);
    return;
  }

  if (VAR_6->pStream) {
    FUNC_13("%p stream:%p meta is updated, start new query, command:%d", VAR_6, VAR_6->pStream, VAR_6->cmd.command);





    FUNC_12(&VAR_6->cmd);
    FUNC_9(VAR_6->pStream);
  } else {
    FUNC_13("%p get meterMeta/metricMeta successfully", VAR_6);
  }

  FUNC_4(VAR_6);
}
