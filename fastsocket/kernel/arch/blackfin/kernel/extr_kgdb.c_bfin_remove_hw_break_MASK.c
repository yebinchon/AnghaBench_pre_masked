
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum kgdb_bptype { ____Placeholder_kgdb_bptype } kgdb_bptype ;
struct TYPE_2__ {int type; unsigned long addr; scalar_t__ enabled; scalar_t__ occupied; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;

int FUNC_0(unsigned long VAR_4, int VAR_5, enum kgdb_bptype VAR_6)
{
 int VAR_7;
 int VAR_8;

 switch (VAR_6) {
 case 130:
  VAR_8 = VAR_2;
  break;
 case 128:
 case 129:
 case 131:
  VAR_8 = VAR_1;
  break;
 default:
  return 0;
 }
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_8 == VAR_3[VAR_7].type
   && VAR_3[VAR_7].occupied
   && VAR_3[VAR_7].addr == VAR_4) {
   VAR_3[VAR_7].occupied = 0;
   VAR_3[VAR_7].enabled = 0;
  }

 return 0;
}
