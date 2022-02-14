
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
typedef scalar_t__ thread_t ;
struct thread_command {int cmdsize; } ;
typedef void* mach_vm_offset_t ;
typedef scalar_t__ load_return_t ;
struct TYPE_5__ {scalar_t__ thread_count; int unixproc; void* entry_point; scalar_t__ using_lcmain; void* user_stack; int user_stack_alloc_size; } ;
typedef TYPE_1__ load_result_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,int *,int,void**) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int,void**,int*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__,int *,int,TYPE_1__*) ;

__attribute__((used)) static
load_return_t
FUNC_3(
 struct thread_command *VAR_7,
 thread_t VAR_8,
 int64_t VAR_9,
 load_result_t *VAR_10
)
{
 load_return_t VAR_11;
 int VAR_12 =0;
 mach_vm_offset_t VAR_13;
 if (VAR_7->cmdsize < sizeof(*VAR_7))
  return (VAR_0);
 if (VAR_10->thread_count != 0) {
  return (VAR_1);
 }

 if (VAR_8 == VAR_5)
  return (VAR_2);

 VAR_11 = FUNC_1(VAR_8,
    (uint32_t *)(((vm_offset_t)VAR_7) +
     sizeof(struct thread_command)),
    VAR_7->cmdsize - sizeof(struct thread_command),
    &VAR_13, &VAR_12, VAR_10);
 if (VAR_11 != VAR_2)
  return(VAR_11);



 if (!VAR_12) {
  VAR_10->user_stack_alloc_size = VAR_4;
 }


 VAR_10->user_stack = VAR_13;
 VAR_10->user_stack -= VAR_9;

 VAR_11 = FUNC_0(VAR_8,
    (uint32_t *)(((vm_offset_t)VAR_7) +
     sizeof(struct thread_command)),
    VAR_7->cmdsize - sizeof(struct thread_command),
    &VAR_13);
 if (VAR_11 != VAR_2)
  return(VAR_11);

 if (VAR_10->using_lcmain || VAR_10->entry_point != VAR_3) {

  return (VAR_1);
 }

 VAR_10->entry_point = VAR_13;
 VAR_10->entry_point += VAR_9;

 VAR_11 = FUNC_2(VAR_8,
    (uint32_t *)(((vm_offset_t)VAR_7) + sizeof(struct thread_command)),
    VAR_7->cmdsize - sizeof(struct thread_command),
    VAR_10);
 if (VAR_11 != VAR_2)
  return (VAR_11);

 VAR_10->unixproc = VAR_6;
 VAR_10->thread_count++;

 return(VAR_2);
}
