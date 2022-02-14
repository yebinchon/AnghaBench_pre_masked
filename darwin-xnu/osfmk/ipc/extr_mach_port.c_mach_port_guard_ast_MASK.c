
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef TYPE_2__* task_t ;
typedef int mach_exception_data_type_t ;
struct TYPE_8__ {unsigned int task_exc_guard; } ;
struct TYPE_7__ {TYPE_2__* task; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,unsigned int,unsigned int*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 () ;





 TYPE_2__* VAR_5 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int *) ;

void
FUNC_7(thread_t VAR_6,
 mach_exception_data_type_t VAR_7, mach_exception_data_type_t VAR_8)
{
 unsigned int VAR_9 = FUNC_0(VAR_7);
 task_t VAR_10 = VAR_6->task;
 unsigned int VAR_11 = VAR_10->task_exc_guard;
 FUNC_2(VAR_10 == FUNC_3());
 FUNC_2(VAR_10 != VAR_5);

 switch (VAR_9) {



 case 132:
 case 130:
 case 129:
 case 128:
 case 131:
  FUNC_5(VAR_0, VAR_7, VAR_8);
  FUNC_4(VAR_10);
  break;

 default:





  if ((VAR_11 & VAR_2) == 0) {
   return;
  }


  while (VAR_11 & VAR_4) {
   uint32_t VAR_12 = VAR_11 & ~VAR_2;

   if (FUNC_1(VAR_11, VAR_12, &VAR_10->task_exc_guard)) {
    break;
   }
   VAR_11 = VAR_10->task_exc_guard;
   if ((VAR_11 & VAR_2) == 0) {
    return;
   }
  }


  if ((VAR_10->task_exc_guard & VAR_1) &&
      (VAR_10->task_exc_guard & VAR_3) == 0) {
   FUNC_6(VAR_7, VAR_8, ((void*)0));
  } else {
   FUNC_5(VAR_0, VAR_7, VAR_8);
  }


  if (VAR_10->task_exc_guard & VAR_3) {
   FUNC_4(VAR_10);
  }
  break;
 }
}
