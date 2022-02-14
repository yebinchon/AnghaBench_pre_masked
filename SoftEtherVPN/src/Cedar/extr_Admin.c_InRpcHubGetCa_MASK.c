
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Cert; int Key; int HubName; } ;
typedef TYPE_1__ RPC_HUB_GET_CA ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_1__*,int) ;

void FUNC_4(RPC_HUB_GET_CA *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_3(VAR_0, sizeof(RPC_HUB_GET_CA));
 FUNC_1(VAR_1, "HubName", VAR_0->HubName, sizeof(VAR_0->HubName));
 VAR_0->Key = FUNC_0(VAR_1, "Key");
 VAR_0->Cert = FUNC_2(VAR_1, "Cert");
}
