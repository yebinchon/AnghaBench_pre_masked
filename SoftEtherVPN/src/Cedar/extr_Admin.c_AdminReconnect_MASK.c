
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_17__ {int ref; } ;
struct TYPE_16__ {int IsVpnServer; TYPE_2__* Sock; TYPE_3__* Param; int VpnServerHashedPassword; int VpnServerClientName; int VpnServerHubName; int VpnServerClientOption; } ;
struct TYPE_15__ {TYPE_1__* Connection; TYPE_5__* Cedar; } ;
struct TYPE_14__ {int ref; } ;
struct TYPE_13__ {TYPE_2__* FirstSock; } ;
typedef TYPE_2__ SOCK ;
typedef TYPE_3__ SESSION ;
typedef TYPE_4__ RPC ;
typedef TYPE_5__ CEDAR ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_5__*,int *,int ,int ,int *,int ,int *,int*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;

UINT FUNC_7(RPC *VAR_2)
{
 SESSION *VAR_3;
 SOCK *VAR_4;
 CEDAR *VAR_5;
 UINT VAR_6;
 bool VAR_7 = 0;

 if (VAR_2 == ((void*)0) || VAR_2->IsVpnServer == 0)
 {
  return VAR_0;
 }

 VAR_3 = (SESSION *)VAR_2->Param;
 VAR_5 = VAR_3->Cedar;
 FUNC_0(VAR_5->ref);

 VAR_4 = VAR_2->Sock;
 FUNC_2(VAR_4);
 FUNC_6(VAR_4);
 FUNC_5(VAR_3);
 VAR_2->Param = ((void*)0);

 VAR_2->Sock = ((void*)0);

 VAR_3 = FUNC_1(VAR_5, &VAR_2->VpnServerClientOption,
  VAR_2->VpnServerHubName,
  VAR_2->VpnServerHashedPassword,
  &VAR_6,
  VAR_2->VpnServerClientName, ((void*)0), &VAR_7);

 FUNC_4(VAR_5);

 if (VAR_3 == ((void*)0))
 {
  return VAR_6;
 }

 if (VAR_7)
 {
  FUNC_3(VAR_2->VpnServerHashedPassword, "");
 }

 VAR_2->Param = VAR_3;
 VAR_2->Sock = VAR_3->Connection->FirstSock;
 FUNC_0(VAR_2->Sock->ref);

 return VAR_1;
}
