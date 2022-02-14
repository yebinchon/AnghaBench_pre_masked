
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_state_t ;
struct arm_act_context {int vfps; int ss; } ;
typedef scalar_t__ kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (struct arm_act_context*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;

void
FUNC_3(void *VAR_5)
{
 struct arm_act_context *VAR_6;
 kern_return_t VAR_7;

 VAR_6 = (struct arm_act_context *) VAR_5;

 if (VAR_6 == (struct arm_act_context *) ((void*)0))
  return;

 VAR_7 = FUNC_2(FUNC_0(),
     VAR_0,
     (thread_state_t) & VAR_6->ss,
     VAR_1);
 if (VAR_7 != VAR_4)
  goto out;
out:
 FUNC_1(VAR_6, sizeof(struct arm_act_context));
}
