
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int POLICY ;


 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (int) ;

POLICY *FUNC_2(POLICY *VAR_0)
{
 POLICY *VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_1 = FUNC_1(sizeof(POLICY));
 FUNC_0(VAR_1, VAR_0, sizeof(POLICY));

 return VAR_1;
}
