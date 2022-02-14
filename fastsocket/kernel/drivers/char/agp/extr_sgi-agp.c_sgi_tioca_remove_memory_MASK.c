
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct agp_memory {scalar_t__ type; size_t page_count; struct agp_bridge_data* bridge; } ;
struct agp_bridge_data {TYPE_1__* driver; scalar_t__ gatt_table; } ;
typedef size_t off_t ;
struct TYPE_2__ {int (* tlb_flush ) (struct agp_memory*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct agp_memory*) ;

__attribute__((used)) static int FUNC_1(struct agp_memory *VAR_1, off_t VAR_2,
       int VAR_3)
{
 size_t VAR_4;
 struct agp_bridge_data *VAR_5;
 u64 *VAR_6;

 VAR_5 = VAR_1->bridge;
 if (!VAR_5)
  return -VAR_0;

 if (VAR_3 != 0 || VAR_1->type != 0) {
  return -VAR_0;
 }

 VAR_6 = (u64 *)VAR_5->gatt_table;

 for (VAR_4 = VAR_2; VAR_4 < (VAR_1->page_count + VAR_2); VAR_4++) {
  VAR_6[VAR_4] = 0;
 }

 VAR_5->driver->tlb_flush(VAR_1);
 return 0;
}
