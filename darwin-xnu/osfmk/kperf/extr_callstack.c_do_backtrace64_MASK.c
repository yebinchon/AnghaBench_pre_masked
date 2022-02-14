
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ rip; } ;
struct TYPE_7__ {scalar_t__ rbp; TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;
typedef int vm_offset_t ;
typedef scalar_t__ uint64_t ;
typedef TYPE_3__* thread_t ;
typedef int task_t ;
typedef scalar_t__ mach_msg_type_number_t ;
typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_8__ {int kernel_stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (int ,scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static kern_return_t FUNC_4(
 task_t VAR_4,
 thread_t VAR_5,
 x86_saved_state64_t *VAR_6,
 uint64_t *VAR_7,
 mach_msg_type_number_t *VAR_8,
 mach_msg_type_number_t VAR_9,
 boolean_t VAR_10)
{
 uint64_t VAR_11 = VAR_6->isf.rip;
 uint64_t VAR_12 = VAR_6->rbp;
 uint64_t VAR_13 = 0ULL;
 uint64_t VAR_14 = 0ULL;
 uint64_t VAR_15 = (uint64_t)VAR_5->kernel_stack;
    uint64_t VAR_16 = (uint64_t)VAR_15 + VAR_3;
 mach_msg_type_number_t VAR_17 = *VAR_8;
 kern_return_t VAR_18 = VAR_0;

 if(*VAR_8 >= VAR_9)
  return VAR_1;

 VAR_7[VAR_17++] = FUNC_3(VAR_11, VAR_10);


 while(FUNC_0(VAR_10, VAR_12, VAR_15, VAR_16)) {

  uint64_t VAR_19 = VAR_12 + sizeof(uint64_t);

        if(!VAR_12) {
            VAR_11 = 0;
            break;
        }

        if(VAR_17 >= VAR_9) {
   *VAR_8 = VAR_17;
            return VAR_1;
        }


  if(VAR_10) {
   VAR_18 = FUNC_1(&VAR_11, (vm_offset_t)VAR_19, sizeof(uint64_t));
  } else {
   VAR_18 = FUNC_2(VAR_4, &VAR_11, VAR_19, sizeof(uint64_t));
  }

  if(VAR_18 != VAR_2) {
   VAR_11 = 0ULL;
   break;
  }





        VAR_14 = 0;
  if(VAR_10) {
   VAR_18 = FUNC_1(&VAR_14, (vm_offset_t)VAR_12, sizeof(uint64_t));
  } else {
   VAR_18 = FUNC_2(VAR_4, &VAR_14, VAR_12, sizeof(uint64_t));
  }

        if(FUNC_0(VAR_10, VAR_14, VAR_15, VAR_16)) {
            VAR_7[VAR_17++] = FUNC_3(VAR_11, VAR_10);
            VAR_13 = VAR_11;
        }
        if(VAR_14 < VAR_12) {
            break;
        } else {
            VAR_12 = VAR_14;
        }
 }

 *VAR_8 = VAR_17;
 return VAR_2;
}
