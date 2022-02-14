
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TapMode; int HubName; int DeviceName; } ;
typedef TYPE_1__ RPC_LOCALBRIDGE ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, RPC_LOCALBRIDGE *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "DeviceName", VAR_1->DeviceName);
 FUNC_1(VAR_0, "HubNameLB", VAR_1->HubName);
 FUNC_0(VAR_0, "TapMode", VAR_1->TapMode);
}
