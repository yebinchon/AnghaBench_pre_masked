
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct agp_memory {int page_count; int is_flushed; int type; int * pages; struct agp_bridge_data* bridge; } ;
struct agp_bridge_data {TYPE_1__* driver; void* current_size; scalar_t__ gatt_table; } ;
typedef int off_t ;
struct TYPE_10__ {int num_entries; } ;
struct TYPE_9__ {int num_entries; } ;
struct TYPE_8__ {int num_entries; } ;
struct TYPE_7__ {int num_entries; } ;
struct TYPE_6__ {int size_type; int (* tlb_flush ) (struct agp_memory*) ;scalar_t__ (* mask_memory ) (struct agp_bridge_data*,int ,int ) ;int (* cache_flush ) () ;} ;


 TYPE_5__* FUNC_0 (void*) ;
 TYPE_4__* FUNC_1 (void*) ;
 TYPE_3__* FUNC_2 (void*) ;
 TYPE_2__* FUNC_3 (void*) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;



 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct agp_bridge_data*,int ,int ) ;
 int FUNC_7 (struct agp_memory*) ;

__attribute__((used)) static int FUNC_8(struct agp_memory *VAR_4, off_t VAR_5,
       int VAR_6)
{
 int VAR_7;
 size_t VAR_8;
 off_t VAR_9;
 void *VAR_10;
 struct agp_bridge_data *VAR_11;
 u64 *VAR_12;

 VAR_11 = VAR_4->bridge;
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = (u64 *)VAR_11->gatt_table;

 VAR_10 = VAR_11->current_size;

 switch (VAR_11->driver->size_type) {
 case 128:
  VAR_7 = FUNC_2(VAR_10)->num_entries;
  break;
 case 130:
  VAR_7 = FUNC_0(VAR_10)->num_entries;
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_10)->num_entries;
  break;
 case 132:
  VAR_7 = FUNC_3(VAR_10)->num_entries;
  break;
 case 131:
  return -VAR_1;
  break;
 default:
  VAR_7 = 0;
  break;
 }

 VAR_7 -= VAR_3 / VAR_2;
 if (VAR_7 < 0)
  VAR_7 = 0;

 if (VAR_6 != 0 || VAR_4->type != 0) {
  return -VAR_1;
 }

 if ((VAR_5 + VAR_4->page_count) > VAR_7)
  return -VAR_1;

 VAR_9 = VAR_5;

 while (VAR_9 < (VAR_5 + VAR_4->page_count)) {
  if (VAR_12[VAR_9])
   return -VAR_0;
  VAR_9++;
 }

 if (!VAR_4->is_flushed) {
  VAR_11->driver->cache_flush();
  VAR_4->is_flushed = 1;
 }

 for (VAR_8 = 0, VAR_9 = VAR_5; VAR_8 < VAR_4->page_count; VAR_8++, VAR_9++) {
  VAR_12[VAR_9] =
      VAR_11->driver->mask_memory(VAR_11,
      FUNC_4(VAR_4->pages[VAR_8]),
      VAR_4->type);
 }

 VAR_11->driver->tlb_flush(VAR_4);
 return 0;
}
