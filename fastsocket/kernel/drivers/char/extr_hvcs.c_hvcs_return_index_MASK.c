
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_0(int VAR_2)
{

 if (!VAR_1)
  return;
 if (VAR_2 < 0 || VAR_2 >= VAR_0)
  return;
 if (VAR_1[VAR_2] == -1)
  return;
 else
  VAR_1[VAR_2] = -1;
}
