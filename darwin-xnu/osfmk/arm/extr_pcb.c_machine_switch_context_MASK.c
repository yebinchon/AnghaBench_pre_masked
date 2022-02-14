
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_3__* thread_t ;
typedef int thread_continue_t ;
typedef int cpu_data_t ;
struct TYPE_15__ {int * CpuDatap; } ;
struct TYPE_16__ {TYPE_2__ machine; TYPE_1__* map; } ;
struct TYPE_14__ {int pmap; } ;


 TYPE_3__* FUNC_0 (TYPE_3__*,int ,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*,TYPE_3__*,int ,TYPE_3__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,TYPE_3__*) ;

thread_t
FUNC_7(
         thread_t VAR_0,
         thread_continue_t VAR_1,
         thread_t VAR_2)
{
 thread_t VAR_3;
 cpu_data_t *VAR_4;




 VAR_4 = FUNC_2();
 if (VAR_0 == VAR_2)
  FUNC_5("machine_switch_context");

 FUNC_3(VAR_0);

 FUNC_6(VAR_2->map->pmap, VAR_2);

 VAR_2->machine.CpuDatap = VAR_4;

                                                                                              ;
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_3 != ((void*)0));

 return VAR_3;
}
