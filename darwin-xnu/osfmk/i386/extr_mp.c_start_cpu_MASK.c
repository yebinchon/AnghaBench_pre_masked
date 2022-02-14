
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ starter_cpu; int target_cpu; scalar_t__ target_lapic; } ;
typedef TYPE_1__ processor_start_info_t ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ cpu_running; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,void*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int,scalar_t__,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__*,int) ;
 TYPE_2__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (char*,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_8 (int,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void
FUNC_12(void *VAR_7)
{
 int VAR_8 = 1000;
 processor_start_info_t *VAR_9 = (processor_start_info_t *) VAR_7;


 if (FUNC_5() != VAR_9->starter_cpu)
  return;

 FUNC_1("start_cpu(%p) about to start cpu %d, lapic %d\n",
  VAR_7, VAR_9->target_cpu, VAR_9->target_lapic);

 FUNC_2(
  VAR_2 | VAR_1,
  VAR_9->target_cpu,
  VAR_9->target_lapic, 0, 0, 0);

 FUNC_6(VAR_9->target_lapic, VAR_9->target_cpu);





 FUNC_1("start_cpu(%p) about to wait for cpu %d\n",
  VAR_7, VAR_9->target_cpu);

 FUNC_8(VAR_9->target_cpu, VAR_8*100, 100);

 FUNC_2(
  VAR_2 | VAR_0,
  VAR_9->target_cpu,
  FUNC_4(VAR_9->target_cpu)->cpu_running, 0, 0, 0);

 if (VAR_3 &&
     FUNC_4(VAR_9->target_cpu)->cpu_running) {






  uint64_t VAR_10;
  int64_t VAR_11;
  FUNC_3(&VAR_4, 1);
  while (VAR_4 != 0)
   ;
  VAR_10 = FUNC_11();
  FUNC_3(&VAR_5, 1);
  while (VAR_5 != 0)
   ;
  VAR_11 = VAR_6 - VAR_10;
  FUNC_7("TSC sync for cpu %d: 0x%016llx delta 0x%llx (%lld)\n",
   VAR_9->target_cpu, VAR_6, VAR_11, VAR_11);
  if (FUNC_0(VAR_11) > (int64_t) VAR_3) {



   FUNC_10(

    "Unsynchronized  TSC for cpu %d: "
     "0x%016llx, delta 0x%llx\n",
    VAR_9->target_cpu, VAR_6, VAR_11);
  }
 }
}
