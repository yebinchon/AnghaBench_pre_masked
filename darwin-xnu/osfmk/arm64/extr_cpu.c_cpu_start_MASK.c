
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_4__* thread_t ;
typedef int kern_return_t ;
struct TYPE_8__ {int * cpu_nested_pmap; } ;
struct TYPE_12__ {int cpu_id; TYPE_4__* cpu_active_thread; TYPE_2__* cpu_processor; TYPE_1__ cpu_pmap_cpu_data; scalar_t__ cpu_reset_handler; } ;
typedef TYPE_5__ cpu_data_t ;
typedef int cpu_data_entry_t ;
struct TYPE_13__ {TYPE_5__* cpu_data_vaddr; } ;
struct TYPE_10__ {TYPE_5__* CpuDatap; } ;
struct TYPE_11__ {TYPE_3__ machine; } ;
struct TYPE_9__ {scalar_t__ next_thread; TYPE_4__* idle_thread; } ;


 TYPE_7__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int,int ) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ VAR_4 ;

kern_return_t
FUNC_6(int VAR_5)
{
 cpu_data_t *VAR_6 = VAR_0[VAR_5].cpu_data_vaddr;

 FUNC_5("cpu_start() cpu: %d\n", VAR_5);

 if (VAR_5 == FUNC_3()) {
  FUNC_2();
  FUNC_1(VAR_6);
 } else {
  thread_t VAR_7;

  VAR_6->cpu_reset_handler = (vm_offset_t) VAR_4;

  VAR_6->cpu_pmap_cpu_data.cpu_nested_pmap = ((void*)0);

  if (VAR_6->cpu_processor->next_thread != VAR_3)
   VAR_7 = VAR_6->cpu_processor->next_thread;
  else
   VAR_7 = VAR_6->cpu_processor->idle_thread;
  VAR_6->cpu_active_thread = VAR_7;
  VAR_7->machine.CpuDatap = VAR_6;

  FUNC_1(VAR_6);

  FUNC_4((vm_offset_t)&VAR_0[VAR_5], sizeof(cpu_data_entry_t), VAR_1);
  FUNC_4((vm_offset_t)VAR_6, sizeof(cpu_data_t), VAR_1);
  (void) FUNC_0(VAR_6->cpu_id, (vm_offset_t)((void*)0), (vm_offset_t)((void*)0));
 }

 return VAR_2;
}
