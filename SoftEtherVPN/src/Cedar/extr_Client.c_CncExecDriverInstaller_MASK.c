
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SOCK ;
typedef int PACK ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,char*) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;

bool FUNC_9(char *VAR_0)
{
 SOCK *VAR_1 = FUNC_0();
 PACK *VAR_2;
 bool VAR_3;
 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_3();
 FUNC_4(VAR_2, "function", "exec_driver_installer");
 FUNC_4(VAR_2, "arg", VAR_0);

 FUNC_8(VAR_1, VAR_2);
 FUNC_2(VAR_2);

 VAR_2 = FUNC_6(VAR_1);
 if (VAR_2 == ((void*)0))
 {
  FUNC_1(VAR_1);
  FUNC_7(VAR_1);
  return 0;
 }

 VAR_3 = FUNC_5(VAR_2, "ret");

 FUNC_2(VAR_2);

 FUNC_1(VAR_1);
 FUNC_7(VAR_1);

 return VAR_3;
}
