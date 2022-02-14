
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IP ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int *,int *) ;

bool FUNC_4(char *VAR_0, IP *VAR_1, IP *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_3(VAR_0, VAR_1, VAR_2) == 0)
 {
  return 0;
 }

 if (FUNC_0(VAR_1))
 {
  return FUNC_1(VAR_2);
 }
 else
 {
  return FUNC_2(VAR_2);
 }
}
