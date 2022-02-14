
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sqlLen; int * pStream; } ;
struct TYPE_5__ {int maxSessions; } ;
struct TYPE_6__ {int numOfStreams; TYPE_3__** meterList; TYPE_1__ cfg; int streamRole; int vnode; } ;
typedef TYPE_2__ SVnodeObj ;
typedef TYPE_3__ SMeterObj ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(SVnodeObj *VAR_0) {
  SMeterObj *VAR_1;
  FUNC_0("vid:%d, stream is closed, old role:%d", VAR_0->vnode, VAR_0->streamRole);


  for (int VAR_2 = 0; VAR_2 < VAR_0->cfg.maxSessions; ++VAR_2) {
    VAR_1 = VAR_0->meterList[VAR_2];
    if (VAR_1 == ((void*)0)) continue;
    if (VAR_1->sqlLen > 0 && VAR_1->pStream) {
      FUNC_1(VAR_1->pStream);
      VAR_0->numOfStreams--;
    }
    VAR_1->pStream = ((void*)0);
  }
}
