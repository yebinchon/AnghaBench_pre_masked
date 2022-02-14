
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int thread_t ;
typedef TYPE_1__* proc_t ;
typedef int pid_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_3__ {int task; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int*) ;
 scalar_t__ FUNC_5 (int *) ;

int
FUNC_6(uint32_t *VAR_8)
{
 uint32_t VAR_9;
 proc_t VAR_10 = FUNC_0();
 uint32_t VAR_11 = 0;
 kern_return_t VAR_12;
 pid_t VAR_13;
 int VAR_14;
 thread_t VAR_15 = FUNC_1();

 VAR_9 = FUNC_3(VAR_15, VAR_7);


 if (VAR_9) {
  *VAR_8 = 1;
  return 0;
 }


 FUNC_2(VAR_10->task, &VAR_11);
 if ((VAR_11 & VAR_6) == VAR_6) {
  *VAR_8 = 0;
  return 0;
 }





 VAR_12 = FUNC_5(&VAR_13);
 if (VAR_12 != VAR_5) {
  if (VAR_12 == VAR_3)
   return VAR_2;
  else if (VAR_12 == VAR_4)
   return VAR_1;
  else
   return VAR_0;
 }

 VAR_14 = FUNC_4(VAR_13, VAR_8);
 return VAR_14;
}
