
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

bool FUNC_3(IP *VAR_0, IP *VAR_1)
{
 UINT VAR_2, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_0) == 0 || FUNC_1(VAR_1) == 0)
 {
  return 0;
 }

 if (FUNC_2(VAR_1) == 0)
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_0(VAR_1);

 if ((VAR_2 & VAR_3) == VAR_2)
 {
  return 1;
 }

 return 0;
}
