
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int UseSecureDeviceId; } ;
struct TYPE_6__ {int DeviceId; } ;
typedef TYPE_1__ RPC_USE_SECURE ;
typedef TYPE_2__ CLIENT ;


 int FUNC_0 (TYPE_2__*) ;

bool FUNC_1(CLIENT *VAR_0, RPC_USE_SECURE *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }
 VAR_0->UseSecureDeviceId = VAR_1->DeviceId;

 FUNC_0(VAR_0);

 return 1;
}
