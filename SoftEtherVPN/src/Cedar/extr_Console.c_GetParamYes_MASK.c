
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int LIST ;


 char* FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

bool FUNC_5(LIST *VAR_0, char *VAR_1)
{
 char *VAR_2;
 char VAR_3[64];

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_3, sizeof(VAR_3), VAR_2);
 FUNC_4(VAR_3);

 if (FUNC_1(VAR_3, "y"))
 {
  return 1;
 }

 if (FUNC_1(VAR_3, "t"))
 {
  return 1;
 }

 if (FUNC_3(VAR_3) != 0)
 {
  return 1;
 }

 return 0;
}
