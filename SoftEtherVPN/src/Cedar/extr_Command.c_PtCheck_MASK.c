
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;
typedef int LIST ;
typedef int CONSOLE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char*,int *,int *,int ) ;
 int FUNC_2 () ;

UINT FUNC_3(CONSOLE *VAR_3, char *VAR_4, wchar_t *VAR_5, void *VAR_6)
{
 LIST *VAR_7;
 UINT VAR_8 = VAR_2;

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, ((void*)0), 0);
 if (VAR_7 == ((void*)0))
 {
  return VAR_1;
 }

 if (FUNC_2() == 0)
 {
  VAR_8 = VAR_0;
 }

 FUNC_0(VAR_7);

 return VAR_8;
}
