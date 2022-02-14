
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct agp_memory {int type; int page_count; int * pages; } ;
typedef int off_t ;
struct TYPE_7__ {int num_entries; } ;
struct TYPE_6__ {scalar_t__* gatt_table; TYPE_1__* driver; void* current_size; } ;
struct TYPE_5__ {int (* agp_type_to_mask_type ) (TYPE_2__*,int) ;} ;


 TYPE_4__* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int volatile*) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int) ;
 int FUNC_8 (struct agp_memory*) ;

__attribute__((used)) static int FUNC_9(struct agp_memory *VAR_3, off_t VAR_4,
    int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 void *VAR_9;
 int VAR_10;

 VAR_9 = VAR_2->current_size;
 VAR_8 = FUNC_0(VAR_9)->num_entries;

 if (VAR_5 != VAR_3->type)
  return -VAR_1;

 VAR_10 = VAR_2->driver->agp_type_to_mask_type(VAR_2, VAR_5);
 if (VAR_10 != 0) {

  return -VAR_1;
 }

 if ((VAR_4 + VAR_3->page_count) > VAR_8)
  return -VAR_1;

 VAR_7 = VAR_4;

 while (VAR_7 < (VAR_4 + VAR_3->page_count)) {
  if (VAR_2->gatt_table[VAR_7])
   return -VAR_0;
  VAR_7++;
 }

 for (VAR_6 = 0, VAR_7 = VAR_4; VAR_6 < VAR_3->page_count; VAR_6++, VAR_7++) {
  VAR_2->gatt_table[VAR_7] =
   FUNC_2((FUNC_6(VAR_3->pages[VAR_6]) & 0xFFFFF000UL) | 0x1UL);
  FUNC_3((unsigned long)FUNC_1(FUNC_6(VAR_3->pages[VAR_6])),
       (unsigned long)FUNC_1(FUNC_6(VAR_3->pages[VAR_6]))+0x1000);
 }
 (void)FUNC_4((volatile u32*)&VAR_2->gatt_table[VAR_4]);
 FUNC_5();

 FUNC_8(VAR_3);
 return 0;
}
