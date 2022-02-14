
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tmp ;
typedef int rpc_mode ;
typedef int UINT ;
struct TYPE_11__ {int * Sock; } ;
struct TYPE_10__ {TYPE_2__* Rpc; } ;
struct TYPE_9__ {TYPE_1__* Sock; } ;
struct TYPE_8__ {int RemotePort; int RemoteIP; } ;
typedef int SOCK ;
typedef TYPE_3__ REMOTE_CLIENT ;
typedef TYPE_4__ NOTIFY_CLIENT ;


 int * FUNC_0 (char*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int*,int,int) ;
 TYPE_4__* FUNC_5 (int) ;

NOTIFY_CLIENT *FUNC_6(REMOTE_CLIENT *VAR_1)
{
 NOTIFY_CLIENT *VAR_2;
 SOCK *VAR_3;
 char VAR_4[VAR_0];
 bool VAR_5 = 0;
 UINT VAR_6;

 if (VAR_1 == ((void*)0) || VAR_1->Rpc == ((void*)0) || VAR_1->Rpc->Sock == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_2(VAR_4, sizeof(VAR_4), &VAR_1->Rpc->Sock->RemoteIP);
 VAR_6 = VAR_1->Rpc->Sock->RemotePort;

 VAR_3 = FUNC_0(VAR_4, VAR_6);
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_1(VAR_5);
 if (FUNC_4(VAR_3, &VAR_5, sizeof(VAR_5), 0) == 0)
 {
  FUNC_3(VAR_3);
  return ((void*)0);
 }

 VAR_2 = FUNC_5(sizeof(NOTIFY_CLIENT));
 VAR_2->Sock = VAR_3;

 return VAR_2;
}
