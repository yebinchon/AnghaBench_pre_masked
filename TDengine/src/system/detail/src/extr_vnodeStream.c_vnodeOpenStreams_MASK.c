
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sqlLen; int * pStream; int lastKey; int pSql; int meterId; int vnode; } ;
struct TYPE_7__ {int maxSessions; char* acct; } ;
struct TYPE_8__ {scalar_t__ streamRole; int numOfStreams; int * dbConn; int * streamTimer; int vnode; TYPE_1__ cfg; TYPE_3__** meterList; } ;
typedef TYPE_2__ SVnodeObj ;
typedef TYPE_3__ SMeterObj ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,int,int ,int ) ;
 int FUNC_2 (char*,char*,char*) ;
 int FUNC_3 (void (*) (void*,void*),int,void*,int ,int **) ;
 int FUNC_4 (int **) ;
 int * FUNC_5 (int *,char*,int ,char*,int ) ;
 int * FUNC_6 (int *,int ,int ,int ,TYPE_3__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_8 (TYPE_3__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_9(void *VAR_5, void *VAR_6) {
  SVnodeObj *VAR_7 = (SVnodeObj *)VAR_5;
  SMeterObj *VAR_8;

  if (VAR_7->streamRole == 0) return;
  if (VAR_7->meterList == ((void*)0)) return;

  FUNC_4(&VAR_7->streamTimer);
  VAR_7->streamTimer = ((void*)0);

  for (int VAR_9 = 0; VAR_9 < VAR_7->cfg.maxSessions; ++VAR_9) {
    VAR_8 = VAR_7->meterList[VAR_9];
    if (VAR_8 == ((void*)0) || VAR_8->sqlLen == 0 || FUNC_8(VAR_8, VAR_0)) continue;

    FUNC_1("vid:%d sid:%d id:%s, open stream:%s", VAR_8->vnode, VAR_9, VAR_8->meterId, VAR_8->pSql);

    if (VAR_7->dbConn == ((void*)0)) {
      char VAR_10[64] = {0};
      char VAR_11[64] = {0};
      FUNC_7(VAR_8, VAR_10);
      FUNC_2(VAR_11, "_%s", VAR_7->cfg.acct);
      VAR_7->dbConn = FUNC_5(((void*)0), VAR_11, VAR_1, VAR_10, 0);
    }

    if (VAR_7->dbConn == ((void*)0)) {
      FUNC_0("vid:%d, failed to connect to mgmt node", VAR_7->vnode);
      FUNC_3(FUNC_9, 1000, VAR_5, VAR_4, &VAR_7->streamTimer);
      return;
    }

    if (VAR_8->pStream == ((void*)0)) {
      VAR_8->pStream = FUNC_6(VAR_7->dbConn, VAR_8->pSql, VAR_3, VAR_8->lastKey, VAR_8,
                                       VAR_2);
      if (VAR_8->pStream) VAR_7->numOfStreams++;
    }
  }
}
