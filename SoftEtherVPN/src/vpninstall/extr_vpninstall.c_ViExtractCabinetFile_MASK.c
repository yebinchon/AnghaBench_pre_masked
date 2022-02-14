
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BUF ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (char*,int ,char*) ;

bool FUNC_3(char *VAR_1, char *VAR_2)
{
 BUF *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_0, "CABINET");
 if (VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_3, VAR_2) == 0)
 {
  FUNC_1(VAR_3);

  return 0;
 }

 FUNC_1(VAR_3);

 return 1;
}
