
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int nsmep ;
typedef int nsmap ;
struct TYPE_5__ {scalar_t__ cpu_fixed_pmcs_enabled; int cpu_task_map; void* cpu_tlb_invalid; int cpu_active_cr3; int cpu_kernel_cr3; int cpu_number; } ;
typedef TYPE_1__ cpu_data_t ;
typedef void* boolean_t ;
struct TYPE_7__ {int cpu_kernel_cr3; } ;
struct TYPE_6__ {int pm_cr3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ FUNC_0 (char*,void**,int) ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_1 (void**) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 () ;
 TYPE_2__* VAR_8 ;
 int FUNC_6 () ;
 void* VAR_9 ;
 void* VAR_10 ;
 int FUNC_7 (int) ;

void
FUNC_8(void)
{
 cpu_data_t *VAR_11 = FUNC_4();

 FUNC_7(FUNC_5() | VAR_2);




 VAR_11->cpu_kernel_cr3 = VAR_8->pm_cr3;
 FUNC_2(VAR_11->cpu_number)->cpu_kernel_cr3 = VAR_11->cpu_kernel_cr3;
 VAR_11->cpu_active_cr3 = VAR_8->pm_cr3;
 VAR_11->cpu_tlb_invalid = VAR_5;
 VAR_11->cpu_task_map = VAR_6;

 FUNC_6();
 if (FUNC_3() & VAR_1) {
  VAR_10 = VAR_7;






  if (VAR_10) {
   FUNC_7(FUNC_5() | VAR_4);
  }

 }
 if (FUNC_3() & VAR_0) {
  VAR_9 = VAR_7;






  if (VAR_9) {
   FUNC_7(FUNC_5() | VAR_3);
  }
 }


 if (VAR_11->cpu_fixed_pmcs_enabled) {
  boolean_t VAR_12 = VAR_7;
  FUNC_1(&VAR_12);
 }

}
