
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_map_t ;
typedef int uint64_t ;
typedef TYPE_1__* task_t ;
typedef int memory_object_size_t ;
typedef int mach_vm_offset_t ;
typedef int mach_port_t ;
typedef scalar_t__ kern_return_t ;
typedef int * atm_task_descriptor_t ;
struct TYPE_7__ {int * atm_context; } ;


 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *,int ,int ,int *,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

kern_return_t
FUNC_9(
 task_t VAR_12,
 uint64_t VAR_13,
 uint64_t VAR_14)
{
 atm_task_descriptor_t VAR_15;
 mach_port_t VAR_16 = VAR_7;
 kern_return_t VAR_17 = VAR_6;

 if (VAR_11 || (FUNC_0() & VAR_1))
  return VAR_4;

 if (VAR_12 != FUNC_4())
  return VAR_3;

 if (VAR_12->atm_context != ((void*)0)
     || (void *)VAR_13 == ((void*)0)
     || VAR_14 == 0
     || (VAR_14 & VAR_9) != 0
     || VAR_14 > VAR_8) {
  return VAR_3;
 }

 vm_map_t VAR_18 = FUNC_3();
 memory_object_size_t VAR_19 = (memory_object_size_t) VAR_14;
 VAR_17 = FUNC_6(VAR_18,
                            &VAR_19,
                            (mach_vm_offset_t)VAR_13,
                            VAR_10,
                            &VAR_16,
                            ((void*)0));
 if (VAR_17 != VAR_6)
  return VAR_17;

 VAR_15 = FUNC_1(VAR_16, VAR_14, VAR_12);
 if (VAR_15 == VAR_0) {
  FUNC_5(VAR_16);
  return VAR_5;
 }

 FUNC_7(VAR_12);
 if (VAR_12->atm_context == ((void*)0)) {
  VAR_12->atm_context = VAR_15;
  VAR_17 = VAR_6;
 } else {
  VAR_17 = VAR_2;
 }
 FUNC_8(VAR_12);

 if (VAR_17 != VAR_6) {

  FUNC_2(VAR_15);
 }
 return VAR_6;
}
