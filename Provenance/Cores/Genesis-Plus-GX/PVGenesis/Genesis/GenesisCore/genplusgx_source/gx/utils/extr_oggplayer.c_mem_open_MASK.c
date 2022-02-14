
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; char* mem; scalar_t__ pos; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(char * VAR_1, int VAR_2)
{
  static int VAR_3 = 1;
  int VAR_4;
  if (VAR_3)
  {
    VAR_3 = 0;
    for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
      VAR_0[VAR_4].size = 0;
  }

  for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  {
    if (VAR_0[VAR_4].size == 0)
    {
      VAR_0[VAR_4].mem = VAR_1;
      VAR_0[VAR_4].size = VAR_2;
      VAR_0[VAR_4].pos = 0;
      return (0x666 + VAR_4);
    }
  }
  return -1;
}
