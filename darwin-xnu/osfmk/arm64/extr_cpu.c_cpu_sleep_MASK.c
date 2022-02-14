
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {uintptr_t cpu_reset_handler; int cpu_id; int * cpu_user_debug; int cpu_flags; int cpu_active_thread; } ;
typedef TYPE_1__ cpu_data_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;

void
FUNC_7(void)
{
 cpu_data_t *VAR_3 = FUNC_3();

 FUNC_6(VAR_1);
 VAR_3->cpu_active_thread = FUNC_2();
 VAR_3->cpu_reset_handler = (uintptr_t) VAR_2;
 VAR_3->cpu_flags |= VAR_0;
 VAR_3->cpu_user_debug = ((void*)0);







 FUNC_0();

 FUNC_1(VAR_3->cpu_id);

}
