
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pos; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static long FUNC_1(int *VAR_1)
{
  int VAR_2, VAR_3;

  if (*VAR_1 >= 0x666 && *VAR_1 <= 0x669)
  {
    VAR_3 = (*VAR_1) - 0x666;
    VAR_2 = VAR_0[VAR_3].pos;
  }
  else
    VAR_2 = FUNC_0(*VAR_1, 0, 1);

  return (long) VAR_2;
}
