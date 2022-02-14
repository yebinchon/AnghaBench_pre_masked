
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct e820entry {unsigned int type; scalar_t__ addr; scalar_t__ size; } ;
struct TYPE_2__ {int nr_map; struct e820entry* map; } ;


 TYPE_1__ VAR_0 ;

int
FUNC_0(u64 VAR_1, u64 VAR_2, unsigned VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  struct e820entry *VAR_5 = &VAR_0[VAR_4];

  if (VAR_3 && VAR_5->type != VAR_3)
   continue;
  if (VAR_5->addr >= VAR_2 || VAR_5->addr + VAR_5->size <= VAR_1)
   continue;
  return 1;
 }
 return 0;
}
