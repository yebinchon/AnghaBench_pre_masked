
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int SOCK ;
typedef int PACK ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int *) ;
 int FUNC_3 (int *,int *) ;

void FUNC_4(SOCK *VAR_0, wchar_t *VAR_1)
{
 PACK *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_1();
 FUNC_2(VAR_2, "string", VAR_1);
 FUNC_3(VAR_0, VAR_2);
 FUNC_0(VAR_2);
}
