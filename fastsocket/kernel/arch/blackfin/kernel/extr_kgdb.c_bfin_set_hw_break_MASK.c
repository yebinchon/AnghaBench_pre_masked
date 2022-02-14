
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum kgdb_bptype { ____Placeholder_kgdb_bptype } kgdb_bptype ;
struct TYPE_2__ {int type; int occupied; int enabled; unsigned long addr; int dataacc; scalar_t__ count; scalar_t__ skip; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

int FUNC_0(unsigned long VAR_5, int VAR_6, enum kgdb_bptype VAR_7)
{
 int VAR_8;
 int VAR_9;
 int VAR_10 = 0;

 switch (VAR_7) {
 case 130:
  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_10 = 1;
  VAR_9 = VAR_2;
  break;
 case 129:
  VAR_10 = 2;
  VAR_9 = VAR_2;
  break;
 case 131:
  VAR_10 = 3;
  VAR_9 = VAR_2;
  break;
 default:
  return -VAR_0;
 }







 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  if (VAR_9 == VAR_4[VAR_8].type
   && !VAR_4[VAR_8].occupied) {
   VAR_4[VAR_8].occupied = 1;
   VAR_4[VAR_8].skip = 0;
   VAR_4[VAR_8].enabled = 1;
   VAR_4[VAR_8].addr = VAR_5;
   VAR_4[VAR_8].dataacc = VAR_10;
   VAR_4[VAR_8].count = 0;
   return 0;
  }

 return -VAR_0;
}
