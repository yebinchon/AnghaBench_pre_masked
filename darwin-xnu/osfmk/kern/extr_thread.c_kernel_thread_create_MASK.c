
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int thread_continue_t ;
typedef int task_t ;
typedef scalar_t__ kern_return_t ;
typedef int integer_t ;
struct TYPE_6__ {scalar_t__ kernel_stack; scalar_t__ reserved_stack; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ,int ,int ,void*,int,TYPE_1__**) ;

kern_return_t
FUNC_6(
 thread_continue_t VAR_7,
 void *VAR_8,
 integer_t VAR_9,
 thread_t *VAR_10)
{
 kern_return_t VAR_11;
 thread_t VAR_12;
 task_t VAR_13 = VAR_5;

 VAR_11 = FUNC_5(VAR_13, VAR_9, VAR_7, VAR_8,
   VAR_2 | VAR_3, &VAR_12);
 if (VAR_11 != VAR_1)
  return (VAR_11);

 FUNC_4(VAR_13);
 FUNC_2(&VAR_6);

 FUNC_3(VAR_12);
 FUNC_0(VAR_12->kernel_stack != 0);



 VAR_12->reserved_stack = VAR_12->kernel_stack;

if(VAR_4 & 1)
 FUNC_1("kernel_thread_create: thread = %p continuation = %p\n", VAR_12, VAR_7);
 *VAR_10 = VAR_12;

 return (VAR_11);
}
