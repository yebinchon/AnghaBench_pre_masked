
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACK ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,void*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,char*) ;
 int VAR_1 ;

PACK *FUNC_4(char *VAR_2, char *VAR_3, void *VAR_4)
{
 PACK *VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_5 = FUNC_0();
 FUNC_3(VAR_5, "method", "login");
 FUNC_3(VAR_5, "hubname", VAR_2);
 FUNC_3(VAR_5, "username", VAR_3);
 FUNC_2(VAR_5, "authtype", VAR_0);
 FUNC_1(VAR_5, "secure_password", VAR_4, VAR_1);

 return VAR_5;
}
