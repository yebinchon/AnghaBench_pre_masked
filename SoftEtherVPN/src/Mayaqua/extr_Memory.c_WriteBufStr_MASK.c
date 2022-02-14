
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int BUF ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;

bool FUNC_3(BUF *VAR_0, char *VAR_1)
{
 UINT VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }


 VAR_2 = FUNC_0(VAR_1);
 if (FUNC_2(VAR_0, VAR_2 + 1) == 0)
 {
  return 0;
 }


 FUNC_1(VAR_0, VAR_1, VAR_2);

 return 1;
}
