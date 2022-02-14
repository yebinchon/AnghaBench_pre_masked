
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {size_t NumPort; int ControllerOnly; int Weight; int MemberPasswordPlaintext; int MemberPassword; int ControllerPort; int ControllerName; int PublicIp; int * Ports; int ServerType; } ;
typedef TYPE_1__ RPC_FARM ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int ,size_t,size_t) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,char*,int ) ;

void FUNC_6(PACK *VAR_0, RPC_FARM *VAR_1)
{
 UINT VAR_2;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, "ServerType", VAR_1->ServerType);
 for (VAR_2 = 0;VAR_2 < VAR_1->NumPort;VAR_2++)
 {
  FUNC_3(VAR_0, "Ports", VAR_1->Ports[VAR_2], VAR_2, VAR_1->NumPort);
 }
 FUNC_4(VAR_0, "PublicIp", VAR_1->PublicIp);
 FUNC_5(VAR_0, "ControllerName", VAR_1->ControllerName);
 FUNC_2(VAR_0, "ControllerPort", VAR_1->ControllerPort);
 FUNC_1(VAR_0, "MemberPassword", VAR_1->MemberPassword, sizeof(VAR_1->MemberPassword));
 FUNC_5(VAR_0, "MemberPasswordPlaintext", VAR_1->MemberPasswordPlaintext);
 FUNC_2(VAR_0, "Weight", VAR_1->Weight);
 FUNC_0(VAR_0, "ControllerOnly", VAR_1->ControllerOnly);
}
