
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int SERVER ;
typedef int PACK ;
typedef int FARM_MEMBER ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,char*) ;
 int * FUNC_4 (int *,int *,char*) ;

void FUNC_5(SERVER *VAR_0, FARM_MEMBER *VAR_1, char *VAR_2, UINT VAR_3)
{
 PACK *VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_4 = FUNC_1();
 FUNC_3(VAR_4, "HubName", VAR_2);
 FUNC_2(VAR_4, "Key", VAR_3);

 VAR_4 = FUNC_4(VAR_1, VAR_4, "deleteiptable");

 FUNC_0(VAR_4);
}
