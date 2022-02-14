
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int BUF ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*) ;

BUF *FUNC_2(char *VAR_0, char *VAR_1, UINT VAR_2)
{
 BUF *VAR_3;
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_1(VAR_1, VAR_2, VAR_0);

 return VAR_3;
}
