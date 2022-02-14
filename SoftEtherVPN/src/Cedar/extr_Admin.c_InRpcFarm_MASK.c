
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_4__ {int NumPort; int ControllerOnly; void* Weight; int MemberPasswordPlaintext; int MemberPassword; void* ControllerPort; int ControllerName; int PublicIp; int * Ports; void* ServerType; } ;
typedef TYPE_1__ RPC_FARM ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,size_t) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,int ,int) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int * FUNC_8 (int) ;

void FUNC_9(RPC_FARM *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_7(VAR_0, sizeof(RPC_FARM));
 VAR_0->ServerType = FUNC_3(VAR_1, "ServerType");
 VAR_0->NumPort = FUNC_2(VAR_1, "Ports");
 VAR_0->Ports = FUNC_8(sizeof(UINT) * VAR_0->NumPort);
 for (VAR_2 = 0;VAR_2 < VAR_0->NumPort;VAR_2++)
 {
  VAR_0->Ports[VAR_2] = FUNC_4(VAR_1, "Ports", VAR_2);
 }
 VAR_0->PublicIp = FUNC_5(VAR_1, "PublicIp");
 FUNC_6(VAR_1, "ControllerName", VAR_0->ControllerName, sizeof(VAR_0->ControllerName));
 VAR_0->ControllerPort = FUNC_3(VAR_1, "ControllerPort");
 FUNC_1(VAR_1, "MemberPassword", VAR_0->MemberPassword, sizeof(VAR_0->MemberPassword));
 FUNC_6(VAR_1, "MemberPasswordPlaintext", VAR_0->MemberPasswordPlaintext, sizeof(VAR_0->MemberPasswordPlaintext));
 VAR_0->Weight = FUNC_3(VAR_1, "Weight");
 VAR_0->ControllerOnly = FUNC_0(VAR_1, "ControllerOnly");
}
