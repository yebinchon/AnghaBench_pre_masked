
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct dm_deferred_set {size_t sweeper; size_t current_entry; int lock; TYPE_1__* entries; } ;
struct TYPE_2__ {int count; int work_items; } ;


 unsigned int FUNC_0 (size_t) ;
 int FUNC_1 (struct list_head*,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct dm_deferred_set *VAR_0, struct list_head *VAR_1)
{
 int VAR_2 = 1;
 unsigned long VAR_3;
 unsigned VAR_4;

 FUNC_2(&VAR_0->lock, VAR_3);
 if ((VAR_0->sweeper == VAR_0->current_entry) &&
     !VAR_0->entries[VAR_0->current_entry].count)
  VAR_2 = 0;
 else {
  FUNC_1(VAR_1, &VAR_0->entries[VAR_0->current_entry].work_items);
  VAR_4 = FUNC_0(VAR_0->current_entry);
  if (!VAR_0->entries[VAR_4].count)
   VAR_0->current_entry = VAR_4;
 }
 FUNC_3(&VAR_0->lock, VAR_3);

 return VAR_2;
}
