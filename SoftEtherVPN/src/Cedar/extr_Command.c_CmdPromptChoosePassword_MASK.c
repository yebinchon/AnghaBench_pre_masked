
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int CONSOLE ;


 char* FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*) ;

wchar_t *FUNC_3(CONSOLE *VAR_0, void *VAR_1)
{
 char *VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_0);

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }
 else
 {
  wchar_t *VAR_3 = FUNC_1(VAR_2);

  FUNC_2(VAR_2);

  return VAR_3;
 }
}
