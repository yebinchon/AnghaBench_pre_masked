
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ thread_t ;
struct entry_point_command {int cmdsize; scalar_t__ stacksize; } ;
typedef int mach_vm_offset_t ;
typedef int load_return_t ;
struct TYPE_3__ {scalar_t__ thread_count; scalar_t__ entry_point; void* unixproc; void* using_lcmain; void* needs_dynlinker; int user_stack; int is_64bit_addr; scalar_t__ user_stack_alloc_size; scalar_t__ user_stack_size; } ;
typedef TYPE_1__ load_result_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,int,scalar_t__*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ) ;

__attribute__((used)) static
load_return_t
FUNC_3(
 struct entry_point_command *VAR_9,
 thread_t VAR_10,
 int64_t VAR_11,
 load_result_t *VAR_12
)
{
 mach_vm_offset_t VAR_13;
 kern_return_t VAR_14;

 if (VAR_9->cmdsize < sizeof(*VAR_9))
  return (VAR_1);
 if (VAR_12->thread_count != 0) {
  return (VAR_2);
 }

 if (VAR_10 == VAR_7)
  return (VAR_3);





 if (VAR_9->stacksize) {
  if (FUNC_0(VAR_9->stacksize, 4*VAR_6, &VAR_12->user_stack_size)) {






   return VAR_1;
  }
  VAR_12->user_stack_size = VAR_9->stacksize;
  if (FUNC_0(VAR_9->stacksize, VAR_6, &VAR_12->user_stack_alloc_size)) {
   return VAR_1;
  }
 } else {
  VAR_12->user_stack_alloc_size = VAR_5;
 }


 VAR_14 = FUNC_2(&VAR_13, VAR_12->is_64bit_addr);
 if (VAR_14 != VAR_0)
  return(VAR_2);


 VAR_12->user_stack = VAR_13;
 VAR_12->user_stack -= VAR_11;

 if (VAR_12->using_lcmain || VAR_12->entry_point != VAR_4) {

  return (VAR_2);
 }


 VAR_12->needs_dynlinker = VAR_8;
 VAR_12->using_lcmain = VAR_8;

 VAR_14 = FUNC_1( VAR_10 );
 if (VAR_14 != VAR_0) {
  return(VAR_2);
 }

 VAR_12->unixproc = VAR_8;
 VAR_12->thread_count++;

 return(VAR_3);
}
