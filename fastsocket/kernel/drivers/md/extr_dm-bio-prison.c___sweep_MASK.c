
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct dm_deferred_set {size_t sweeper; size_t current_entry; TYPE_1__* entries; } ;
struct TYPE_2__ {int work_items; int count; } ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_2(struct dm_deferred_set *VAR_0, struct list_head *VAR_1)
{
 while ((VAR_0->sweeper != VAR_0->current_entry) &&
        !VAR_0->entries[VAR_0->sweeper].count) {
  FUNC_1(&VAR_0->entries[VAR_0->sweeper].work_items, VAR_1);
  VAR_0->sweeper = FUNC_0(VAR_0->sweeper);
 }

 if ((VAR_0->sweeper == VAR_0->current_entry) && !VAR_0->entries[VAR_0->sweeper].count)
  FUNC_1(&VAR_0->entries[VAR_0->sweeper].work_items, VAR_1);
}
