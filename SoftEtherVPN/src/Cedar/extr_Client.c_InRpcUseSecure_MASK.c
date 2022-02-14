
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int DeviceId; } ;
typedef TYPE_1__ RPC_USE_SECURE ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int) ;

void FUNC_2(RPC_USE_SECURE *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, sizeof(RPC_USE_SECURE));
 VAR_0->DeviceId = FUNC_0(VAR_1, "DeviceId");
}
