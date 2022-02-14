
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Msg; int HubName; } ;
typedef TYPE_1__ RPC_MSG ;
typedef int PACK ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*,char*,int ) ;
 int FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(PACK *VAR_0, RPC_MSG *VAR_1)
{
 UINT VAR_2;
 char *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, "HubName", VAR_1->HubName);
 VAR_3 = FUNC_0(VAR_1->Msg);
 VAR_2 = FUNC_4(VAR_3);
 FUNC_2(VAR_0, "Msg", VAR_3, VAR_2);
 FUNC_1(VAR_3);
}
