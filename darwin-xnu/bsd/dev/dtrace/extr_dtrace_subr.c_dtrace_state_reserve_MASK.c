
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t minor_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int ** VAR_1 ;
 int VAR_2 ;

minor_t
FUNC_1(void)
{
 for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  minor_t VAR_4 = FUNC_0(&VAR_2, 1) % VAR_0;
  if (VAR_1[VAR_4] == ((void*)0))
   return VAR_4;
 }
 return 0;
}
