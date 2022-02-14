
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_18__ {int numOfIps; int * ip; int * ipstr; } ;
struct TYPE_16__ {int numOfIps; int * ip; } ;
struct TYPE_17__ {scalar_t__ streamId; scalar_t__ queryId; scalar_t__ killConnection; TYPE_4__ ipList; } ;
struct TYPE_14__ {scalar_t__ pRsp; } ;
struct TYPE_15__ {TYPE_2__ res; } ;
struct TYPE_13__ {int pTimer; TYPE_3__* pHb; struct TYPE_13__* signature; } ;
typedef int TAOS_RES ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SIpList ;
typedef TYPE_5__ SHeartBeatRsp ;


 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,int,TYPE_1__*,int ,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (char*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 TYPE_6__ VAR_1 ;
 int FUNC_7 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (char*,...) ;

void FUNC_9(void *VAR_4, TAOS_RES *VAR_5, int VAR_6) {
  STscObj *VAR_7 = (STscObj *)VAR_4;
  if (VAR_7 == ((void*)0)) return;
  if (VAR_7 != VAR_7->signature) {
    FUNC_3("heart beat msg, pObj:%p, signature:%p invalid", VAR_7, VAR_7->signature);
    return;
  }

  SSqlObj *VAR_8 = VAR_7->pHb;
  SSqlRes *VAR_9 = &VAR_8->res;

  if (VAR_6 == 0) {
    SHeartBeatRsp *VAR_10 = (SHeartBeatRsp *)VAR_9->pRsp;
    if (VAR_10->killConnection) {
      FUNC_4(VAR_7);
    } else {
      if (VAR_10->queryId) FUNC_5(VAR_7, VAR_10->queryId);
      if (VAR_10->streamId) FUNC_6(VAR_7, VAR_10->streamId);
    }
  } else {
    FUNC_8("heart beat failed, code:%d", VAR_6);
  }

  FUNC_1(VAR_2, VAR_0 * 500, VAR_7, VAR_3, &VAR_7->pTimer);
}
