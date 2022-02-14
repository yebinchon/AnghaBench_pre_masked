
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int UINT ;
typedef int BUF ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int ,char*) ;
 int FUNC_8 (char*) ;

bool FUNC_9(wchar_t *VAR_0, char *VAR_1, UINT VAR_2)
{
 BUF *VAR_3;
 bool VAR_4 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_5(VAR_0);
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 while (1)
 {
  char *VAR_5 = FUNC_0(VAR_3);

  if (VAR_5 == ((void*)0))
  {
   break;
  }

  FUNC_8(VAR_5);

  if (FUNC_4(VAR_5) == 0)
  {
   if (FUNC_6(VAR_5, "#") == 0 && FUNC_6(VAR_5, "//") == 0 && FUNC_6(VAR_5, ";") == 0 &&
    FUNC_3(VAR_5, "#") == 0)
   {
    FUNC_7(VAR_1, VAR_2, VAR_5);
    VAR_4 = 1;
   }
  }

  FUNC_1(VAR_5);
 }

 FUNC_2(VAR_3);

 return VAR_4;
}
