
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int UseSecureDeviceId; } ;
struct TYPE_5__ {int DeviceId; } ;
typedef TYPE_1__ RPC_USE_SECURE ;
typedef TYPE_2__ CLIENT ;



bool FUNC_0(CLIENT *VAR_0, RPC_USE_SECURE *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_1->DeviceId = VAR_0->UseSecureDeviceId;

 return 1;
}
