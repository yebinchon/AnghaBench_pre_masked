
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_3__* thread_t ;
struct thread_kernel_state {int dummy; } ;
typedef scalar_t__ pmap_t ;
typedef int cpu_data_t ;
struct TYPE_11__ {int * CpuDatap; scalar_t__ kstackptr; } ;
struct TYPE_12__ {scalar_t__ reserved_stack; TYPE_2__ machine; TYPE_1__* map; scalar_t__ kernel_stack; } ;
struct TYPE_10__ {scalar_t__ pmap; } ;


 int FUNC_0 (scalar_t__) ;
 int * FUNC_1 () ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_3__*) ;

void
FUNC_7(
        thread_t VAR_1,
        thread_t VAR_2)
{
 vm_offset_t VAR_3;
 pmap_t VAR_4;
 cpu_data_t *VAR_5;

 FUNC_2(VAR_1);

 VAR_3 = FUNC_4(VAR_1);
 VAR_5 = FUNC_1();
 VAR_2->kernel_stack = VAR_3;
 VAR_2->machine.kstackptr = VAR_3 + VAR_0 - sizeof(struct thread_kernel_state);
 if (VAR_3 == VAR_1->reserved_stack) {
  FUNC_0(VAR_2->reserved_stack);
  VAR_1->reserved_stack = VAR_2->reserved_stack;
  VAR_2->reserved_stack = VAR_3;
 }


 VAR_4 = VAR_2->map->pmap;
 if (VAR_1->map->pmap != VAR_4)
  FUNC_5(VAR_4);

 VAR_2->machine.CpuDatap = VAR_5;
 FUNC_3(VAR_2);
 FUNC_6(VAR_2);

 return;
}
