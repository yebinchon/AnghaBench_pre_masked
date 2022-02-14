
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int KeepConnectInterval; int KeepConnectProtocol; int KeepConnectPort; int KeepConnectHost; int UseKeepConnect; } ;
typedef TYPE_1__ RPC_KEEP ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(PACK *VAR_0, RPC_KEEP *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "UseKeepConnect", VAR_1->UseKeepConnect);
 FUNC_2(VAR_0, "KeepConnectHost", VAR_1->KeepConnectHost);
 FUNC_1(VAR_0, "KeepConnectPort", VAR_1->KeepConnectPort);
 FUNC_1(VAR_0, "KeepConnectProtocol", VAR_1->KeepConnectProtocol);
 FUNC_1(VAR_0, "KeepConnectInterval", VAR_1->KeepConnectInterval);
}
