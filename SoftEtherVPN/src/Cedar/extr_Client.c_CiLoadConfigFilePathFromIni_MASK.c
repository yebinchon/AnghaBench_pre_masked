
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int LIST ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 char* FUNC_2 (int *,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (char*,int ,char*) ;

bool FUNC_6(char *VAR_0, UINT VAR_1)
{
 char *VAR_2;
 LIST *VAR_3;
 bool VAR_4 = 0;


 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_1();

 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_5(VAR_0, VAR_1, "");

 VAR_2 = FUNC_2(VAR_3, "ConfigPath");
 FUNC_4(VAR_0, VAR_1, VAR_2);

 if (FUNC_3(VAR_0) == 0)
 {
  VAR_4 = 1;
 }
 else
 {
  VAR_4 = 0;
 }

 FUNC_0(VAR_3);

 return VAR_4;
}
