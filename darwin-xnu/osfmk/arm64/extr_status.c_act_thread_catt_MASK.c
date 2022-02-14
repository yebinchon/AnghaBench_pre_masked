
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int thread_state_t ;
struct arm_act_context {int ns; int ss; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (struct arm_act_context*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4(void *VAR_7)
{
 struct arm_act_context *VAR_8;
 kern_return_t VAR_9;
 thread_t VAR_10 = FUNC_0();

 VAR_8 = (struct arm_act_context *) VAR_7;
 if (VAR_8 == (struct arm_act_context *) ((void*)0))
  return;

 VAR_9 = FUNC_2(VAR_10, VAR_4, (thread_state_t)&VAR_8->ss, VAR_5);
 if (VAR_9 != VAR_6)
  goto out;
out:
 FUNC_1(VAR_8, sizeof(struct arm_act_context));
}
