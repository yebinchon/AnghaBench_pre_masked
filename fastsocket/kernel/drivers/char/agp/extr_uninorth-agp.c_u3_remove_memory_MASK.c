
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct agp_memory {scalar_t__ type; size_t page_count; } ;
typedef size_t off_t ;
struct TYPE_2__ {int * gatt_table; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct agp_memory*) ;

int FUNC_2(struct agp_memory *VAR_2, off_t VAR_3, int VAR_4)
{
 size_t VAR_5;
 u32 *VAR_6;

 if (VAR_4 != 0 || VAR_2->type != 0)

  return -VAR_0;

 VAR_6 = (u32 *) &VAR_1->gatt_table[VAR_3];
 for (VAR_5 = 0; VAR_5 < VAR_2->page_count; ++VAR_5)
  VAR_6[VAR_5] = 0;
 FUNC_0();
 FUNC_1(VAR_2);

 return 0;
}
