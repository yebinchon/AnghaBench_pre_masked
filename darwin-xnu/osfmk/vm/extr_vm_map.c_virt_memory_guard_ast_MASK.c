
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef TYPE_2__* task_t ;
typedef int mach_exception_data_type_t ;
struct TYPE_8__ {int task_exc_guard; } ;
struct TYPE_7__ {TYPE_2__* task; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 () ;
 TYPE_2__* VAR_5 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int *) ;

void
FUNC_6(
 thread_t VAR_6,
 mach_exception_data_type_t VAR_7,
 mach_exception_data_type_t VAR_8)
{
 task_t VAR_9 = VAR_6->task;
 FUNC_1(VAR_9 != VAR_5);
 FUNC_1(VAR_9 == FUNC_2());
 uint32_t VAR_10;

 VAR_10 = VAR_9->task_exc_guard;


 if ((VAR_10 & VAR_2) == 0) {
  return;
 }


 while (VAR_10 & VAR_4) {
  uint32_t VAR_11 = VAR_10 & ~VAR_2;

  if (FUNC_0(VAR_10, VAR_11, &VAR_9->task_exc_guard)) {
   break;
  }
  VAR_10 = VAR_9->task_exc_guard;
  if ((VAR_10 & VAR_2) == 0) {
   return;
  }
 }


 if ((VAR_9->task_exc_guard & VAR_1) &&
     (VAR_9->task_exc_guard & VAR_3) == 0) {
  FUNC_5(VAR_7, VAR_8, ((void*)0));
 } else {
  FUNC_4(VAR_0, VAR_7, VAR_8);
 }


 if (VAR_9->task_exc_guard & VAR_3) {
  FUNC_3(FUNC_2());
 }
}
