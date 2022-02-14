
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ServerCert; int CheckServerCert; int Policy; int ClientAuth; int ClientOption; int Online; int HubName; } ;
typedef TYPE_1__ RPC_CREATE_LINK ;
typedef int PACK ;
typedef int BUF ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int * FUNC_7 (int *,int) ;

void FUNC_8(PACK *VAR_0, RPC_CREATE_LINK *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_0, "HubName_Ex",VAR_1->HubName);
 FUNC_4(VAR_0, "Online", VAR_1->Online);
 FUNC_2(VAR_0, VAR_1->ClientOption);
 FUNC_1(VAR_0, VAR_1->ClientAuth);
 FUNC_3(VAR_0, &VAR_1->Policy);

 FUNC_4(VAR_0, "CheckServerCert", VAR_1->CheckServerCert);
 if (VAR_1->ServerCert != ((void*)0))
 {
  BUF *VAR_2;
  VAR_2 = FUNC_7(VAR_1->ServerCert, 0);
  FUNC_5(VAR_0, "ServerCert", VAR_2);
  FUNC_0(VAR_2);
 }
}
