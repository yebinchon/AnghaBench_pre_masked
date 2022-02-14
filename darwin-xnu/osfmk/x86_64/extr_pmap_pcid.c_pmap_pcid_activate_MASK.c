
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ pml4_entry_t ;
typedef TYPE_1__* pmap_t ;
typedef size_t pmap_paddr_t ;
typedef size_t pcid_t ;
struct TYPE_11__ {TYPE_1__** cpu_pcid_last_pmap_dispatched; } ;
typedef TYPE_2__ pcid_cdata_t ;
typedef int boolean_t ;
struct TYPE_13__ {int cpu_pmap_pcid_enabled; size_t cpu_last_pcid; size_t cpu_active_pcid; size_t cpu_kernel_pcid; size_t cpu_pcid_last_cr3; int cpu_ucr3; scalar_t__* cpu_pmap_pcid_coherentp; TYPE_2__* cpu_pcid_data; } ;
struct TYPE_12__ {int cpu_ucr3; size_t cpu_task_cr3; } ;
struct TYPE_10__ {size_t* pmap_pcid_cpus; scalar_t__* pmap_pcid_coherency_vector; size_t pm_cr3; scalar_t__* pm_pml4; int pm_ucr3; } ;


 int VAR_0 ;
 int FUNC_0 (int,TYPE_1__*,size_t,int,int,int ) ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_8__* FUNC_3 (int) ;
 TYPE_7__* FUNC_4 (int) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 size_t* VAR_8 ;
 scalar_t__* FUNC_5 (TYPE_1__*,unsigned long long) ;
 int FUNC_6 (int) ;
 size_t FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (size_t,size_t,int) ;

void FUNC_10(pmap_t VAR_9, int VAR_10, boolean_t VAR_11, boolean_t VAR_12) {
 pcid_t VAR_13 = VAR_9->pmap_pcid_cpus[VAR_10];
 pmap_t VAR_14;
 boolean_t VAR_15 = VAR_0, VAR_16 = VAR_0;
 pcid_cdata_t *VAR_17 = FUNC_3(VAR_10)->cpu_pcid_data;

 FUNC_6(FUNC_3(VAR_10)->cpu_pmap_pcid_enabled);
 if (FUNC_1(VAR_13 == VAR_3)) {
  VAR_13 = VAR_9->pmap_pcid_cpus[VAR_10] = FUNC_7(VAR_10);
 }

 FUNC_6(VAR_13 != VAR_3);



 FUNC_3(VAR_10)->cpu_active_pcid = VAR_13;

 VAR_16 = (VAR_9->pmap_pcid_coherency_vector[VAR_10] != 0);
 if (FUNC_2(VAR_16 == VAR_0)) {
  VAR_14 = VAR_17->cpu_pcid_last_pmap_dispatched[VAR_13];
  VAR_15 = ((VAR_14 != ((void*)0)) && (VAR_9 != VAR_14));
 }
 if (FUNC_1(VAR_16 || VAR_15)) {
  FUNC_8(VAR_9, VAR_10);
 }

 VAR_17->cpu_pcid_last_pmap_dispatched[VAR_13] = VAR_9;

 FUNC_6(VAR_13 < VAR_4);
 FUNC_6(((VAR_9 == VAR_6) && VAR_13 == 0) ||
     ((VAR_13 != VAR_3) && (VAR_13 != 0)));
 pmap_paddr_t VAR_18 = VAR_9->pm_cr3;

 if (FUNC_1(VAR_11)) {
  VAR_16 = VAR_5;
  if (VAR_12 == VAR_0) {
   VAR_13 = VAR_6->pmap_pcid_cpus[VAR_10];
   VAR_18 = VAR_6->pm_cr3;
  }
  FUNC_3(VAR_10)->cpu_kernel_pcid = VAR_6->pmap_pcid_cpus[VAR_10];
  VAR_7++;
 }

 uint64_t VAR_19 = !(VAR_16 || VAR_15);
 FUNC_9(VAR_18, VAR_13, VAR_19);



 uint64_t VAR_20 = (VAR_13 + VAR_4);
 if (VAR_13 == 0) {
  VAR_20 = 0;
 }
 uint64_t VAR_21 = VAR_9->pm_ucr3 | VAR_20;

 FUNC_3(VAR_10)->cpu_ucr3 = VAR_21;
 FUNC_4(VAR_10)->cpu_ucr3 = VAR_21;

 FUNC_4(VAR_10)->cpu_task_cr3 = VAR_18 | VAR_13;

 if (!VAR_16) {
  VAR_16 = (VAR_9->pmap_pcid_coherency_vector[VAR_10] != 0);
  if (FUNC_1(VAR_16 != 0)) {
   FUNC_8(VAR_9, VAR_10);
   FUNC_9(VAR_18, VAR_13, VAR_0);
  }
 }
 FUNC_3(VAR_10)->cpu_pmap_pcid_coherentp = &(VAR_9->pmap_pcid_coherency_vector[VAR_10]);



}
