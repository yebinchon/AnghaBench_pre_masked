
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int ** VAR_0 ;

int FUNC_0(void)
{
 int VAR_1 = 0;
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  if (VAR_0[VAR_2] != ((void*)0))
   VAR_1++;
 return VAR_1;
}
