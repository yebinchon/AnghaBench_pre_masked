
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int thread_state_t ;
struct x86_act_context64 {int fs; int ss; } ;
struct x86_act_context32 {int fs; int ss; } ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct x86_act_context64*,int) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_4(void *VAR_9)
{
        thread_t VAR_10 = FUNC_0();
 kern_return_t VAR_11;

 if (VAR_9 == (void *)((void*)0))
    return;

        if (FUNC_3(VAR_10)) {
         struct x86_act_context64 *VAR_12;

         VAR_12 = (struct x86_act_context64 *)VAR_9;

  VAR_11 = FUNC_2(VAR_10, VAR_7,
      (thread_state_t) &VAR_12->ss, VAR_8);
  if (VAR_11 == VAR_0) {
           FUNC_2(VAR_10, VAR_3,
        (thread_state_t) &VAR_12->fs, VAR_4);
  }
  FUNC_1(VAR_12, sizeof(struct x86_act_context64));
 } else {
         struct x86_act_context32 *VAR_13;

         VAR_13 = (struct x86_act_context32 *)VAR_9;

  VAR_11 = FUNC_2(VAR_10, VAR_5,
      (thread_state_t) &VAR_13->ss, VAR_6);
  if (VAR_11 == VAR_0) {
   (void) FUNC_2(VAR_10, VAR_1,
       (thread_state_t) &VAR_13->fs, VAR_2);
  }
  FUNC_1(VAR_13, sizeof(struct x86_act_context32));
 }
}
