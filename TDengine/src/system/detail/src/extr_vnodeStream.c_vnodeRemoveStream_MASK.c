
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int vnode; scalar_t__ sqlLen; int meterId; int sid; int * pStream; } ;
struct TYPE_5__ {scalar_t__ numOfStreams; int * dbConn; } ;
typedef TYPE_1__ SVnodeObj ;
typedef TYPE_2__ SMeterObj ;


 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;

void FUNC_3(SMeterObj *VAR_1) {
  SVnodeObj *VAR_2 = VAR_0 + VAR_1->vnode;
  if (VAR_1->sqlLen <= 0) return;

  if (VAR_1->pStream) {
    FUNC_2(VAR_1->pStream);
    VAR_2->numOfStreams--;
  }

  VAR_1->pStream = ((void*)0);
  if (VAR_2->numOfStreams == 0) {
    FUNC_1(VAR_2->dbConn);
    VAR_2->dbConn = ((void*)0);
  }

  FUNC_0("vid:%d sid:%d id:%d stream is removed", VAR_1->vnode, VAR_1->sid, VAR_1->meterId);
}
