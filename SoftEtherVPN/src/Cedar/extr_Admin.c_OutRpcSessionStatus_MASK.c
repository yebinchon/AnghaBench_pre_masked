
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int NodeInfo; int Status; int ClientIpAddress; int ClientHostName; int ClientIp6; int ClientIp; int RealUsername; int GroupName; int Username; int Name; int HubName; } ;
typedef TYPE_1__ RPC_SESSION_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ) ;

void FUNC_6(PACK *VAR_0, RPC_SESSION_STATUS *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, "HubName", VAR_1->HubName);
 FUNC_5(VAR_0, "Name", VAR_1->Name);
 FUNC_5(VAR_0, "Username", VAR_1->Username);
 FUNC_5(VAR_0, "GroupName", VAR_1->GroupName);
 FUNC_5(VAR_0, "RealUsername", VAR_1->RealUsername);
 FUNC_4(VAR_0, "SessionStatus_ClientIp", VAR_1->ClientIp);
 FUNC_2(VAR_0, "SessionStatus_ClientIp6", VAR_1->ClientIp6, sizeof(VAR_1->ClientIp6));
 FUNC_5(VAR_0, "SessionStatus_ClientHostName", VAR_1->ClientHostName);
 FUNC_3(VAR_0, "Client_Ip_Address", &VAR_1->ClientIpAddress);

 FUNC_0(VAR_0, &VAR_1->Status);
 FUNC_1(VAR_0, &VAR_1->NodeInfo);
}
