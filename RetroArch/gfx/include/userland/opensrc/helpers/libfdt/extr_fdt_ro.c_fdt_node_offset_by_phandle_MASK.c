
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (void const*) ;
 int VAR_0 ;
 int FUNC_1 (void const*,int) ;
 int FUNC_2 (void const*,int,int *) ;

int FUNC_3(const void *VAR_1, uint32_t VAR_2)
{
 int VAR_3;

 if ((VAR_2 == 0) || (VAR_2 == -1))
  return -VAR_0;

 FUNC_0(VAR_1);







 for (VAR_3 = FUNC_2(VAR_1, -1, ((void*)0));
      VAR_3 >= 0;
      VAR_3 = FUNC_2(VAR_1, VAR_3, ((void*)0))) {
  if (FUNC_1(VAR_1, VAR_3) == VAR_2)
   return VAR_3;
 }

 return VAR_3;
}
