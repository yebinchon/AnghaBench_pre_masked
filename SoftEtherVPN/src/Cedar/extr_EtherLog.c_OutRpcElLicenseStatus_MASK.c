
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int SystemExpires; int SystemId; int Valid; } ;
typedef TYPE_1__ RPC_EL_LICENSE_STATUS ;
typedef int PACK ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;

void FUNC_3(PACK *VAR_0, RPC_EL_LICENSE_STATUS *VAR_1)
{

 if (VAR_1 == ((void*)0) || VAR_0 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_0, "Valid", VAR_1->Valid);
 FUNC_1(VAR_0, "SystemId", VAR_1->SystemId);
 FUNC_2(VAR_0, "SystemExpires", VAR_1->SystemExpires);
}
