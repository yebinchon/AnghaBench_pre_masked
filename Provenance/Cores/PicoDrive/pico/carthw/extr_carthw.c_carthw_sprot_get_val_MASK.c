
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int mask; int addr; int val; int readonly; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static u16 *FUNC_0(u32 VAR_2, int VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if ((VAR_2 & VAR_1[VAR_4].mask) == VAR_1[VAR_4].addr)
      if (!VAR_3 || !VAR_1[VAR_4].readonly)
        return &VAR_1[VAR_4].val;

  return ((void*)0);
}
