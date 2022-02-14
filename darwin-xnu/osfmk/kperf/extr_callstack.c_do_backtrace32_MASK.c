
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ebp; scalar_t__ eip; } ;
typedef TYPE_1__ x86_saved_state32_t ;
typedef int vm_offset_t ;
typedef scalar_t__ uint64_t ;
typedef unsigned long uint32_t ;
typedef TYPE_2__* thread_t ;
typedef int task_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef int kern_return_t ;
struct TYPE_8__ {int prev; int caller; } ;
typedef TYPE_3__ cframe_t ;
typedef int boolean_t ;
struct TYPE_7__ {scalar_t__ kernel_stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (unsigned long*,int ,int) ;
 int FUNC_2 (int ,unsigned long*,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static kern_return_t FUNC_4(
 task_t VAR_4,
 thread_t VAR_5,
 x86_saved_state32_t *VAR_6,
 uint64_t *VAR_7,
 mach_msg_type_number_t *VAR_8,
 mach_msg_type_number_t VAR_9,
 boolean_t VAR_10)
{
 uint32_t VAR_11 = 0UL;
 uint64_t VAR_12 = (uint64_t) VAR_6->eip;
 uint64_t VAR_13 = (uint64_t) VAR_6->ebp;
 uint64_t VAR_14 = 0ULL;
 uint64_t VAR_15 = 0ULL;
 uint64_t VAR_16 = VAR_5->kernel_stack;
    uint64_t VAR_17 = VAR_16 + VAR_3;
 mach_msg_type_number_t VAR_18 = *VAR_8;
 kern_return_t VAR_19 = VAR_0;

 if(VAR_18 >= VAR_9)
  return VAR_1;

 VAR_7[VAR_18++] = FUNC_3(VAR_12, VAR_10);


 while(FUNC_0(VAR_10, VAR_13, VAR_16, VAR_17)) {
  cframe_t *VAR_20 = (cframe_t *) (uintptr_t) VAR_13;

        if(!VAR_13) {
            VAR_12 = 0;
            break;
        }

        if(VAR_18 >= VAR_9) {
   *VAR_8 = VAR_18;
            return VAR_1;
        }


  if(VAR_10) {
   VAR_19 = FUNC_1(&VAR_11, (vm_offset_t) &VAR_20->caller, sizeof(uint32_t));
  } else {
   VAR_19 = FUNC_2(VAR_4, &VAR_11, (vm_offset_t) &VAR_20->caller, sizeof(uint32_t));
  }

  if(VAR_19 != VAR_2) {
   VAR_12 = 0ULL;
   break;
  }

  VAR_12 = (uint64_t) VAR_11;





        VAR_15 = 0;
  if(VAR_10) {
   VAR_19 = FUNC_1(&VAR_11, (vm_offset_t)&VAR_20->prev, sizeof(uint32_t));
  } else {
   VAR_19 = FUNC_2(VAR_4, &VAR_11, (vm_offset_t)&VAR_20->prev, sizeof(uint32_t));
  }
  VAR_15 = (uint64_t) VAR_11;

        if(VAR_15) {
            VAR_7[VAR_18++] = FUNC_3(VAR_12, VAR_10);
            VAR_14 = VAR_12;
        }
        if(VAR_15 < VAR_13) {
            break;
        } else {
            VAR_13 = VAR_15;
        }
 }

 *VAR_8 = VAR_18;
 return VAR_2;
}
