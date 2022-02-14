
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int msgType; } ;
struct TYPE_10__ {scalar_t__ signature; void* ahandle; TYPE_1__* pServer; } ;
struct TYPE_9__ {scalar_t__ thandle; int * msg; int ahandle; } ;
struct TYPE_8__ {void* (* fp ) (int *,int ,scalar_t__) ;} ;
typedef TYPE_1__ STaosRpc ;
typedef int STaosHeader ;
typedef TYPE_2__ SSchedMsg ;
typedef TYPE_3__ SRpcConn ;
typedef TYPE_4__ SIntMsg ;


 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(SSchedMsg *VAR_0) {
  SIntMsg * VAR_1 = (SIntMsg *)VAR_0->msg;
  SRpcConn *VAR_2 = (SRpcConn *)VAR_0->thandle;
  if (VAR_2 == ((void*)0) || VAR_2->signature != VAR_0->thandle || VAR_2->pServer == ((void*)0)) return;
  STaosRpc *VAR_3 = VAR_2->pServer;

  void *VAR_4 = (*(VAR_3->fp))(VAR_0->msg, VAR_0->ahandle, VAR_0->thandle);

  if (VAR_4 == ((void*)0) || VAR_0->msg == ((void*)0)) {
    FUNC_2(VAR_2);
  } else {
    VAR_2->ahandle = VAR_4;
    if (VAR_1 && ((VAR_1->msgType & 1) == 0)) FUNC_3(VAR_2);
  }

  if (VAR_0->msg) FUNC_0(VAR_0->msg - sizeof(STaosHeader) + sizeof(SIntMsg));
}
