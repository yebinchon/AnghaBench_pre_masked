
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct dm_deferred_entry {TYPE_1__* ds; int count; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,struct list_head*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct dm_deferred_entry *VAR_0, struct list_head *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_0->ds->lock, VAR_2);
 FUNC_0(!VAR_0->count);
 --VAR_0->count;
 FUNC_1(VAR_0->ds, VAR_1);
 FUNC_3(&VAR_0->ds->lock, VAR_2);
}
