
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;

int FUNC_0(int VAR_1)
{
  static char VAR_2[0x100] = {0};

  if((!VAR_0[VAR_1]) && (VAR_2[VAR_1] == 1))
    VAR_2[VAR_1] = 0;

  if((VAR_0[VAR_1]) && (VAR_2[VAR_1] == 0))
  {
    VAR_2[VAR_1] = 1;
    return (1);
  }

  return (0);
}
