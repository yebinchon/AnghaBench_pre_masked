
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {int pfc_cpus; int pfc_invalid_global; } ;
typedef TYPE_1__ pmap_flush_context ;
typedef int cpumask_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ cpu_tlb_invalid; void* cpu_tlb_invalid_local; void* cpu_tlb_invalid_global; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int *,int,...) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 TYPE_3__* FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 unsigned int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned int,int ,int ) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (char*,int,long,long,scalar_t__) ;
 int FUNC_15 () ;
 unsigned int VAR_12 ;

void
FUNC_16(
 pmap_flush_context *VAR_13)
{
 unsigned int VAR_14;
 unsigned int VAR_15;
 cpumask_t VAR_16;
 cpumask_t VAR_17 = 0;
 cpumask_t VAR_18 = 0;
 cpumask_t VAR_19 = 0;
 boolean_t VAR_20 = VAR_3;
 uint64_t VAR_21;

 FUNC_12();

 VAR_14 = FUNC_6();
 VAR_18 = VAR_13->pfc_cpus;

 FUNC_3(FUNC_2(VAR_7) | VAR_2,
                     ((void*)0), VAR_18);

 for (VAR_15 = 0, VAR_16 = 1; VAR_15 < VAR_12 && VAR_18; VAR_15++, VAR_16 <<= 1) {

  if (VAR_18 & VAR_16) {

   VAR_18 &= ~VAR_16;

   if (!FUNC_5(VAR_15))
    continue;

   if (VAR_13->pfc_invalid_global & VAR_16)
    FUNC_4(VAR_15)->cpu_tlb_invalid_global = VAR_11;
   else
    FUNC_4(VAR_15)->cpu_tlb_invalid_local = VAR_11;
   FUNC_11();

   if (VAR_15 == VAR_14) {
    VAR_20 = VAR_11;
    continue;
   }
   if (FUNC_0(VAR_15)) {
    VAR_17 |= VAR_16;
    FUNC_8(VAR_15, VAR_5, VAR_0);
   }
  }
 }
 VAR_19 = VAR_17;





 if (VAR_20 && FUNC_4(VAR_14)->cpu_tlb_invalid != VAR_3)
  FUNC_15();

 if (VAR_17) {

  VAR_21 = FUNC_9() +
    (VAR_9 ? VAR_9 : VAR_4);
  boolean_t VAR_22 = VAR_3;




  while (VAR_17 != 0) {
   long VAR_23 = 0;

   for (VAR_15 = 0, VAR_16 = 1; VAR_15 < VAR_12; VAR_15++, VAR_16 <<= 1) {



    if ((VAR_17 & VAR_16) != 0) {
     if (!FUNC_5(VAR_15) ||
         FUNC_4(VAR_15)->cpu_tlb_invalid == VAR_3 ||
         !FUNC_0(VAR_15)) {
      VAR_17 &= ~VAR_16;
     }
     FUNC_7();
    }
    if (VAR_17 == 0)
     break;
   }
   if (VAR_17 && (FUNC_9() > VAR_21)) {
    if (FUNC_10())
     continue;
    if (VAR_9 == 0) {
     if (VAR_22)
      continue;

     FUNC_3(FUNC_2(VAR_8),
                         ((void*)0), VAR_18, VAR_17);

     VAR_22 = VAR_11;
     continue;
    }
    VAR_23 = VAR_6;
    FUNC_1(VAR_17, VAR_10);
    FUNC_14("Uninterruptible processor(s): CPU bitmap: 0x%llx, NMIPI acks: 0x%lx, now: 0x%lx, deadline: %llu",
          VAR_17, VAR_23, VAR_6, VAR_21);
   }
  }
 }

 FUNC_3(FUNC_2(VAR_7) | VAR_1,
                     ((void*)0), VAR_19, VAR_20);

 FUNC_13();
}
