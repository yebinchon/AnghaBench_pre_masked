
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int kern_return_t ;
typedef int boolean_t ;
struct TYPE_5__ {int cpu_running; } ;
struct TYPE_4__ {int target_cpu; int target_lapic; int starter_cpu; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 int* VAR_3 ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;
 int FUNC_13 (int ,void*) ;
 int FUNC_14 (char*,int) ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

kern_return_t
FUNC_15(
 int VAR_9)
{
 int VAR_10 = VAR_3[VAR_9];
 boolean_t VAR_11;

 FUNC_2(VAR_10 != -1);

 FUNC_1(VAR_9);

 FUNC_0("intel_startCPU(%d) lapic_id=%d\n", VAR_9, VAR_10);
 FUNC_0("IdlePTD(%p): 0x%x\n", &VAR_1, (int) (uintptr_t)VAR_1);





 FUNC_4(FUNC_3(VAR_9));


 FUNC_10(&VAR_4);

 VAR_11 = FUNC_12(VAR_0);
 if (VAR_9 == FUNC_7()) {
  FUNC_12(VAR_11);
  FUNC_11(&VAR_4);
  return VAR_2;
 }

 VAR_6.starter_cpu = FUNC_5();
 VAR_6.target_cpu = VAR_9;
 VAR_6.target_lapic = VAR_10;
 VAR_7 = 2;
 VAR_8 = 2;






 FUNC_13(VAR_5, (void *) &VAR_6);

 VAR_6.target_cpu = 0;

 FUNC_12(VAR_11);
 FUNC_11(&VAR_4);

 if (!FUNC_3(VAR_9)->cpu_running) {
  FUNC_9("Failed to start CPU %02d\n", VAR_9);
  FUNC_14("Failed to start CPU %02d, rebooting...\n", VAR_9);
  FUNC_6(1000000);
  FUNC_8();
  return VAR_2;
 } else {
  FUNC_9("Started cpu %d (lapic id %08x)\n", VAR_9, VAR_10);
  return VAR_2;
 }
}
