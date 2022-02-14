
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct runtime_instr_cb {int buf_limit; int home_space; int int_requested; int pstate; int pstate_set_buf; int pstate_sample; int pstate_collect; int valid; int key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct runtime_instr_cb *VAR_3)
{
 VAR_3->buf_limit = 0xfff;
 if (VAR_2 == VAR_0)
  VAR_3->home_space = 1;
 VAR_3->int_requested = 1;
 VAR_3->pstate = 1;
 VAR_3->pstate_set_buf = 1;
 VAR_3->pstate_sample = 1;
 VAR_3->pstate_collect = 1;
 VAR_3->key = VAR_1;
 VAR_3->valid = 1;
}
