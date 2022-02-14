
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cpu_CLW_active; int cpu_number; TYPE_1__* cpu_processor; int rtcPop; int cpu_active_thread; int cpu_flags; } ;
typedef TYPE_2__ cpu_data_t ;
struct TYPE_5__ {int cpu_id; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 () ;

void
FUNC_20(
 cpu_data_t *VAR_10)
{




 VAR_10->cpu_flags &= ~VAR_5;




 FUNC_13(VAR_10->cpu_active_thread);
 FUNC_7(VAR_3);

 FUNC_6();
 FUNC_8(VAR_3);

 if (VAR_10 == &VAR_0) {







  FUNC_16();
  FUNC_1(VAR_6, ((void*)0));
  FUNC_4();
 }

 FUNC_9(VAR_6);
 VAR_10->rtcPop = VAR_2;
 FUNC_19();





 FUNC_12("arm_cpu_init(): cpu %d online\n", VAR_10->cpu_processor->cpu_id);

 if (VAR_10 == &VAR_0) {



 }





 FUNC_18(((void*)0));
}
