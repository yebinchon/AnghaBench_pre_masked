
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACK ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,char*) ;

PACK *FUNC_3(char *VAR_1, char *VAR_2)
{
 PACK *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_0();
 FUNC_2(VAR_3, "method", "login");
 FUNC_2(VAR_3, "hubname", VAR_1);
 FUNC_2(VAR_3, "username", VAR_2);
 FUNC_1(VAR_3, "authtype", VAR_0);

 return VAR_3;
}
