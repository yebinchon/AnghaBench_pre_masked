
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int arm_debug_state_t ;
typedef int arm_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* FUNC_0 (int,int,int,char*) ;

void
FUNC_1(void)
{
 VAR_3 = FUNC_0(sizeof(arm_debug_state_t),
                  VAR_1 * (sizeof(arm_debug_state_t)),
                  VAR_1 * (sizeof(arm_debug_state_t)),
                  "arm debug state");
 VAR_4 = FUNC_0(sizeof(arm_context_t),
                      VAR_0 * (sizeof(arm_context_t)),
                      VAR_2,
                      "user save state");
}
