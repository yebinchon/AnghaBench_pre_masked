
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 void* VAR_2 ;
 int * VAR_3 ;

void *FUNC_1(int VAR_4)
{
 VAR_4 = VAR_4 >> VAR_0;
 if ((VAR_4 < 0) || (VAR_4 >= VAR_1))
  return ((void*)0);

 if (FUNC_0(&VAR_3[VAR_4]) == 0)
  return &VAR_2[VAR_4 * 256];
 else
  return ((void*)0);
}
