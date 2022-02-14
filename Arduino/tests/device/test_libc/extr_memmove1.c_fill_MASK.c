
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

void
FUNC_0 (unsigned char VAR_1[VAR_0*3])
{
  size_t VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0*3; VAR_2++)
    VAR_1[VAR_2] = (10 + VAR_2) % VAR_0;
}
