
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* vm_page_iterate_proc ) (int *,unsigned int,TYPE_1__*) ;
typedef TYPE_1__* vm_object_t ;
typedef int queue_entry_t ;
typedef TYPE_3__* purgeable_q_t ;
typedef int mach_memory_info_t ;
struct TYPE_7__ {int * objq; } ;
struct TYPE_6__ {int objq; } ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(mach_memory_info_t * VAR_0, unsigned int VAR_1,
      vm_page_iterate_proc VAR_2, purgeable_q_t VAR_3,
      int VAR_4)
{
    vm_object_t VAR_5;

    for (VAR_5 = (vm_object_t) FUNC_1(&VAR_3->objq[VAR_4]);
  !FUNC_0(&VAR_3->objq[VAR_4], (queue_entry_t) VAR_5);
  VAR_5 = (vm_object_t) FUNC_2(&VAR_5->objq))
    {
  VAR_2(VAR_0, VAR_1, VAR_5);
    }
}
