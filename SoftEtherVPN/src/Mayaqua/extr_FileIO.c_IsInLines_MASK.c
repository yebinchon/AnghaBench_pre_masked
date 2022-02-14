
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BUF ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;

bool FUNC_7(BUF *VAR_0, char *VAR_1, bool VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_3(VAR_1))
 {
  return 0;
 }

 FUNC_4(VAR_0);

 while (VAR_3 == 0)
 {
  char *VAR_4 = FUNC_0(VAR_0);

  if (VAR_4 == ((void*)0))
  {
   break;
  }

  FUNC_6(VAR_4);

  if (FUNC_3(VAR_4) == 0)
  {
   if (FUNC_5(VAR_4, VAR_1) == 0)
   {
    VAR_3 = 1;
   }

   if (VAR_2)
   {
    if (FUNC_2(VAR_1, VAR_4))
    {
     VAR_3 = 1;
    }

    if (FUNC_2(VAR_4, VAR_1))
    {
     VAR_3 = 1;
    }
   }
  }

  FUNC_1(VAR_4);
 }

 return VAR_3;
}
