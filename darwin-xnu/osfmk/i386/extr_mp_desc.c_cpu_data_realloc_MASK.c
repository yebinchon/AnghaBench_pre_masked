
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int x86_64_intr_stack_frame_t ;
typedef scalar_t__ vm_offset_t ;
typedef int uint8_t ;
struct cpu_desc_table {int dummy; } ;
struct TYPE_9__ {int * fstkp; } ;
typedef TYPE_2__ cpu_desc_table64_t ;
struct TYPE_8__ {int queue; } ;
struct TYPE_10__ {size_t cpu_number; struct cpu_desc_table* cpu_desc_tablep; TYPE_1__ rtclock_timer; scalar_t__ cpu_int_stack_top; struct TYPE_10__* cpu_this; } ;
typedef TYPE_3__ cpu_data_t ;
typedef int boolean_t ;
struct TYPE_12__ {void* ist1; void* ist2; } ;
struct TYPE_11__ {int * fstk; } ;


 void* FUNC_0 (uintptr_t) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (void*,scalar_t__) ;
 TYPE_3__** VAR_7 ;
 scalar_t__ FUNC_4 () ;
 int VAR_8 ;
 int FUNC_5 (int ,scalar_t__*,scalar_t__,int ) ;
 int FUNC_6 (char*,void*,void*,void*) ;
 TYPE_6__ VAR_9 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;
 TYPE_3__* VAR_10 ;
 int * VAR_11 ;
 TYPE_4__* VAR_12 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,uintptr_t) ;

void
FUNC_11(void)
{
 int VAR_13;
 vm_offset_t VAR_14;
 cpu_data_t *VAR_15;
 boolean_t VAR_16;

 VAR_13 = FUNC_5(VAR_8, &VAR_14, VAR_2, VAR_6);
 if (VAR_13 != VAR_3) {
  FUNC_8("cpu_data_realloc() stack alloc, ret=%d\n", VAR_13);
 }
 FUNC_3((void*) VAR_14, VAR_2);
 VAR_14 += VAR_2;

 VAR_15 = &VAR_10[0];


 FUNC_1(FUNC_4() == 0);
 FUNC_2((void *) VAR_7[0], (void*) VAR_15, sizeof(cpu_data_t));
 VAR_15->cpu_this = VAR_15;
 VAR_15->cpu_int_stack_top = VAR_14;
 FUNC_9(&VAR_15->rtclock_timer.queue);
 VAR_15->cpu_desc_tablep = (struct cpu_desc_table *) &VAR_11[0];
 cpu_desc_table64_t *VAR_17 = (cpu_desc_table64_t *) VAR_15->cpu_desc_tablep;

 uint8_t *VAR_18 = &VAR_12[VAR_15->cpu_number].fstk[0];
 VAR_17->fstkp = VAR_18;
 VAR_18 += VAR_1;




 VAR_16 = FUNC_7(VAR_0);
 VAR_7[0] = VAR_15;
 VAR_9 = FUNC_0((uintptr_t) VAR_18);
 VAR_9 = FUNC_0((uintptr_t) VAR_18 - sizeof(x86_64_intr_stack_frame_t));
 FUNC_10(VAR_4, (uintptr_t) VAR_15);
 FUNC_10(VAR_5, (uintptr_t) VAR_15);
 (void) FUNC_7(VAR_16);

 FUNC_6("Reallocated master cpu data: %p,"
  " interrupt stack: %p, fault stack: %p\n",
  (void *) VAR_15, (void *) VAR_14, (void *) VAR_18);
}
