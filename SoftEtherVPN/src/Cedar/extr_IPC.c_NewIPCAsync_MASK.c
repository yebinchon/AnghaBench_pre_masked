
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ref; } ;
struct TYPE_10__ {int Thread; TYPE_1__* SockEvent; int Param; TYPE_3__* Cedar; int TubeForDisconnect; } ;
struct TYPE_9__ {int ref; } ;
typedef TYPE_1__ SOCK_EVENT ;
typedef int IPC_PARAM ;
typedef TYPE_2__ IPC_ASYNC ;
typedef TYPE_3__ CEDAR ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (int) ;

IPC_ASYNC *FUNC_5(CEDAR *VAR_1, IPC_PARAM *VAR_2, SOCK_EVENT *VAR_3)
{
 IPC_ASYNC *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_4(sizeof(IPC_ASYNC));

 VAR_4->TubeForDisconnect = FUNC_3(0);

 VAR_4->Cedar = VAR_1;
 FUNC_0(VAR_4->Cedar->ref);

 FUNC_1(&VAR_4->Param, VAR_2, sizeof(IPC_PARAM));

 if (VAR_3 != ((void*)0))
 {
  VAR_4->SockEvent = VAR_3;
  FUNC_0(VAR_4->SockEvent->ref);
 }

 VAR_4->Thread = FUNC_2(VAR_0, VAR_4);

 return VAR_4;
}
