
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int queue; } ;
typedef TYPE_1__ mp_call_queue_t ;
typedef int cpumask_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;
 size_t FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 () ;

__attribute__((used)) static void
FUNC_11(boolean_t VAR_2,
    cpumask_t VAR_3,
    cpumask_t *VAR_4)
{
 mp_call_queue_t *VAR_5;
 uint64_t VAR_6;

 FUNC_1(FUNC_5() == 0 || FUNC_4() != 0);
 VAR_5 = &VAR_1[FUNC_2()];

 VAR_6 = FUNC_10();
 while (*VAR_4 != VAR_3) {
  if (!VAR_2) {

   if (!FUNC_9(&VAR_5->queue))
    FUNC_6();
   FUNC_3(((void*)0));
  }
  if (FUNC_7(VAR_6)) {
   cpumask_t VAR_7;

   VAR_7 = VAR_3 & ~(*VAR_4);
   FUNC_0(VAR_7, VAR_0);
   FUNC_8("mp_cpus_call_wait() timeout, cpus: 0x%llx",
    VAR_7);
  }
 }
}
