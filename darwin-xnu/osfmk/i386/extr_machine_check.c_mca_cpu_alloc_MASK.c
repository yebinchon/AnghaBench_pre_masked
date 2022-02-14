
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int mca_state_t ;
typedef int mca_mci_bank_t ;
struct TYPE_4__ {int cpu_number; int * cpu_mca_state; } ;
typedef TYPE_1__ cpu_data_t ;


 int FUNC_0 (void*,int) ;
 TYPE_1__* FUNC_1 (int ) ;
 int * FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int) ;

void
FUNC_4(cpu_data_t *VAR_2)
{
 vm_size_t VAR_3;




 VAR_3 = sizeof(mca_state_t) +
    sizeof(mca_mci_bank_t) * VAR_1;
 VAR_2->cpu_mca_state = FUNC_2(VAR_3);
 if (VAR_2->cpu_mca_state == ((void*)0)) {
  FUNC_3("mca_cpu_alloc() failed for cpu %d\n", VAR_2->cpu_number);
  return;
 }
 FUNC_0((void *) VAR_2->cpu_mca_state, VAR_3);





 if (FUNC_1(VAR_0)->cpu_mca_state == ((void*)0))
  FUNC_4(FUNC_1(VAR_0));
}
