
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef scalar_t__ thread_t ;
struct real_descriptor {int dummy; } ;
struct cpu_desc_table {int dummy; } ;
struct TYPE_10__ {int cpu_number; int cpu_int_stack_top; int * cpu_ldtp; struct cpu_desc_table* cpu_desc_tablep; int * cpu_nanotime; void* cpu_NMI_acknowledged; scalar_t__ cpu_active_thread; int * cd_shadow; struct TYPE_10__* cpu_this; int cpu_pmap; int * cpu_processor; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_11__ {int * pcldts; } ;
typedef TYPE_2__ cldt_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int) ;
 int * VAR_7 ;
 TYPE_1__** VAR_8 ;
 TYPE_1__* FUNC_2 (int ) ;
 int * FUNC_3 (void*) ;
 int FUNC_4 (int,int) ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,int*,int,int ) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (char*,int,TYPE_1__*,struct cpu_desc_table*,int *,long,long) ;
 int VAR_11 ;
 int FUNC_8 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (void*) ;
 int VAR_14 ;
 int FUNC_11 (int) ;
 TYPE_1__* VAR_15 ;
 int * VAR_16 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;

cpu_data_t *
FUNC_15(boolean_t VAR_17)
{
 int VAR_18;
 cpu_data_t *VAR_19;

 if (VAR_17) {
  FUNC_0(VAR_14 == 1);
  VAR_19 = FUNC_2(0);
  if (VAR_19->cpu_processor == ((void*)0)) {
   FUNC_13(&VAR_12, 0);
   VAR_19->cpu_processor = FUNC_3(VAR_5);



  }
  return VAR_19;
 }

 boolean_t VAR_20 = VAR_0;
 FUNC_12(&VAR_12);
 int VAR_21 = VAR_14;
 VAR_14++;
 if (VAR_9 == ((void*)0)) {
  VAR_20 = VAR_5;
 }
 FUNC_14(&VAR_12);





 VAR_19 = &VAR_15[VAR_21];
 FUNC_1((void*) VAR_19, sizeof(cpu_data_t));
 VAR_19->cpu_this = VAR_19;
 VAR_19->cpu_number = VAR_21;
 VAR_19->cd_shadow = &VAR_7[VAR_21];



 VAR_18 = FUNC_5(VAR_10,
    (vm_offset_t *) &VAR_19->cpu_int_stack_top,
    VAR_1, VAR_6);
 if (VAR_18 != VAR_2) {
  FUNC_9("cpu_data_alloc() int stack failed, ret=%d\n", VAR_18);
 }
 FUNC_1((void*) VAR_19->cpu_int_stack_top, VAR_1);
 VAR_19->cpu_int_stack_top += VAR_1;





 VAR_19->cpu_desc_tablep = (struct cpu_desc_table *) &VAR_16[VAR_21];



 if (VAR_20) {
  boolean_t VAR_22 = VAR_0;
  vm_offset_t VAR_23 = 0;



  vm_offset_t VAR_24 = 0, VAR_25 = FUNC_11(VAR_4 * sizeof(struct real_descriptor) * VAR_3);
  VAR_18 = FUNC_5(VAR_10, (vm_offset_t *) &VAR_24, VAR_25, VAR_6);
  if (VAR_18 != VAR_2) {
   FUNC_9("cpu_data_alloc() ldt failed, kmem_alloc=%d\n", VAR_18);
  }

  FUNC_12(&VAR_12);
  if (VAR_9 == ((void*)0)) {
   VAR_9 = (cldt_t *)VAR_24;
  } else {
   VAR_22 = VAR_5;
  }
  FUNC_14(&VAR_12);

  if (VAR_22) {
   FUNC_6(VAR_10, VAR_24, VAR_25);
  } else {




   VAR_23 = FUNC_4(VAR_24, VAR_25);
   VAR_11 = VAR_23;
  }
 }
 VAR_19->cpu_ldtp = &VAR_9[VAR_21].pcldts[0];
 VAR_19->cpu_active_thread = (thread_t) (uintptr_t) VAR_19->cpu_number;
 VAR_19->cpu_NMI_acknowledged = VAR_5;
 VAR_19->cpu_nanotime = &VAR_13;

 FUNC_7("cpu_data_alloc(%d) %p desc_table: %p "
  "ldt: %p "
  "int_stack: 0x%lx-0x%lx\n",
  VAR_19->cpu_number, VAR_19, VAR_19->cpu_desc_tablep, VAR_19->cpu_ldtp,
  (long)(VAR_19->cpu_int_stack_top - VAR_1), (long)(VAR_19->cpu_int_stack_top));
 VAR_8[VAR_21] = VAR_19;

 return VAR_19;

}
