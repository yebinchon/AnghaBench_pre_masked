
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int SERVER ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,scalar_t__,int,int) ;

void FUNC_3(SERVER *VAR_0, FOLDER *VAR_1)
{
 bool VAR_2;
 UINT VAR_3;
 bool VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_0(VAR_1, "Enabled");
 VAR_3 = FUNC_1(VAR_1, "Port");
 VAR_4 = FUNC_0(VAR_1, "DisableDos");

 if (VAR_3 == 0)
 {
  return;
 }

 FUNC_2(VAR_0, VAR_3, VAR_2, VAR_4);
}
