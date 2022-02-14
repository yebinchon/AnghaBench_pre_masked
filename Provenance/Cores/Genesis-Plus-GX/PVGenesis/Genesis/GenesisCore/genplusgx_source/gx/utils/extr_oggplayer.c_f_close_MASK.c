
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* mem; scalar_t__ pos; scalar_t__ size; } ;


 int FUNC_0 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_1(int *VAR_1)
{
  int VAR_2;
  if (*VAR_1 >= 0x666 && *VAR_1 <= 0x669)
  {
    VAR_2 = (*VAR_1) - 0x666;
    VAR_0[VAR_2].size = 0;
    VAR_0[VAR_2].pos = 0;
    if (VAR_0[VAR_2].mem)
    {
      VAR_0[VAR_2].mem = (void *) 0;
    }
    return 0;
  }
  else
    return FUNC_0(*VAR_1);
  return 0;
}
