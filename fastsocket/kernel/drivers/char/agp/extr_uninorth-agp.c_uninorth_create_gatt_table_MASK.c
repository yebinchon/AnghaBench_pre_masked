
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct page {int dummy; } ;
struct agp_bridge_data {int aperture_size_idx; scalar_t__* gatt_table; int gatt_bus_addr; int * gatt_table_real; void* current_size; TYPE_1__* driver; } ;
struct TYPE_4__ {int size; int page_order; int num_entries; } ;
struct TYPE_3__ {scalar_t__ size_type; int num_aperture_sizes; } ;


 void* FUNC_0 (struct agp_bridge_data*) ;
 TYPE_2__* FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (unsigned long,int) ;
 int FUNC_6 (struct page**) ;
 struct page** FUNC_7 (int,int ) ;
 struct page* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__* FUNC_10 (struct page**,int,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct agp_bridge_data *VAR_6)
{
 char *VAR_7;
 char *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;
 void *VAR_13;
 struct page *VAR_14;
 struct page **VAR_15;


 if (VAR_6->driver->size_type == VAR_3)
  return -VAR_0;

 VAR_7 = ((void*)0);
 VAR_12 = VAR_6->aperture_size_idx;
 VAR_13 = VAR_6->current_size;
 VAR_9 = VAR_10 = VAR_11 = 0;

 do {
  VAR_9 = FUNC_1(VAR_13)->size;
  VAR_10 = FUNC_1(VAR_13)->page_order;
  VAR_11 = FUNC_1(VAR_13)->num_entries;

  VAR_7 = (char *) FUNC_3(VAR_2, VAR_10);

  if (VAR_7 == ((void*)0)) {
   VAR_12++;
   VAR_6->current_size = FUNC_0(VAR_6);
  } else {
   VAR_6->aperture_size_idx = VAR_12;
  }
 } while (!VAR_7 && (VAR_12 < VAR_6->driver->num_aperture_sizes));

 if (VAR_7 == ((void*)0))
  return -VAR_1;

 VAR_15 = FUNC_7((1 << VAR_10) * sizeof(struct page*), VAR_2);
 if (VAR_15 == ((void*)0))
  goto enomem;

 VAR_8 = VAR_7 + ((VAR_5 * (1 << VAR_10)) - 1);

 for (VAR_14 = FUNC_8(VAR_7), VAR_12 = 0; VAR_14 <= FUNC_8(VAR_8);
      VAR_14++, VAR_12++) {
  FUNC_2(VAR_14);
  VAR_15[VAR_12] = VAR_14;
 }

 VAR_6->gatt_table_real = (u32 *) VAR_7;

 FUNC_4((unsigned long)VAR_7,
      (unsigned long)(VAR_8 + VAR_5));
 VAR_6->gatt_table = FUNC_10(VAR_15, (1 << VAR_10), 0, VAR_4);

 if (VAR_6->gatt_table == ((void*)0))
  goto enomem;

 VAR_6->gatt_bus_addr = FUNC_9(VAR_7);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  VAR_6->gatt_table[VAR_12] = 0;

 return 0;

enomem:
 FUNC_6(VAR_15);
 if (VAR_7)
  FUNC_5((unsigned long)VAR_7, VAR_10);
 return -VAR_1;
}
