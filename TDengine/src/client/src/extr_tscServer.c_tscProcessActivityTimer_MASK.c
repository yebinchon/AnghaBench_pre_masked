
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int command; } ;
struct TYPE_12__ {void* pTimer; struct TYPE_12__* pHb; struct TYPE_12__* thandle; struct TYPE_12__* signature; struct TYPE_12__* pTscObj; struct TYPE_12__* param; TYPE_9__ cmd; int fp; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_1__ SSqlObj ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_9__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (char*,TYPE_1__*,TYPE_1__*) ;

void FUNC_9(void *VAR_4, void *VAR_5) {
  STscObj *VAR_6 = (STscObj *)VAR_4;

  if (VAR_6 == ((void*)0)) return;
  if (VAR_6->signature != VAR_6) return;
  if (VAR_6->pTimer != VAR_5) return;

  if (VAR_6->pHb == ((void*)0)) {
    SSqlObj *VAR_7 = (SSqlObj *)FUNC_0(1, sizeof(SSqlObj));
    if (((void*)0) == VAR_7) return;

    VAR_7->fp = VAR_3;
    VAR_7->cmd.command = VAR_2;
    if (VAR_0 != FUNC_3(&(VAR_7->cmd), VAR_1)) {
      FUNC_2(VAR_7);
      return;
    }

    VAR_7->param = VAR_6;
    VAR_7->pTscObj = VAR_6;
    VAR_7->signature = VAR_7;
    VAR_6->pHb = VAR_7;
    FUNC_8("%p pHb is allocated, pObj:%p", VAR_6->pHb, VAR_6);
  }

  if (FUNC_7(VAR_6->pHb)) {
    FUNC_8("%p free HB object and release connection, pConn:%p", VAR_6, VAR_6->pHb->thandle);
    FUNC_1(VAR_6->pHb->thandle);

    FUNC_5(VAR_6->pHb);
    FUNC_4(VAR_6);
    return;
  }

  FUNC_6(VAR_6->pHb);
}
