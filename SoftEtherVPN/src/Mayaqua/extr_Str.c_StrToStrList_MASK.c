
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int LIST ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 char* FUNC_5 (scalar_t__) ;

LIST *FUNC_6(char *VAR_0, UINT VAR_1)
{
 LIST *VAR_2;
 char *VAR_3;
 UINT VAR_4;
 UINT VAR_5;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_1(((void*)0));

 VAR_5 = 0;
 while (1)
 {
  if (VAR_5 >= VAR_1)
  {
   break;
  }
  if (*VAR_0 == 0)
  {
   break;
  }

  VAR_4 = FUNC_4(VAR_0);
  VAR_3 = FUNC_5(VAR_4);
  FUNC_2(VAR_3, VAR_4, VAR_0);
  FUNC_0(VAR_2, VAR_3);
  VAR_0 += FUNC_3(VAR_0) + 1;
  VAR_5++;
 }

 return VAR_2;
}
