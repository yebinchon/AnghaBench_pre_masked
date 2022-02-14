
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int POLICY ;
typedef int PACK ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

void FUNC_3(POLICY *VAR_0, PACK *VAR_1)
{
 POLICY *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_2(VAR_1);
 FUNC_0(VAR_0, VAR_2, sizeof(POLICY));
 FUNC_1(VAR_2);
}
