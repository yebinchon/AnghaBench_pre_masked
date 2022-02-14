
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

bool FUNC_5(char *VAR_1)
{
 char VAR_2[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_2, sizeof(VAR_2), VAR_1);
 FUNC_4(VAR_2);

 if (FUNC_0(VAR_2))
 {
  return 0;
 }

 if (FUNC_3(VAR_2) != 0)
 {
  return 1;
 }

 if (FUNC_1("true", VAR_2))
 {
  return 1;
 }

 if (FUNC_1("yes", VAR_2))
 {
  return 1;
 }

 if (FUNC_1(VAR_2, "true"))
 {
  return 1;
 }

 if (FUNC_1(VAR_2, "yes"))
 {
  return 1;
 }

 return 0;
}
