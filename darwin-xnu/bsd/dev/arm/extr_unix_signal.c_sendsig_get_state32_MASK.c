
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int thread_t ;
typedef int thread_state_t ;
struct TYPE_3__ {int fs; int es; int ss; } ;
typedef TYPE_1__ mcontext32_t ;
typedef int mach_msg_type_number_t ;
typedef int arm_thread_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_6(thread_t VAR_8, arm_thread_state_t *VAR_9, mcontext32_t *VAR_10)
{
 void *VAR_11;
 mach_msg_type_number_t VAR_12;

 FUNC_0(!FUNC_3(FUNC_1()));

 VAR_11 = (void *) VAR_9;
 VAR_12 = VAR_3;
 if (FUNC_4(VAR_8, VAR_2, (thread_state_t) VAR_11, &VAR_12) != VAR_7)
  return VAR_6;

 VAR_10->ss = *VAR_9;
 VAR_11 = (void *) &VAR_10->ss;
 VAR_12 = VAR_3;
 if (FUNC_2(VAR_8, VAR_2, (thread_state_t) VAR_11, &VAR_12) != VAR_7)
  return VAR_6;

 VAR_11 = (void *) &VAR_10->es;
 VAR_12 = VAR_1;
 if (FUNC_4(VAR_8, VAR_0, (thread_state_t) VAR_11, &VAR_12) != VAR_7)
  return VAR_6;

 VAR_11 = (void *) &VAR_10->fs;
 VAR_12 = VAR_5;
 if (FUNC_5(VAR_8, VAR_4, (thread_state_t) VAR_11, &VAR_12) != VAR_7)
  return VAR_6;

 return 0;
}
