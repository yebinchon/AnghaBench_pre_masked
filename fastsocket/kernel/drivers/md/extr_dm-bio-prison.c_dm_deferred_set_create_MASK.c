
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_deferred_set {TYPE_1__* entries; scalar_t__ sweeper; scalar_t__ current_entry; int lock; } ;
struct TYPE_2__ {int work_items; scalar_t__ count; struct dm_deferred_set* ds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct dm_deferred_set* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

struct dm_deferred_set *FUNC_3(void)
{
 int VAR_2;
 struct dm_deferred_set *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(&VAR_3->lock);
 VAR_3->current_entry = 0;
 VAR_3->sweeper = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3->entries[VAR_2].ds = VAR_3;
  VAR_3->entries[VAR_2].count = 0;
  FUNC_0(&VAR_3->entries[VAR_2].work_items);
 }

 return VAR_3;
}
