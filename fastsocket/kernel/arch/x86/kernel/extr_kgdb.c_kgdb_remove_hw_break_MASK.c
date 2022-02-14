
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum kgdb_bptype { ____Placeholder_kgdb_bptype } kgdb_bptype ;
struct TYPE_2__ {unsigned long addr; scalar_t__ enabled; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0(unsigned long VAR_1, int VAR_2, enum kgdb_bptype VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  if (VAR_0[VAR_4].addr == VAR_1 && VAR_0[VAR_4].enabled)
   break;
 if (VAR_4 == 4)
  return -1;

 VAR_0[VAR_4].enabled = 0;

 return 0;
}
