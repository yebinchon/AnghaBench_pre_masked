
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* SystemExpires; void* SystemId; int Valid; } ;
typedef TYPE_1__ RPC_EL_LICENSE_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,char*) ;
 void* FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(RPC_EL_LICENSE_STATUS *VAR_0, PACK *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_0, sizeof(RPC_EL_LICENSE_STATUS));

 VAR_0->Valid = FUNC_0(VAR_1, "Valid");
 VAR_0->SystemId = FUNC_1(VAR_1, "SystemId");
 VAR_0->SystemExpires = FUNC_1(VAR_1, "SystemExpires");
}
