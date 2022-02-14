
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int oname ;


 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,int,char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 size_t FUNC_5 (char*) ;

bool FUNC_6(char *VAR_0, char *VAR_1)
{
 char VAR_2[128];

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_2(VAR_1))
 {

  return 0;
 }

 FUNC_1(VAR_2, sizeof(VAR_2), VAR_1);

 if (FUNC_3(VAR_2))
 {
  return 0;
 }

 if (FUNC_4(VAR_2, VAR_0))
 {


  return 1;
 }

 if (FUNC_4(VAR_0, VAR_2))
 {



  if (FUNC_0(VAR_1, &VAR_0[FUNC_5(VAR_2)]))
  {
   return 1;
  }
 }

 return 0;
}
