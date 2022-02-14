
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SERVER ;
typedef int RPC_ENUM_DHCP ;
typedef int PACK ;
typedef int FARM_MEMBER ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 (int *,int *,char*) ;
 int FUNC_5 (int *,int) ;

void FUNC_6(SERVER *VAR_0, FARM_MEMBER *VAR_1, char *VAR_2, RPC_ENUM_DHCP *VAR_3)
{
 PACK *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_2();
 FUNC_3(VAR_4, "HubName", VAR_2);

 VAR_4 = FUNC_4(VAR_1, VAR_4, "enumdhcp");

 FUNC_5(VAR_3, sizeof(RPC_ENUM_DHCP));
 FUNC_1(VAR_3, VAR_4);

 FUNC_0(VAR_4);
}
