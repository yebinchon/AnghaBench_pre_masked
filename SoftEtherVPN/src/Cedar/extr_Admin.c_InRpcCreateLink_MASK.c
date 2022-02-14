
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ServerCert; void* CheckServerCert; int Policy; void* ClientAuth; void* ClientOption; void* Online; int HubName; } ;
typedef TYPE_1__ RPC_CREATE_LINK ;
typedef int PACK ;
typedef int CLIENT_OPTION ;
typedef int CLIENT_AUTH ;
typedef int BUF ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*,int *) ;
 int FUNC_3 (void*,int *) ;
 int FUNC_4 (int *,int *) ;
 void* FUNC_5 (int *,char*) ;
 int * FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,char*,int ,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 void* FUNC_9 (int) ;

void FUNC_10(RPC_CREATE_LINK *VAR_0, PACK *VAR_1)
{
 BUF *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_8(VAR_0, sizeof(RPC_CREATE_LINK));
 FUNC_7(VAR_1, "HubName_Ex", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->Online = FUNC_5(VAR_1, "Online");
 VAR_0->ClientOption = FUNC_9(sizeof(CLIENT_OPTION));
 FUNC_3(VAR_0->ClientOption, VAR_1);
 VAR_0->ClientAuth = FUNC_9(sizeof(CLIENT_AUTH));
 FUNC_2(VAR_0->ClientAuth, VAR_1);
 FUNC_4(&VAR_0->Policy, VAR_1);

 VAR_0->CheckServerCert = FUNC_5(VAR_1, "CheckServerCert");
 VAR_2 = FUNC_6(VAR_1, "ServerCert");
 if (VAR_2 != ((void*)0))
 {
  VAR_0->ServerCert = FUNC_0(VAR_2, 0);
  FUNC_1(VAR_2);
 }
}
