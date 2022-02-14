
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ClientBuild; int ClientVer; int ClientStr; } ;
typedef int PACK ;
typedef TYPE_1__ CONNECTION ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int ) ;

void FUNC_2(PACK *VAR_0, CONNECTION *VAR_1)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_0, "client_str", VAR_1->ClientStr);
 FUNC_0(VAR_0, "client_ver", VAR_1->ClientVer);
 FUNC_0(VAR_0, "client_build", VAR_1->ClientBuild);
}
