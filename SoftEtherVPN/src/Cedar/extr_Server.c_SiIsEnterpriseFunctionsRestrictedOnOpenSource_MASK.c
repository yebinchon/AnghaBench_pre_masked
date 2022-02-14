
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int region ;
typedef int CEDAR ;


 int FUNC_0 (int *,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*) ;

bool FUNC_2(CEDAR *VAR_0)
{
 char VAR_1[128];
 bool VAR_2 = 0;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }


 FUNC_0(VAR_0, VAR_1, sizeof(VAR_1));

 if (FUNC_1(VAR_1, "JP") == 0 || FUNC_1(VAR_1, "CN") == 0)
 {
  VAR_2 = 1;
 }

 return VAR_2;
}
