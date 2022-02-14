
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x86_saved_state_t ;
typedef int x86_debug_state64_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int,int,int,char*) ;

void
FUNC_2(void)
{
 VAR_2 = FUNC_1(sizeof(x86_saved_state_t),
   VAR_3 * sizeof(x86_saved_state_t),
   VAR_0 * sizeof(x86_saved_state_t),
   "x86_64 saved state");

        VAR_1 = FUNC_1(sizeof(x86_debug_state64_t),
    VAR_3 * sizeof(x86_debug_state64_t),
    VAR_0 * sizeof(x86_debug_state64_t),
    "x86_64 debug state");

 FUNC_0();
}
