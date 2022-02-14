
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_placement {int num_placement; int * placement; } ;
struct TYPE_2__ {int size; int num_pages; } ;
struct ttm_buffer_object {int bdev; TYPE_1__ mem; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int*) ;

__attribute__((used)) static void FUNC_3(struct ttm_buffer_object *VAR_0,
     struct ttm_placement *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 FUNC_0("No space for %p (%lu pages, %luK, %luM)\n",
        VAR_0, VAR_0->mem.num_pages, VAR_0->mem.size >> 10,
        VAR_0->mem.size >> 20);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_placement; VAR_2++) {
  VAR_3 = FUNC_2(VAR_1->placement[VAR_2],
      &VAR_4);
  if (VAR_3)
   return;
  FUNC_0("  placement[%d]=0x%08X (%d)\n",
         VAR_2, VAR_1->placement[VAR_2], VAR_4);
  FUNC_1(VAR_0->bdev, VAR_4);
 }
}
