
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum kgdb_bptype { ____Placeholder_kgdb_bptype } kgdb_bptype ;
struct TYPE_2__ {int enabled; int len; unsigned long addr; unsigned int type; } ;





 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_0(unsigned long VAR_1, int VAR_2, enum kgdb_bptype VAR_3)
{
 unsigned VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
  if (!VAR_0[VAR_5].enabled)
   break;
 if (VAR_5 == 4)
  return -1;

 switch (VAR_3) {
 case 129:
  VAR_4 = 0;
  VAR_2 = 1;
  break;
 case 128:
  VAR_4 = 1;
  break;
 case 130:
  VAR_4 = 3;
  break;
 default:
  return -1;
 }

 if (VAR_2 == 1 || VAR_2 == 2 || VAR_2 == 4)
  VAR_0[VAR_5].len = VAR_2 - 1;
 else
  return -1;

 VAR_0[VAR_5].enabled = 1;
 VAR_0[VAR_5].addr = VAR_1;
 VAR_0[VAR_5].type = VAR_4;

 return 0;
}
