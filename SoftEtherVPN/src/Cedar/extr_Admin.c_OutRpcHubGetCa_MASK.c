
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Cert; int Key; int HubName; } ;
typedef TYPE_1__ RPC_HUB_GET_CA ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(PACK *VAR_0, RPC_HUB_GET_CA *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "HubName", VAR_1->HubName);
 FUNC_0(VAR_0, "Key", VAR_1->Key);
 FUNC_2(VAR_0, "Cert", VAR_1->Cert);
}
