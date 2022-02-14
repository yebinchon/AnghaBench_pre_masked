
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;


typedef TYPE_1__* vm_map_offset_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef TYPE_1__* pmap_t ;
typedef scalar_t__ pmap_paddr_t ;
struct TYPE_20__ {int pfc_invalid_global; int pfc_cpus; } ;
typedef TYPE_3__ pmap_flush_context ;
typedef int cpumask_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_19__ {scalar_t__ pm_cr3; scalar_t__ pm_shared; scalar_t__ pm_eptp; } ;
struct TYPE_18__ {scalar_t__ cpu_tlb_invalid; scalar_t__ cpu_tlb_invalid_local; scalar_t__ cpu_tlb_invalid_global; } ;
struct TYPE_17__ {long cpu_active_cr3; scalar_t__ cpu_task_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 (int,TYPE_1__*,int,...) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 TYPE_13__* FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 unsigned int FUNC_11 () ;
 int FUNC_12 () ;
 TYPE_12__* FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (unsigned int,int ,int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 TYPE_1__* VAR_17 ;
 scalar_t__ FUNC_18 () ;
 scalar_t__ FUNC_19 () ;
 int FUNC_20 () ;
 scalar_t__ FUNC_21 () ;
 int FUNC_22 (int ,int ,int ,void*) ;
 int FUNC_23 (char*,int,scalar_t__,long,scalar_t__) ;
 int FUNC_24 (TYPE_1__*) ;
 scalar_t__ VAR_18 ;
 int FUNC_25 (TYPE_1__*,unsigned int) ;
 int VAR_19 ;
 unsigned int VAR_20 ;
 int FUNC_26 () ;

void
FUNC_27(pmap_t VAR_21, vm_map_offset_t VAR_22, vm_map_offset_t VAR_23, int VAR_24, pmap_flush_context *VAR_25)
{
 unsigned int VAR_26;
 cpumask_t VAR_27;
 cpumask_t VAR_28 = 0;
 unsigned int VAR_29 = FUNC_11();
 pmap_paddr_t VAR_30 = VAR_21->pm_cr3;
 boolean_t VAR_31 = VAR_4;
 uint64_t VAR_32;
 boolean_t VAR_33 = (VAR_21->pm_shared || (VAR_21 == VAR_17));
 boolean_t VAR_34 = VAR_4;
 uint32_t VAR_35;
 vm_map_offset_t VAR_36, VAR_37;
 boolean_t VAR_38 = FUNC_17(VAR_21);

 FUNC_8((VAR_19 < 2) ||
        (FUNC_21() && FUNC_15() != 0));

 if (VAR_21 == VAR_17) {
  VAR_35 = FUNC_4(VAR_10);
  VAR_36 = FUNC_6(VAR_22);
  VAR_37 = FUNC_6(VAR_23);
 } else if (VAR_38) {
  VAR_35 = FUNC_4(VAR_9);
  VAR_36 = VAR_22;
  VAR_37 = VAR_23;
 } else {
  VAR_35 = FUNC_4(VAR_11);
  VAR_36 = VAR_22;
  VAR_37 = VAR_23;
 }

 FUNC_5(VAR_35 | VAR_3,
                     FUNC_6(VAR_21), VAR_24,
                     VAR_36, VAR_37);

 if (VAR_38) {
  FUNC_22(VAR_1, VAR_0, VAR_16, (void*)VAR_21->pm_eptp);
  goto out;
 }






 if (VAR_18) {
  if (VAR_33)
   VAR_34 = VAR_15;
  FUNC_24(VAR_21);
  FUNC_20();
 }
 for (VAR_26 = 0, VAR_27 = 1; VAR_26 < VAR_20; VAR_26++, VAR_27 <<= 1) {
  if (!FUNC_10(VAR_26))
   continue;
  uint64_t VAR_39 = FUNC_1(VAR_26);
  uint64_t VAR_40 = FUNC_2(VAR_26);

  if ((VAR_30 == VAR_40) ||
      (VAR_30 == VAR_39) ||
      (VAR_33)) {

   if (VAR_24 & VAR_8) {
    if (VAR_34 == VAR_15)
     VAR_25->pfc_invalid_global |= VAR_27;
    VAR_25->pfc_cpus |= VAR_27;

    continue;
   }
   if (VAR_26 == VAR_29) {
    VAR_31 = VAR_15;
    continue;
   }
   if (VAR_34 == VAR_15)
    FUNC_9(VAR_26)->cpu_tlb_invalid_global = VAR_15;
   else
    FUNC_9(VAR_26)->cpu_tlb_invalid_local = VAR_15;
   FUNC_20();
   if (FUNC_0(VAR_26) &&
       (VAR_30 == FUNC_1(VAR_26) ||
        VAR_21->pm_shared ||
        (VAR_30 == FUNC_2(VAR_26)))) {
    VAR_28 |= VAR_27;
    FUNC_16(VAR_26, VAR_6, VAR_0);
   }
  }
 }
 if ((VAR_24 & VAR_8))
  goto out;





 if (VAR_31) {
  if (VAR_18) {
   FUNC_25(VAR_21, VAR_29);
   if (VAR_33)
    FUNC_26();
   else
    FUNC_14();
  }
  else
   FUNC_14();
 }

 if (VAR_28) {
  cpumask_t VAR_41 = VAR_28;

  VAR_32 = FUNC_18() +
    (VAR_13 ? VAR_13 : VAR_5);
  boolean_t VAR_42 = VAR_4;




  while (VAR_41 != 0) {
   long VAR_43 = 0;

   for (VAR_26 = 0, VAR_27 = 1; VAR_26 < VAR_20; VAR_26++, VAR_27 <<= 1) {



    if ((VAR_41 & VAR_27) != 0) {
     if (!FUNC_10(VAR_26) ||
         FUNC_9(VAR_26)->cpu_tlb_invalid == VAR_4 ||
         !FUNC_0(VAR_26)) {
      VAR_41 &= ~VAR_27;
     }
     FUNC_12();
    }
    if (VAR_41 == 0)
     break;
   }
   if (VAR_41 && (FUNC_18() > VAR_32)) {
    if (FUNC_19())
     continue;
    if (VAR_13 == 0) {

     if (VAR_42)
      continue;

     FUNC_5(FUNC_4(VAR_12),
                         FUNC_6(VAR_21),
                         VAR_28,
                         VAR_41);

     VAR_42 = VAR_15;
     continue;
    }
    VAR_43 = VAR_7;

    FUNC_3(VAR_41, VAR_14);
    FUNC_23("TLB invalidation IPI timeout, unresponsive CPU bitmap: 0x%llx, NMIPI acks: 0x%lx, now: 0x%lx, deadline: %llu",
          VAR_41, VAR_43, VAR_7, VAR_32);
   }
  }
 }

 if (FUNC_7((VAR_21 == VAR_17) && (VAR_31 != VAR_15))) {
  FUNC_23("pmap_flush_tlbs: pmap == kernel_pmap && flush_self != TRUE; kernel CR3: 0x%llX, pmap_cr3: 0x%llx, CPU active CR3: 0x%llX, CPU Task Map: %d", VAR_17->pm_cr3, VAR_30, FUNC_13()->cpu_active_cr3, FUNC_13()->cpu_task_map);
 }

out:
 FUNC_5(VAR_35 | VAR_2,
                     FUNC_6(VAR_21), VAR_28,
                     VAR_36, VAR_37);

}
