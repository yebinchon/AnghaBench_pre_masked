
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int thread_t ;
typedef int thread_state_t ;
typedef int thread_continue_t ;
typedef TYPE_1__* task_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {scalar_t__ suspend_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_1__*,int,int ,int *,int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static kern_return_t
FUNC_12(
 task_t VAR_7,
 int VAR_8,
 thread_state_t VAR_9,
 mach_msg_type_number_t VAR_10,
 thread_t *VAR_11,
 boolean_t VAR_12)
{
 kern_return_t VAR_13;
 thread_t VAR_14;

 if (VAR_7 == VAR_2 || VAR_7 == VAR_4)
  return (VAR_0);

 VAR_13 = FUNC_5(VAR_7, -1,
   (thread_continue_t)VAR_6, ((void*)0),
   VAR_3, &VAR_14);
 if (VAR_13 != VAR_1)
  return (VAR_13);

 if (VAR_7->suspend_count > 0)
  FUNC_7(VAR_14);

 if (VAR_12) {
  VAR_13 = FUNC_3(VAR_14, VAR_8,
    VAR_9, VAR_10);
 }
 if (VAR_13 == VAR_1) {
  VAR_13 = FUNC_2(VAR_14, VAR_8, VAR_9,
    VAR_10);
 }
 if (VAR_13 != VAR_1) {
  FUNC_4(VAR_7);
  FUNC_1(&VAR_5);

  FUNC_11(VAR_14);
  FUNC_6(VAR_14);
  return (VAR_13);
 }

 FUNC_8(VAR_14);
 FUNC_10(VAR_14);
 FUNC_9(VAR_14);

 if (VAR_12)
  FUNC_0(VAR_7);

 FUNC_4(VAR_7);
 FUNC_1(&VAR_5);

 *VAR_11 = VAR_14;

 return (VAR_13);
}
