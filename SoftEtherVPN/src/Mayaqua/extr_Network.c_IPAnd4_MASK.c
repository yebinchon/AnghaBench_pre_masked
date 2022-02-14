
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IP ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;

void FUNC_4(IP *VAR_0, IP *VAR_1, IP *VAR_2)
{
 UINT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || FUNC_1(VAR_1) == 0 || FUNC_1(VAR_2) == 0)
 {
  FUNC_3(VAR_0, sizeof(IP));
  return;
 }

 VAR_3 = FUNC_0(VAR_1) & FUNC_0(VAR_2);

 FUNC_2(VAR_0, VAR_3);
}
