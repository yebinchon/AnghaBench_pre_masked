
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_4__ {int Msg; int HubName; } ;
typedef TYPE_1__ RPC_MSG ;
typedef int PACK ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int ,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 char* FUNC_6 (scalar_t__) ;

void FUNC_7(RPC_MSG *VAR_0, PACK *VAR_1)
{
 UINT VAR_2;
 char *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_5(VAR_0, sizeof(RPC_MSG));

 FUNC_4(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_2 = FUNC_3(VAR_1, "Msg");
 VAR_3 = FUNC_6(VAR_2 + 8);
 FUNC_2(VAR_1, "Msg", VAR_3);
 VAR_0->Msg = FUNC_0(VAR_3);
 FUNC_1(VAR_3);
}
