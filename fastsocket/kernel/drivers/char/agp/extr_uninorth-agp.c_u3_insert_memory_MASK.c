
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct agp_memory {int type; int page_count; int * pages; } ;
typedef int off_t ;
struct TYPE_9__ {int num_entries; } ;
struct TYPE_8__ {TYPE_2__* dev; int * gatt_table; TYPE_1__* driver; void* current_size; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int (* agp_type_to_mask_type ) (TYPE_3__*,int) ;} ;


 TYPE_5__* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_3__* VAR_3 ;
 int FUNC_2 (int *,char*,int,int) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (struct agp_memory*) ;

__attribute__((used)) static int FUNC_8(struct agp_memory *VAR_4, off_t VAR_5, int VAR_6)
{
 int VAR_7, VAR_8;
 void *VAR_9;
 u32 *VAR_10;
 int VAR_11;

 VAR_9 = VAR_3->current_size;
 VAR_8 = FUNC_0(VAR_9)->num_entries;

 if (VAR_6 != VAR_4->type)
  return -VAR_1;

 VAR_11 = VAR_3->driver->agp_type_to_mask_type(VAR_3, VAR_6);
 if (VAR_11 != 0) {

  return -VAR_1;
 }

 if ((VAR_5 + VAR_4->page_count) > VAR_8)
  return -VAR_1;

 VAR_10 = (u32 *) &VAR_3->gatt_table[VAR_5];
 for (VAR_7 = 0; VAR_7 < VAR_4->page_count; ++VAR_7) {
  if (VAR_10[VAR_7]) {
   FUNC_2(&VAR_3->dev->dev,
     "u3_insert_memory: entry 0x%x occupied (%x)\n",
     VAR_7, VAR_10[VAR_7]);
   return -VAR_0;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->page_count; VAR_7++) {
  VAR_10[VAR_7] = (FUNC_5(VAR_4->pages[VAR_7]) >> VAR_2) | 0x80000000UL;
  FUNC_3((unsigned long)FUNC_1(FUNC_5(VAR_4->pages[VAR_7])),
       (unsigned long)FUNC_1(FUNC_5(VAR_4->pages[VAR_7]))+0x1000);
 }
 FUNC_4();
 FUNC_7(VAR_4);

 return 0;
}
