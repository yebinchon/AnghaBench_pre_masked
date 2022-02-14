
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ sqlLen; int vnode; int * pStream; int * pSql; } ;
struct TYPE_5__ {scalar_t__ numOfStreams; int * dbConn; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SMeterObj ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(void *VAR_1) {
  SMeterObj *VAR_2 = (SMeterObj *)VAR_1;
  SVnodeObj *VAR_3 = ((void*)0);

  if (VAR_2 == ((void*)0) || VAR_2->sqlLen == 0) return;
  VAR_3 = VAR_0 + VAR_2->vnode;

  VAR_2->sqlLen = 0;
  VAR_2->pSql = ((void*)0);
  VAR_2->pStream = ((void*)0);

  VAR_3->numOfStreams--;

  if (VAR_3->numOfStreams == 0) {
    FUNC_0(VAR_3->dbConn);
    VAR_3->dbConn = ((void*)0);
  }

  FUNC_1(VAR_2);
}
