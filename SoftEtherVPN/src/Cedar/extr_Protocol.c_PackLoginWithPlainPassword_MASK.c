
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACK ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,void*) ;

PACK *FUNC_3(char *VAR_1, char *VAR_2, void *VAR_3)
{
 PACK *VAR_4;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_0();
 FUNC_2(VAR_4, "method", "login");
 FUNC_2(VAR_4, "hubname", VAR_1);
 FUNC_2(VAR_4, "username", VAR_2);
 FUNC_1(VAR_4, "authtype", VAR_0);
 FUNC_2(VAR_4, "plain_password", VAR_3);

 return VAR_4;
}
