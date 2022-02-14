
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PSTRING ;
typedef scalar_t__ INT ;


 int FUNC_0 (int *,int * const,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;

PSTRING FUNC_2(PSTRING VAR_0,const PSTRING VAR_1)
{
 INT VAR_2, VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return VAR_0;

 VAR_2 = FUNC_1(VAR_0);

 while (VAR_2 >= VAR_3)
 {
  VAR_2--;
  if (!FUNC_0(VAR_0,VAR_1,VAR_3))
   return VAR_0;
  VAR_0++;
 }

 return ((void*)0);
}
