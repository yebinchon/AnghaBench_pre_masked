
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ sqlLen; int vnode; scalar_t__ pStream; int lastKey; int pSql; int meterId; int sid; } ;
struct TYPE_7__ {scalar_t__ streamRole; int numOfStreams; int * dbConn; int * streamTimer; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SMeterObj ;


 int FUNC_0 (char*,int,int ,int ,int ) ;
 int FUNC_1 (int ,int,TYPE_1__*,int ,int **) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,TYPE_2__*,int ) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_3(SMeterObj *VAR_5) {
  if (VAR_5->sqlLen <= 0) return;

  SVnodeObj *VAR_6 = VAR_1 + VAR_5->vnode;

  if (VAR_6->streamRole == 0) return;
  if (VAR_5->pStream) return;

  FUNC_0("vid:%d sid:%d id:%s stream:%s is created", VAR_5->vnode, VAR_5->sid, VAR_5->meterId, VAR_5->pSql);
  if (VAR_6->dbConn == ((void*)0)) {
    if (VAR_6->streamTimer == ((void*)0)) FUNC_1(VAR_2, 1000, VAR_6, VAR_4, &VAR_6->streamTimer);
  } else {
    VAR_5->pStream = FUNC_2(VAR_6->dbConn, VAR_5->pSql, VAR_3, VAR_5->lastKey, VAR_5,
                                     VAR_0);
    if (VAR_5->pStream) VAR_6->numOfStreams++;
  }
}
