
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ size; scalar_t__ count; } ;
typedef TYPE_1__ vm_purgeable_stat_t ;
typedef TYPE_2__* vm_object_t ;
typedef scalar_t__ task_t ;
typedef int queue_entry_t ;
typedef TYPE_3__* purgeable_q_t ;
struct TYPE_9__ {int * objq; } ;
struct TYPE_8__ {int resident_page_count; int objq; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_2 ;

void
FUNC_5(vm_purgeable_stat_t *VAR_3, purgeable_q_t VAR_4, int VAR_5, task_t VAR_6)
{
 FUNC_0(&VAR_2, VAR_0);

 VAR_3->count = VAR_3->size = 0;
 vm_object_t VAR_7;
 for (VAR_7 = (vm_object_t) FUNC_3(&VAR_4->objq[VAR_5]);
      !FUNC_2(&VAR_4->objq[VAR_5], (queue_entry_t) VAR_7);
      VAR_7 = (vm_object_t) FUNC_4(&VAR_7->objq)) {
  if (!VAR_6 || FUNC_1(VAR_7) == VAR_6) {
   VAR_3->count++;
   VAR_3->size += (VAR_7->resident_page_count * VAR_1);
  }
 }
 return;
}
