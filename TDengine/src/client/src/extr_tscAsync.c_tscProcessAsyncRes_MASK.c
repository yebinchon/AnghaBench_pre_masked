
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ ahandle; } ;
struct TYPE_13__ {int command; } ;
struct TYPE_11__ {int code; int numOfRows; } ;
struct TYPE_12__ {int param; int (* fp ) (int ,void*,int) ;int (* fetchFp ) (int ,void*,int) ;int * thandle; int vnode; int ip; int * pStream; TYPE_2__ res; TYPE_4__ cmd; TYPE_1__* pTscObj; } ;
struct TYPE_10__ {int user; } ;
typedef TYPE_1__ STscObj ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SSqlCmd ;
typedef TYPE_5__ SSchedMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (int ,int *,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__* VAR_4 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,TYPE_3__*) ;

void FUNC_6(SSchedMsg *VAR_5) {
  SSqlObj *VAR_6 = (SSqlObj *)VAR_5->ahandle;
  STscObj *VAR_7 = VAR_6->pTscObj;
  SSqlCmd *VAR_8 = &VAR_6->cmd;
  SSqlRes *VAR_9 = &VAR_6->res;

  void *VAR_10 = VAR_6;


  int VAR_11 = VAR_8->command;
  int VAR_12 = VAR_9->code ? -VAR_9->code : VAR_9->numOfRows;

  if ((VAR_4[VAR_11] == 0 || (VAR_12 != VAR_1 && VAR_12 != VAR_0)) &&
      VAR_6->pStream == ((void*)0)) {
    if (VAR_6->thandle) FUNC_2(VAR_3, VAR_6->thandle, VAR_6->ip, VAR_6->vnode, VAR_7->user);

    VAR_6->thandle = ((void*)0);
  }


  bool VAR_13 = FUNC_4(VAR_6);

  if (VAR_11 == VAR_2) {
    FUNC_0(VAR_6->fp != ((void*)0));
    VAR_6->fp = VAR_6->fetchFp;
  }

  (*VAR_6->fp)(VAR_6->param, VAR_10, VAR_12);

  if (VAR_13) {
    FUNC_3(VAR_6);
    FUNC_5("%p Async sql is automatically freed in async res", VAR_6);
  }
}
